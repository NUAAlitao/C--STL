#include<iostream>
#include<string>
#include<vector>
using namespace std;

typedef struct record
{
	string filename;
	int number;
	int times;
}records;



int main(){
	string input, str1;
	int number;
	int pos, times;
	records node;
	vector<records> nodes;

	while (cin>>input, cin>>number){

		pos=input.rfind('\\');
		str1=input.substr(pos+1);
		if (str1.length()>16){
			str1=str1.substr(str1.size()-16);
		}
		node.filename=str1;
		node.number=number;
		int i;
		for (i=0; i<nodes.size(); i++){
			if ((nodes[i].filename==node.filename)&&(nodes[i].number==node.number)){
				nodes[i].times++;
				break;
			}
		}
		if (i==nodes.size()){
			node.times=1;
			nodes.push_back(node);
		}
	}
	
	for (int i=nodes.size(); i>1; i--){

		for (int j=0; j<i-1; j++){
			if (nodes[j].times<nodes[j+1].times){
				node=nodes[j+1];
				nodes[j+1]=nodes[j];
				nodes[j]=node;
			}
		}
		
	}

	for (int i=0; i<8; i++){
		cout<<nodes[i].filename<<' ';
		cout<<nodes[i].number<<' ';
		cout<<nodes[i].times<<endl;
	}
	system("pause");
	return 0;
}