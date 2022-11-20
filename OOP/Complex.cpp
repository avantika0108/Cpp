//Avantika Nandre

#include <iostream>
using namespace std;
class complex{
	public:
		int real, img;
	complex(int tempReal=0,int tempImg=0)
	{
		real=tempReal;
		img=tempImg;
	}
	complex addComp(complex C1, complex C2)
	{
		complex temp;
		temp.real=C1.real+C2.real;
		temp.img=C1.img+C2.img;
		return temp;
	}
	complex subComp(complex C4, complex C5)
	{
		complex temp;
		temp.real=C4.real-C5.real;
		temp.img=C4.img-C5.img;
		return temp;
	}
	complex multiComp(complex C)
};

int main()
{
	//Addition
	complex C1(3,2);
	cout<<"complex num 1: "<<C1.real<<"+i"<<C1.img<<endl;
	
	complex C2(9,5);
	cout<<"complex num 2: "<<C2.real<<"+i"<<C2.img<<endl;
	
	complex C3;
	
	C3=C3.addComp(C1,C2);
	cout<<"Sum of complex numbers: "<<C3.real<<"+i"<<C3.img<<endl;
	
	
	//substraction
	complex C4(3,2);
	cout<<"complex num 1: "<<C4.real<<"-i"<<C4.img<<endl;
	
	complex C5(9,5);
	cout<<"complex num 2: "<<C5.real<<"-i"<<C5.img<<endl;
	
	complex C6;
	
	C6=C6.subComp(C4,C5);
	cout<<"Differnce of complex numbers: "<<C6.real<<"+i"<<C6.img<<endl;
	
	return 0;
}
