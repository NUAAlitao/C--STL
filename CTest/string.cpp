#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
	string input;
	char ch;
	int num;
	cin>>input;
	cin>>ch;


	num=input.rfind(ch);
	cout<<"input:"<<endl;
	cout<<num<<endl;
	

	system("pause");
	return 0;
}