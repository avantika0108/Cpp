//Avantika Nandre

#include<iostream>
#include<cstring>
using namespace std;
class Mystring
{
char * str;//Declare the char pointer variable for dynamic memory address
char s[30];
public:
Mystring(); //Default Constructor
Mystring(char *val);// paramerterised Constructor
Mystring(const Mystring &); // copy constructor
void accept();
void display(); //Display Function
~Mystring()
{
cout<<"\n\tObject destroyed successfully";
}
};
Mystring::Mystring()
{
str=new char[1];
str[0]='\0';
}
Mystring::Mystring(char *val)
{
if(val==NULL)
{
str=new char[1];
str[0]='\0';
}
else
{
str=new char[strlen(val)+1];
strcpy(str,val);
}
}
Mystring::Mystring(const Mystring &sample)
{
str=new char[strlen(sample.str)+1];
strcpy(str,sample.str);
}
void Mystring::accept()
{
cout<<"\n\tEnter the string: ";
cin.get(s,30); //Get Function to taking string from user
strcpy(str,s); //Copy string into str
}
void Mystring::display()
{
cout<<"\n\tstr: "<<str; //Dislay the pointer variable value
}
int main()
{
Mystring s1;
s1.accept();
s1.display();
char temp[]="Hey !!!";
Mystring s2(temp);
s2.display();
Mystring s3(s1);
s3.display();
return 0;
}
