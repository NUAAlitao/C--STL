#include<iostream>
using namespace std;

int sum(int n, int number){
	int temp=1;
	for (int i=0; i<n; i++){
		temp*=number;
	}
	return temp;
}

int main(){
	int n, temp1, temp2;
	int nums[4];
	int number, i, nums_sum, number_sum=0;
	int k=1;
	for (number=100; number<=1000; number++){
		temp2=number%10;
		temp1=number/10;
		i=0;
		while (temp1!=0){
			nums[i++]=temp2;
			temp2=temp1%10;
			temp1=temp1/10;
		}
		nums[i]=temp2;
		n=i+1;
		nums_sum=0;
		for (int j=0; j<n; j++){
			nums_sum+=sum(n, nums[j]);
		}
		
		if (nums_sum==number){
			cout<<"第"<<k<<"个水仙花数："<<number<<endl;
			number_sum+=number;
			k++;
		}

	}
	cout<<"水仙花数总和为："<<number_sum<<endl;
	system("pause");
	return 0;
}