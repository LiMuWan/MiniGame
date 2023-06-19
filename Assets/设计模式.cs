using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface Image
{
    void ShowImage();
}

public class HighResolutionImage : Image
{
    private string image_url;
    private long startTime;
    private int height;
    private int width;

    public int GetHeight()
    {
        return height;
    }

    public int GetWidth()
    {
       return width;
    }

    public HighResolutionImage(string image_url)
    {
        this.image_url = image_url;
        this.startTime = System.DateTime.Now.ToFileTime();
        this.height = 600;
        this.width = 600;
    }

    public bool isLoad()
    {
       //模拟图片加载，延迟3s加载完成
       long endTime = System.DateTime.Now.ToFileTime();
       return endTime - startTime > 3000;
    }

    public void ShowImage()
    {
        Debug.Log($"Real Image + {image_url}");
    }
}

//代理模式 如果图片未下载完，先用临时图片来替代
public class ImageProxy:Image
{
    private HighResolutionImage highResolutionImage;

    public ImageProxy(HighResolutionImage highResolutionImage)
    {
        this.highResolutionImage = highResolutionImage;
    }

    public void ShowImage()
    {
        while(!highResolutionImage.isLoad())
        {
            try
            {
               Debug.Log($"Temp Image : {highResolutionImage.GetWidth()},{highResolutionImage.GetHeight()}" );
               System.Threading.Thread.Sleep(100);
            }
            catch(System.Exception exception)
            {
                Debug.Log(exception);
            }
            highResolutionImage.ShowImage();
        }
    }
}

//原型模式
public abstract class ProtoType
{
    public abstract ProtoType MyClone();
}

public class ConcreteProtoType : ProtoType
{
    private string filed;
    
    public ConcreteProtoType(string filed)
    {
        this.filed = filed;
    }

    public override ProtoType MyClone()
    {
       return new ConcreteProtoType(filed);
    }

    public string toString()
    {
        return filed;
    }
}

public static class Main
{
   public static void Init()
   {
      ProtoType protoType = new ConcreteProtoType("abc");
      ProtoType clone = protoType.MyClone();
   }
}

//命令模式
public interface Command
{
    void Execute();
}

public class LightOnCommand:Command
{
    Light light;

    public LightOnCommand(Light light)
    {
        this.light = light;
    }

    public void Execute()
    {
        //light.on
    }
}

public class LightOffCommand:Command
{
    Light light;

    public LightOffCommand(Light light)
    {
        this.light = light;
    }

    public void Execute()
    {
        //light.off
    }
}

public class Invoker
{
    private Command[] onCommands;
    private Command[] offCommands;
    private const int slotNum = 7;

    public Invoker()
    {
        onCommands = new Command[slotNum];
        offCommands = new Command[slotNum];
    }

    public void SetOnCommand(Command command,int slot)
    {
        onCommands[slot] = command;
    }

    public void SetOffCommand(Command command,int slot)
    {
        offCommands[slot] = command;
    }

    public void OnButtonWasPushed(int slot)
    {
        onCommands[slot].Execute();
    }

    public void OffButtonWasPushed(int slot)
    {
        offCommands[slot].Execute();
    }
}

public class Client
{
    public static void Main()
    {
        Invoker invoker = new Invoker();
        Light light = default;
        Command lightOnCommand = new LightOnCommand(light);
        Command lightOffCommand = new LightOffCommand(light);
        invoker.SetOnCommand(lightOnCommand,0);
        invoker.SetOffCommand(lightOffCommand,0);
        invoker.OnButtonWasPushed(0);
        invoker.OffButtonWasPushed(0);
    }
}

//备忘录
public interface PreviousCalculationToCareTaker
{
    
}

public interface PreviousCalculationToOriginator
{
    int getFirstNumber();
    int getSecondNumber();
}

public interface Calculator
{
    PreviousCalculationToCareTaker backupLastCalculation();

    void restorePreviousCalculation(PreviousCalculationToCareTaker memento);

    int getCalculationResult();

    void setFirstNumber(int firstNumber);

    void setSecondNumber(int secondNumber);
}

public class PreviousCalculationImp : PreviousCalculationToCareTaker, PreviousCalculationToOriginator
{
    private int firstNumber;
    private int secondNumber;

    public PreviousCalculationImp(int firstNumber,int secondNumber)
    {
        this.firstNumber = firstNumber;
        this.secondNumber = secondNumber;
    }

    int PreviousCalculationToOriginator.getFirstNumber()
    {
        return firstNumber;
    }

    int PreviousCalculationToOriginator.getSecondNumber()
    {
       return secondNumber;
    }
}

public class CalculatorImp : Calculator
{
    private int firstNumber;
    private int secondNumber;
    PreviousCalculationToCareTaker Calculator.backupLastCalculation()
    {
        return new PreviousCalculationImp(firstNumber,secondNumber);
    }

    int Calculator.getCalculationResult()
    {
        return firstNumber + secondNumber;
    }

    void Calculator.restorePreviousCalculation(PreviousCalculationToCareTaker memento)
    {
        this.firstNumber = ((PreviousCalculationToOriginator)memento).getFirstNumber();
        this.secondNumber = ((PreviousCalculationToOriginator)memento).getSecondNumber();
    }

    void Calculator.setFirstNumber(int firstNumber)
    {
        this.firstNumber = firstNumber;
    }

    void Calculator.setSecondNumber(int secondNumber)
    {
        this.secondNumber = secondNumber;
    }
}

public class Client_1
{
    public static void Main()
    {
        Calculator calculator = new CalculatorImp();
        calculator.setFirstNumber(10);
        calculator.setSecondNumber(100);
        Debug.Log(calculator.getCalculationResult());

        PreviousCalculationToCareTaker memento = calculator.backupLastCalculation();
        calculator.setFirstNumber(17);
        calculator.setSecondNumber(-290);
        Debug.Log(calculator.getCalculationResult());
        calculator.restorePreviousCalculation(memento);
        Debug.Log(calculator.getCalculationResult());
    }
}

//外观
public class Facade
{
   private SubSystem subSystem = new SubSystem();
   
   public void WatchMovie()
   {
      subSystem.turnOnTV();
      subSystem.setCD("a movie");
      subSystem.startWatching();
   }

}

public class SubSystem
{
    public void turnOnTV()
    {
       Debug.Log("turnOnTV");
    }

    public void setCD(string cd)
    {
       Debug.Log($"setCD {cd}");
    }

    public void startWatching()
    {
       Debug.Log("startWatching");
    }
}

public class Client_2
{
   public static void Main()
   {
       Facade facade = new Facade();
       facade.WatchMovie();
   }
}

//工厂方法
public class Product{}

public abstract class Factory
{
    public abstract Product factoryMethod();
    public void DoSomething()
    {
        Product product = factoryMethod();
    }
}

public class ConcreteFactory:Factory
{
    public override Product factoryMethod()
    {
       return new Product();
    }
}

public class AbstractFactory
{
    public void CreateFactory()
    {
        Debug.Log("CreateFactory");
    }
}

//抽象工厂
//提供一个接口，用于创建相关的对象家族
//抽象工厂模式用到了工厂方法模式来创建单一对象
//网络把主机连接起来，而互联网是把多种不同的网络连接起来，因此互联网是网络的网络。而互联网（Internet）是全球范围的互联网
//ISP 互联网服务提供商ISP可以从互联网机构获得许多IP地址，同时拥有通信线路以及路由器等联网设备，个人或机构缴纳一定的费用就可以接入互联网
//客户/服务器（C/S)：客户是服务的请求方，服务器是服务的提供方。
//对等（P2P）：不区分客户和服务器

//电路交换用户电话通信系统，两个用户要通信之前需要建立一套专用的物理链路，并且整个通信过程中是中国占用该链路，由于通信的过程中不可能一直
//在使用传输线路，因为电路交换对线路的利用率很低，往往不到10%
//分组交换
//每个分组都有首部和尾部，包含了源地址和目标地址等控制信息，在同一个传输线路上同时传输多个分组互相不会影响，因此在同一条传输线路上允许同时
//传输多个分组，也就是说分组交换不需要占用传输线路
//在一个邮局通信系统中，邮局收到一份邮件之后，先存储起来，然后把相同目的地的邮件一起转发到下一个目的地，这个过程就是存储转发过程，分组交换
//也使用了存储转发过程
//总时延 = 排队时延 + 处理时延 + 传输时延 + 传播时延
//1.排队时延 分组在路由器的输入队列和输出队列中排队等待的时间，取决于网络当前的通信量
//2.处理时延 主机或路由器收到分组时进行处理所需要的时间，例如分析首部，从分组中提取数据、进行差错检验或查找适当的路由等
//3.传输时延 主机或路由器传输数据帧所需要的时间
//4.传播时延 电磁波在信道中传播所需要花费的时间，电磁波传播的速度接近光速


