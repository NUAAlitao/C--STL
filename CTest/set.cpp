#include<iostream>
#include<set>
#include<functional>
using namespace std;

int main(){
	multiset<int> intset;

	intset.insert(2);
	intset.insert(1);
	intset.insert(5);
	intset.insert(3);
	intset.insert(5);
	intset.insert(3);
	intset.insert(6);
	intset.insert(7);
	intset.insert(59);
	intset.insert(1);

	

	multiset<int>::iterator iter,iter1,iter2;
	for (iter=intset.begin(); iter!=intset.end(); iter++){
		cout<<*iter<<' ';
	}
	cout<<endl;

	iter1=intset.lower_bound(5);
	iter2=intset.upper_bound(6);
	intset.erase(iter1, iter2);

	for (iter=intset.begin(); iter!=intset.end(); iter++){
		cout<<*iter<<' ';
	}
	cout<<endl;

	system("pause");
	return 0;
}