#include <graphics.h>		// ����ͼ�ο�ͷ�ļ�
#include <conio.h>
#include<windows.h>
int main()
{
	initgraph(700, 500);	// ������ͼ���ڣ���СΪ 640x480 
	// ��ȡͼƬ����ͼ����
	loadimage(0, _T("bg.jpg"));
	//������������
	settextstyle(30, 0, _T("΢���ź�"));
	settextcolor(RGB(255,255,0));

	rectangle(300, 40,550,80);
	outtextxy(310, 45, _T("1.��վ404����"));

	rectangle(300, 100, 550, 140);
	outtextxy(310, 105, _T("2.��վ�۸Ļ�"));

	rectangle(300, 160, 550, 200);
	outtextxy(310, 165, _T("3.��վ�����޸�"));

	rectangle(300, 220, 550, 260);
	outtextxy(310, 225, _T("4.�鿴������¼"));

	rectangle(300, 280, 550, 320);
	outtextxy(310, 285, _T("5.DNS����"));

	rectangle(300, 340, 550, 380);
	outtextxy(310, 345, _T("6.�˳�"));

	

	_getch();				// 
	closegraph();			// 
	return 0;
}