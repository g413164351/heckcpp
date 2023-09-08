#include <graphics.h>		// 引用图形库头文件
#include <conio.h>
#include<windows.h>
int main()
{
	initgraph(700, 500);	// 创建绘图窗口，大小为 640x480 
	// 读取图片至绘图窗口
	loadimage(0, _T("bg.jpg"));
	//设置文字字体
	settextstyle(30, 0, _T("微软雅黑"));
	settextcolor(RGB(255,255,0));

	rectangle(300, 40,550,80);
	outtextxy(310, 45, _T("1.网站404攻击"));

	rectangle(300, 100, 550, 140);
	outtextxy(310, 105, _T("2.网站篡改击"));

	rectangle(300, 160, 550, 200);
	outtextxy(310, 165, _T("3.网站攻击修复"));

	rectangle(300, 220, 550, 260);
	outtextxy(310, 225, _T("4.查看攻击记录"));

	rectangle(300, 280, 550, 320);
	outtextxy(310, 285, _T("5.DNS攻击"));

	rectangle(300, 340, 550, 380);
	outtextxy(310, 345, _T("6.退出"));

	

	_getch();				// 
	closegraph();			// 
	return 0;
}