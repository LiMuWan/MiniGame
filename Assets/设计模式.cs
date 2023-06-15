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
