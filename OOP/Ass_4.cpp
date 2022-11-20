//Avantika Nandre

#include <iostream>
using namespace std;
class stack
{
int s[10], t;
public:
stack()
{
t = 0;
}
void display()
{
if (t == 0)
{
cout << "Stack Empty"<<endl;
}
else
{
for (int i = 0; i < t; i++)
{
cout << "The element on position " << i + 1 << " is: " << s[i] 
<< endl;
}
}
}
void push(int x)
{
if (t >= 10)
{
cout << "Stack Full"<<endl;;
}
else
{
s[t] = x;
t++;
}
}
void pop()
{
if (t == 0)
{
cout << "Stack Empty"<<endl;;
}
else
{
t--;
}
}
};
int main()
{
int c, x;
stack a;
do
{
cout << "STACK MENU" << endl;
cout << "1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT" << endl;
cout << "Enter your choice: " << endl;
cin >> c;
cout << endl;
switch (c)
{
case 1:
cout << "Enter the value to be inserted" << endl;
cin >> x;
a.push(x);
break;
case 2:
a.pop();
break;
case 3:
a.display();
break;
default:
break;
}
} while (c != 4);
}

