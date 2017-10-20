//求一元二次方程实数根
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c ;double delta,x1,x2;
	cout<<"请输入abc的值："<<endl;
	cin>>a>>b>>c;
	delta=b*b-4*a*c;
	if (delta<0)
	{
	cout<<"此一元二次方程没有实数根"<<endl;
	}
	else
	{
		if (delta>0)
		{
		double d;
		d=sqrt(delta);
		x1= (-b+d)/(2*a);
		x2= (-b-d)/(a*a);
		cout<<"x1="<<x1<<endl;
		cout<<"x2="<<x2<<endl;
		}
		else
		{
		x1=x2= -b/(2*a);
		cout<<"x1=x2="<<x1<<endl;
		}
	}
    return 0;
}
