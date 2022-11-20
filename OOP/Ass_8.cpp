//Avantika Nandre

#include<iostream>
#include<string>
using namespace std;
double division(int a, int b)
{

if (b==0)
{
throw " n\nException- Division by zero not allowed!";
}
return (a/b);

}
int main()
{

cout<<" 22325\n\n";
int x,y;
double z;
cout<<"\nEnter the value of dividend 'x' and divisor 'y' ";
cin>>x>>y;
try
{
z=division(x,y);

cout<<"\ndivision of [x/y] ="<<z; // this statement do not executed when exception is coming

}
catch (const char * msg)
{
cout<<msg;
}
return 0;}

