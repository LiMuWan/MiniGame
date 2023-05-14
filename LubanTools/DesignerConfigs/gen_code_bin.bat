set WORKSPACE=..

set GEN_CLIENT=%WORKSPACE%\Tools\Luban.ClientServer\Luban.ClientServer.exe
set CONF_ROOT=%WORKSPACE%\DesignerConfigs
set OUTPUT_CODE_PATH=%WORKSPACE%\..\Assets\HotfixScripts\Runtime\Common\LubanConfig
set OUTPUT_DATA_PATH=%WORKSPACE%\GenerateDatas\LubanConfig

%GEN_CLIENT% -h %LUBAN_SERVER_IP% -j cfg --^
 -d %CONF_ROOT%\Defines\__root__.xml ^
 --input_data_dir %CONF_ROOT%\Datas ^
 --output_code_dir %OUTPUT_CODE_PATH% ^
 --output_data_dir %OUTPUT_DATA_PATH% ^
 --gen_types code_cs_unity_bin,data_bin ^
 -s all 

pause