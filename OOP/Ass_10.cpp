//Avantika Nandre

#include<iostream>
#include<string>
using namespace std;
namespace ns1
{

int value()
{
return 5;
}

}
namespace ns2
{

const double x=200;
double value()
{
return 2*x;
}

}
int main(){

cout<<"\n\t22151\n\n";
cout<<"\tx value in ns1= "<<ns1::value()<<endl;
cout<<"\tx value in ns2= "<<ns2::x<<endl;
cout<<"\n\t[x value in ns2]*2= "<<ns2::value()<<endl;
return 0;

}

