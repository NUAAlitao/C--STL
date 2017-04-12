#include<iostream>
#include<string>
#include<list>
using namespace std;

typedef struct
{
	string name;
	int age;
}person;


int main(){
	/*int a[]={2, 34, 45, 6, 1,12,34,56,15};
	list<int> intlist(a,a+9);
	list<int>::iterator iter;
	intlist.sort();
	
	for (iter=intlist.begin(); iter!=intlist.end(); iter++){
		cout<<*iter<<' ';
	}
	cout<<endl;

	intlist.remove_if(less10);

	intlist.push_front(3);
	iter=intlist.begin();
	intlist.insert(++iter, 4);
	iter--;
	intlist.erase(--iter);
	for (iter=intlist.begin(); iter!=intlist.end(); iter++){
		cout<<*iter<<' ';
	}
	cout<<endl;*/

	
	string name;
	int age;
	person temp;
	list<person> persons;

	
	while (cin>>name,cin>>age){
		temp.name=name;
		temp.age=age;
		persons.push_back(temp);
	}


	list<person>::iterator iter;
	for (iter=persons.begin(); iter!=persons.end(); iter++){
		cout<<(*iter).name<<' '<<(*iter).age<<endl;
	}

	system("pause");
	return 0;
}