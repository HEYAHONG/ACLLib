SRC = ..\..\src\acllib.c
INCLUDE_DIR = ..\..\src
LIB = gdi32 ole32 oleaut32 uuid winmm msimg32
CFLAGS = -static -static-libgcc -static-libstdc++
SRC+= $(CFLAGS)

all : keyboard mouse_move mouse_click image clock char clock_main clock_main_hide_console

keyboard :
	gcc $(SRC) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@
	
mouse_move :
	gcc $(SRC) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@
	
mouse_click :
	gcc $(SRC) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@

image :
	gcc $(SRC) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@
	
clock :
	gcc $(SRC) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@
	
clock_main :
	gcc $(SRC) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@
clock_main_hide_console :
	gcc $(SRC) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@
	
char :
	gcc $(SRC) $@.c -I$(INCLUDE_DIR) $(LIB:%=-l%) -DWINVER=0x0501 -o $@
	
clean:
	-rm *.exe

