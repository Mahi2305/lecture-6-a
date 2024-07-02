#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter a integer:"<<endl;
	cin>>a;
	switch(a){
		case 1:
			cout<<"The value of a is 1."<<endl;
			break;
		case 2:
			cout<<"The value of a is 2."<<endl;
			break;
		default:
			cout<<"Default will always be printed."<<endl;
			break;
	}
	return 0;
}
