SRC = ..\..\src\acllib.c
INCLUDE_DIR = ..\..\src
LIB = gdi32 ole32 oleaut32 uuid winmm msimg32
CFLAGS = -static -static-libgcc -static-libstdc++

#编译窗口程序需要的gcc选项,入口为winmain
Windows_CFLAGS = -Wl,--subsystem,windows
#编译控制台程序需要的gcc选项(默认)，入口为main
Console_CFLAGS = -Wl,--subsystem,console

SRC+= $(CFLAGS)

all : keyboard mouse_move mouse_click image clock char clock_main clock_main_hide_console clock_main_ChangeSetup

keyboard :
	gcc $(SRC) $(Windows_CFLAGS) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@
	
mouse_move :
	gcc $(SRC) $(Windows_CFLAGS) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@
	
mouse_click :
	gcc $(SRC) $(Windows_CFLAGS) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@

image :
	gcc $(SRC) $(Windows_CFLAGS) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@
	
clock :
	gcc $(SRC) $(Windows_CFLAGS) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@
	
clock_main :
	gcc $(SRC) $(Console_CFLAGS) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@

clock_main_ChangeSetup :
	gcc $(SRC) $(Console_CFLAGS) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@
	
clock_main_hide_console :
	gcc $(SRC) $(Console_CFLAGS) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@
	
char :
	gcc $(SRC) $(Windows_CFLAGS) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@
	
clean:
	-rm *.exe

