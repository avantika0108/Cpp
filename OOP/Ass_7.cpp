//Avantika Nandre

#include<iostream>
using namespace std;
class basic_info
{
protected:
char name[50];
int age;
float salary;
string id;
public:
void read_b()
{
cout<<"\n\tEnter detail of the employee.";
cout<<"\n\tName: ";
cin>>name;
cout<<"\tAge:";
cin>>age;
cout<<"\tSalary:";
cin>>salary;
cout<<"\tId:";
cin>>id;
}
void display_b()
{
cout<<"\n------Employee Details------\n";
cout<<"Name:"<<name<<"\t"<<"Age:"<<age<<"\t"<<"Salary:"<<salary<<"\t"<<"Id:"
<<id<<"\n";
}
};
class Dept_info
{
protected:
int no_of_empl;
string dept_name;
string designation;
public:
void read_d()
{
cout<<"\tEnter department information.";
cout<<"\n\tTotal no of employee: ";
cin>>no_of_empl;
cout<<"\tName of the department: ";
cin>>dept_name;
cout<<"\tDesignation of employee: ";
cin>>designation;
}
void display_d()
{
cout<<"------Department Detail------\n";
cout<<"Total no of employee:"<<no_of_empl<<"\t"<<"Name of the department:"<<dept_name<<"\t Designation of employee:"<<designation;
}
};
class employee:public basic_info,public Dept_info
{
};
int main()
{
int n;
cout<<"\n\tEnter number of employee: ";
cin>>n;
employee e[n];
for(int i=0;i<n;i++)
{
    e[i].read_b();
    e[i].read_d();
    e[i].display_b();
    e[i].display_d();
}
}
