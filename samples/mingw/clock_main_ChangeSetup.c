#include "acllib.h"
#include "stdio.h"
#include <stdlib.h>
#include <math.h>


//窗口1程序
extern HWND g_hWnd;
void  Exit_Timer(int tid)
{
static  int count=0;
count++;
if(count > 5) Stop_Window();//退出窗口

char temp[20]="";
sprintf(temp,"welcome %d",count);
beginPaint();

setTextSize(16);
paintText(0,16,temp);

endPaint();
}

int Setup() //必须写默认Setup
{
initWindow("Welcome",DEFAULT,DEFAULT,300,300);
registerTimerEvent(Exit_Timer);
startTimer(0,1000);

}


//窗口2程序

#define RAD(x) ((x)/360.0*2*3.1415926535)

int h = 0;
int m = 0;
int s = 0;

void paint()
{
	static const int ox = 150;
	static const int oy = 150;

	static const int hl = 46;
	static const int ml = 74;
	static const int sl = 120;

	int i;

	beginPaint();

	clearDevice();

	// circle
	setPenWidth(2);
	setPenColor(BLACK);
	setBrushColor(WHITE);
	ellipse(25,25,275,275);

	// label
	setPenWidth(1);
	setPenColor(BLACK);
	for(i=0;i<12;++i)
	{
		moveTo(ox+115*sin(RAD(180-i*30)),oy+115*cos(RAD(180-i*30)));
		lineTo(ox+125*sin(RAD(180-i*30)),oy+125*cos(RAD(180-i*30)));
	}

	// hour
	setPenWidth(8);
	setPenColor(BLACK);
	moveTo(ox,oy);
	lineTo(ox+hl*sin(RAD(180-h*30)),oy+hl*cos(RAD(180-h*30)));

	// minute
	setPenWidth(4);
	setPenColor(GREEN);
	moveTo(ox,oy);
	lineTo(ox+ml*sin(RAD(180-m*6)),oy+ml*cos(RAD(180-m*6)));

	// second
	setPenWidth(2);
	setPenColor(RED);
	moveTo(ox,oy);
	lineTo(ox+sl*sin(RAD(180-s*6)),oy+sl*cos(RAD(180-s*6)));

	endPaint();
}

void timerEvent(int tid)
{
	++s;
	if(s==60)
	{
		s = 0;
		++m;
	}
	if(m==60)
	{
		m = 0;
		++h;
	}
	if(h==12)
		h = 0;
	paint();
}

int Setup_clock()
{
    initWindow("Clock",DEFAULT,DEFAULT,300,300);

	registerTimerEvent(timerEvent);

	startTimer(0,1000);
	//startTimer(0,100);
	//startTimer(0,10);
	//startTimer(0,1);


	return 0;
}

//主程序
int main(int argc,char *argv[])
{
	setbuf(stdout,NULL);
	printf("Window Welcome Start!\n");
	Start_WinMain();
	printf("Window Welcome Exited!\n");
	printf("Window Clock Start!\n");
	ChangeSetup(Setup_clock);//修改Setup函数
	Start_WinMain();
	printf("Window Clock Exited\n");
}
