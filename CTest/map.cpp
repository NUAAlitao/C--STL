#include<iostream>
#include<map>
#include<functional>
using namespace std;

int main(){
	multimap<int, char, greater<int>> charmap;
	multimap<int, char>::iterator iter;
	charmap.insert(multimap<int, char>::value_type(1, 'd'));
	charmap.insert(multimap<int, char>::value_type(3, 'b'));
	charmap.insert(multimap<int, char>::value_type(4, 'a'));
	charmap.insert(multimap<int, char>::value_type(2, 'c'));
	charmap.insert(multimap<int, char>::value_type(3, 'v'));
	
	

	for (iter=charmap.begin(); iter!=charmap.end(); iter++){
		cout<<(*iter).first<<' '<<(*iter).second<<endl;
	}



	iter=charmap.find(3);
	if (iter==charmap.end()){
		cout<<"not find"<<endl;
	}
	else{
		cout<<"find:"<<endl;
		cout<<(*iter).first<<' '<<(*iter).second<<endl;
	}


	system("pause");
	return 0;
}