## ACLLib

ACLLib is a bunch of C functions covers Win32API and provides simpler API to beginners for programming Windows GUI applications. It compiles with MinGW and MS Visual Studio Express.

## Document

https://github.com/wengkai/ACLLib/wiki

## 修改内容:  
### 1.添加以下两个函数.

    int Start_WinMain(); //在使用main作为入口时，启动窗口（仅允许一个窗口），该函数是阻塞的。  
    int Start_WinMain_Hide_Console();//在使用main作为入口时，启动窗口（仅允许一个窗口）并隐藏控制台窗口，该函数是阻塞的。  
	
    
### 2.添加示例.           
在mingw目录下添加两个示例并修改Makefile选项。
在MakeFile添加gcc选项及传递的连接选项:
    
	-Wl,--subsystem,windows  : 连接窗口程序，入口点为WinMain
	
	-Wl,--subsystem,console  ：连接控制台程序，入口点为Main
	
	-static -static-libgcc -static-libstdc++  ：编译静态程序


