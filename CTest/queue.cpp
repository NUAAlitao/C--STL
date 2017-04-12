#include<iostream>
#include<queue>

#include<functional>
using namespace std;

int main(){
	queue<int> intque;

	for (int i=1; i<=10; i++){
		intque.push(i);
	}

	while (!intque.empty()){
		cout<<intque.front()<<' ';
		intque.pop();
	}
	cout<<endl;


	priority_queue<int, vector<int>, greater<int>> intprique;
	intprique.push(23);
	intprique.push(12);
	intprique.push(89);
	intprique.push(12);
	intprique.push(23);

	while (!intprique.empty()){
		cout<<intprique.top()<<' ';
		intprique.pop();
	}
	cout<<endl;


	system("pause");
	return 0;
}