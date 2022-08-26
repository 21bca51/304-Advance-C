/*Wrtie a program using single inheritence */

#include<iostream.h>
#include<conio.h>

class A
{
	public:
		void display()
		{
			cout<<"class A";
		}
};
class B:public A
{
	public:
		void display()
		{
			cout<<"\n class B";
		}
};

int main()
{
	clrscr();
	B obj;
	obj.display();
	obj.A::display();
	getch();
	return 0;
}