#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	vector<int> grades(n);

	for (int i=0; i<n; i++){
		cin>>grades[i];
	}

	char c;
	int a, b, max;
	queue<int> maxs;
	for (int i=0; i<m; i++){
		cin>>c;
		cin>>a>>b;
		if (c=='Q'){
			if (a>b){
				int temp;
				temp=a;
				a=b;
				b=temp;
			}
			max=grades[a-1];
			for (int j=a; j<b; j++){
			
				if (max<grades[j]){
					max=grades[j];
				}
			}
			maxs.push(max);
		}
		else{
			grades[a-1]=b;

		}
	}

	while (!maxs.empty()){
		a=maxs.front();
		maxs.pop();
		cout<<a<<endl;
	}
	system("pause");
	return 0;
}