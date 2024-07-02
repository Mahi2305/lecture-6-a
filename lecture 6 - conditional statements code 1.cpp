#include<iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"Enter two numbers as input:"<<endl;
	cin>>a>>b;
	if(a>0.01 && b>a){
		cout<<"The condition in if statement is correct."<<endl;
	} else{
		cout<<"The condition is false."<<endl;
	}
}
