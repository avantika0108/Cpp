//Avantika Nandre

#include <iostream>
using namespace std;

class employee{
	int id;
	int ENo;
	public:
		void setData(void);
		void getData(void){
		    cout<<"id of employee number "<<ENo<<" is "<<id;
	    }
};
void employee :: setData(void){
	cout<<"Enter id of employee"<<endl;
	cin>>id;
}
	
int main(){
	employee tan,micky;
	tan.setData();
	tan.getData();
	return 0;
}

