#include<iostream.h>
#include<conio.h>

class demo
{
	int a,b;
     public:
	demo(int x,int y)
	{
		a=x,b=y;
	}
	void show()
	{
		cout<<"A"<<a<<" "<<"B"<<b<<endl;
	}
	void operator-()
	{
		a= -a;
		b= -b;
	}
};
void main()
{
	clrscr();
	demo.obj();
	obj.show();
	-obj;
	obj.show();
	getch();

}