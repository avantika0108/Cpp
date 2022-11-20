//Avantika Nandre

#include <iostream> 
#include <fstream>
using namespace std;
int main()
{
ifstream fin; // input object
ofstream fout; // output object
string str;
char sourcefile[50], destinationfile[50];
cout << "Enter Source File with Extension: ";
gets(sourcefile);
fin.open(sourcefile); // connection between fin object and sourcefile
if (!fin)
{
cout << "Error in Opening Source File...!!!";
exit(1);
}
cout << "Enter Destination File with Extension: ";
gets(destinationfile);
fout.open(destinationfile); 
if (fin && fout)
{
while (getline(fin, str))
{
fout << str << "\n";
}
cout << "\n\n Source File Date Successfully Copied to Destination File...!!!";
}
else
{
cout << "File Cannot Open...!!!";
}
cout << "\n\n Open Destination File and Check!!!\n";
fin.close();
fout.close();
}
