//Avantika Nandre

#include<iostream>
using namespace std;
void area(float r)
{
 cout<<"The area of the circle is: "<<3.14*r*r<<endl;
}
void area(int r)
{
 cout<<"The area of the square is: "<<r*r<<endl;
}
void area(int r, int s)
{
 cout<<"The area of the rectangle is: "<<r*s<<endl;
}
void area(float r, float s)
{
 cout<<"The area of the triangle is: "<<0.5*s*r<<endl;
}
int main()
{ 
int x,y,z;
float a,b;
char t;
program:
 cout<<"CHOOSE THE GEOMETRIC FIGURE: \n 1.CIRCLE \n 2.SQUARE \n 3.RECTANGLE \n 4.TRIANGLE \n";
 cin>>z;
 switch(z)
 {
 case 1:
 cout<<"Enter the float value of the radius of the circle: \n";
 cin>>a;
 area(a);
 break;
 case 2:
 cout<<"Enter the integer value of the side of the square: \n";
 cin>>x;
 area(x);
 break;
 case 3:
 cout<<"Enter the integer values of the sides of the rectangle: \n";
 cout<<"length: \n";
 cin>>x;
 cout<<"breadth: \n";
 cin>>y;
 area(x,y);
 break;
 case 4:
 cout<<"Enter the float values of the height and base of the triangle: \n";
 cout<<"height: \n";
 cin>>a;
 cout<<"base: \n";
 cin>>b;
 area(a,b);
 break;
 default:
 cout<<"Enter a valid choice -_-\n";
 }
 cout<<"Do you want to operate again \n Y/N ? :\n";
 cin>>t;
 if(t=='Y' or t == 'y')
{
 goto program;
 }
}
