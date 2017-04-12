#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<char> chars;
	cout<<chars.size()<<endl;
	for (int i=0; i<10; i++){
		chars.push_back(65+i);
	}

	cout<<"original: ";
	vector<char>::iterator iter;
	for (iter=chars.begin(); iter!=chars.end(); iter++){
		cout<<(*iter);
	}
	cout<<endl;

	vector<char> chars1(5,'a');
	
	for (iter=chars1.begin(); iter!=chars1.end(); iter++){
		cout<<(*iter);
	}
	cout<<endl;

	
	cout<<"original: ";
	for (iter=chars.begin(); iter!=chars.end(); iter++){
		cout<<(*iter);
	}
	cout<<endl;
	char ch;
	ch=chars.back();
	cout<<ch<<endl;
	ch=chars.front();
	cout<<ch<<endl;
	system("pause");
	return 0;
}