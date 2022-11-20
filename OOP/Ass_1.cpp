//Avantika Nandre

#include<iostream>
using namespace std;

void swap(int &n1,int &n2)
	{
		int t;
		t = n1;
		n1 = n2;
		n2 = t;
	}

void parr(int n,int arr[])
	{
		cout<<"The array is: \n";
		for(int i=0; i<n;i++)
		{
			cout<<" "<<arr[i];
		}
		cout<<"\n";
	}

void sort(int n,int arr[])
	{   
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j< n-i-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					swap(arr[j+1],arr[j]);	
				}
			}
}
	}
		
		
void getarr(int n,int arr[])
	{
		cout<<"Enter the elements of the array: \n";
		for(int i=0; i<n;i++)
		{
			cin>>arr[i];
		}
	}
		
int main()
{
	char x;
	int arr[100];
	program:
            int n;
            cout<<"Enter the size of the array: \n";
            cin>>n;
            getarr(n,arr);
            sort(n,arr);
            parr(n,arr);
		
	cout<<"Do you want to operate again \n Y/N ? :\n";
	cin>>x;
	if(x=='Y' or x == 'y')
	{
		goto program;
	}
}

