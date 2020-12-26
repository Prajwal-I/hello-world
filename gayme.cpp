#include<iostream>
#include<conio.h>
using namespace std;
char ch;
int px=5,py=5;

char input()
{
	return _getch();
}

void draw (int px, int py)
{
	system("CLS");
	for(int i=0; i<20; i++)
	{
		for(int j=0; j<30; j++)
		{
			if(i==0||i==19||j==0||j==29)
			cout<<".";
			else if(px==j&&py==i)
			cout<<"O";
			else
			cout<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	while(1)
	{
	
	ch=input();
	if(ch=='w')
	py--;
	else if(ch=='s')
	py++;
	else if(ch=='d')
	px++;
	else if(ch=='a')
	px--;
	draw(px,py);
	}
	return 0;
}

