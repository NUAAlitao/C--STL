#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> intdeque(3, 4);
	intdeque.push_back(5);
	intdeque.push_front(2);
	deque<int>::iterator iter;
	for (iter=intdeque.begin(); iter!=intdeque.end(); iter++){
		cout<<(*iter);
	}
	cout<<endl;
	intdeque.pop_back();
	intdeque.pop_front();

	deque<int>::iterator start=intdeque.end();
	intdeque.insert(start,3, 6);
	start=intdeque.end();
	intdeque.erase(start-3,start-1);

	for (int i=0; i<intdeque.size(); i++){
		cout<<intdeque[i];
	}
	cout<<endl;
	
	cout<<intdeque.back()<<endl;
	cout<<intdeque.front()<<endl;
	system("pause");
	return 0;
}