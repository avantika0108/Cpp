//Avantika Nandre

#include<iostream>
using namespace std;
class complex
{
int a,b;
public:
void setnum()
{
cout<<"Enter the real part of the number: "<<endl;
cin>>a;
cout<<"Enter the imaginary part of the number: "<<endl;
cin>>b;
}
void getnum()
{
cout<<"The number is: "<<a<<" + "<<"i"<<b<<endl;
}
void add(complex t)
{ int c,d;
c = a+ t.a;
d = b+ t.b;
cout<<"The number is: "<<c<<" + "<<"i"<<d<<endl;
}
void subtract(complex t)
{ int c,d;
c = a - t.a;
d = b - t.b;
cout<<"The number is: "<<c<<" + "<<"i"<<d<<endl;
}
void multiply(complex t)
{ int c,d;
c = (a*(t.a)) - (b*(t.b));
d = (a*(t.b)) + (b*(t.a));
cout<<"The number is: "<<c<<" + "<<"i"<<d<<endl;
}
void divide(complex t)
{ int c,d;
c = ((a*(t.a)) + (b*(t.b)))/((t.a)*(t.a)+ (t.b)*(t.b));
d = ((b*(t.a)) - (a*(t.b)))/((t.a)*(t.a)+ (t.b)*(t.b));
cout<<"The number is: "<<c<<" + "<<"i"<<d<<endl;
}
void conjugate()
{
cout<<"The number is: "<<a<<" - "<<"i"<<b<<endl;
}
};
int main()
{
complex c1,c2;
int c;
do
{
cout<<"WELCOME USER:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Conjugate\n6.Exit"<<endl;
cout<<"Enter your choice: "<<endl;
cin>>c;
switch (c)
{
case 1:
c1.setnum();
c2.setnum();
c1.add(c2);
break;
case 2:
c1.setnum();
c2.setnum();
c1.subtract(c2);
break;
case 3:
c1.setnum();
c2.setnum();
c1.multiply(c2);
break;
case 4:
c1.setnum();
c2.setnum();
c1.divide(c2);
break;
case 5:
c1.setnum();
c1.conjugate();
break;
default:
break;
}
}while (c!=6);
}

