//Avantika Nandre

#include <iostream>
using namespace std;
const float pi=3.14;
float area(float n, float b, float h)
{
	float ar;
	ar=n*b*h;
	return ar;
}
float area(float r)
{
	float ar;
	ar=pi*r*r;
	return ar;
}
float area(float l,float b){
	float ar;
	ar=l*b;
	return ar;
}

int main(){
    float b,h,r,l,x;
    float result;
    cout<<"\nEnter the Base and Height of Triangle:\n";
    cin>>b>>h;
    result=area(0.5,b,h);
    cout<<"The area of triangle is: "<<result<<endl;
    
    cout<<"\nEnter the radius of circle:\n";
    cin>>r;
    result=area(r);
    cout<<"The area of circle is: "<<result<<endl;
    
    cout<<"\nEnter the length and breadth of rectangle:\n ";
    cin>>l>>b;
    result=area(l,b);
    cout<<"The area of rectangle is: "<<result<<endl;
	
	return 0;
}
