#include<iostream>
#include<list>
#include<set>
#include<sstream>
using namespace std;


int merge2(int a1, int a2){
	string str1, str2="";
	stringstream ss;
	int number;
	ss<<a1;
	ss>>str1;
	str2.append(str1);
	str1.clear();
	ss.clear();
	ss<<a2;
	ss>>str1;
	str2.append(str1);
	ss.clear();
	ss<<str2;
	ss>>number;
	return number;
}

int merge3(int a1, int a2, int a3){
	string str1, str2="";
	stringstream ss;
	int number;
	ss<<a1;
	ss>>str1;
	str2.append(str1);
	str1.clear();
	ss.clear();
	ss<<a2;
	ss>>str1;
	str2.append(str1);
	ss.clear();
	str1.clear();
	ss<<a3;
	ss>>str1;
	str2.append(str1);
	ss.clear();
	ss<<str2;
	ss>>number;
	return number;
}

int maxNumber(int a1, int a2, int a3){
	int temp;
	temp=a1>a2?a1:a2;
	if (temp>a3){
		return temp;
	}
	else{
		return a3;
	}
}

bool is25(int a1, int a2, int a3){
	if ((a1==2)||(a2==2)||(a3==2)){
		if ((a1==5)||(a2==5)||(a3==5)){
			return true;
		}
	}
	return false;
}

bool is69(int a1, int a2, int a3){
	if ((a1==6)||(a2==6)||(a3==6)){
		if ((a1==9)||(a2==9)||(a3==9)){
			return true;
		}
	}
	return false;
}
int main(){
	int a1, a2, a3;
	int aa, aa1, aatemp;
	bool flag=false, flag1;
	while (cin>>a1){
		cin.get();
		cin>>a2;
		cin.get();
		cin>>a3;
		flag=false;
		flag1=false;
		if ((a1!=a2)&&(a1!=a3)&&(a2!=a3)&&((a1>0)&&(a1<10))&&((a2>0)&&(a2<10))&&((a3>0)&&(a3<10))&&((!is25(a1, a2, a3))&&(!is69(a1, a2, a3)))){
			if (a1==2){
				flag=true;
				aa=5;
			}
			else if (a2==2){
				aa=a2;
				a2=a1;
				a1=aa;
				flag=true;
				aa=5;
			}
			else if (a3==2){
				aa=a3;
				a3=a1;
				a1=aa;
				flag=true;
				aa=5;
			}
			else if (a1==5){
				flag=true;
				aa=2;
			}
			else if (a2==5){
				aa=a2;
				a2=a1;
				a1=aa;
				flag=true;
				aa=2;
			}
			else if (a3==5){
				aa=a3;
				a3=a1;
				a1=aa;
				flag=true;
				aa=2;
			}

			if ((flag==false)&&(a1==6)){
				flag=true;
				aa=9;
			}
			else if ((flag==false)&&(a2==6)){
				aa=a2;
				a2=a1;
				a1=aa;
				flag=true;
				aa=9;
			}
			else if ((flag==false)&&(a3==6)){
				aa=a3;
				a3=a1;
				a1=aa;
				flag=true;
				aa=9;
			}
			else if ((flag==false)&&(a1==9)){
				flag=true;
				aa=6;
			}
			else if ((flag==false)&&(a2==9)){
				aa=a2;
				a2=a1;
				a1=aa;
				flag=true;
				aa=6;
			}
			else if ((flag==false)&&(a3==9)){
				aa=a3;
				a3=a1;
				a1=aa;
				flag=true;
				aa=6;
			}
			else if ((flag==true)&&(a2==6)){
				aa1=9;
				flag1=true;
			}
			else if ((flag==true)&&(a3==6)){
				aa1=a3;
				a3=a2;
				a2=aa1;
				aa1=9;
				flag1=true;
			}
			else if ((flag==true)&&(a2==9)){
				aa1=6;
				flag1=true;
			}
			else if ((flag==true)&&(a3==9)){
				aa1=a3;
				a3=a2;
				a2=a3;
				aa1=6;
				flag1=true;
			}
			int max;
			int temp;
			set<int> ints;
			max=maxNumber(a1, a2, a3);
			ints.insert(a1);
			ints.insert(a2);
			ints.insert(a3);
			temp=merge2(a1, a2);
			ints.insert(temp);
			temp=merge2(a1, a3);
			ints.insert(temp);
			temp=merge2(a2, a1);
			ints.insert(temp);
			temp=merge2(a2, a3);
			ints.insert(temp);
			temp=merge2(a3, a1);
			ints.insert(temp);
			temp=merge2(a3, a2);
			ints.insert(temp);
			temp=merge3(a1, a2, a3);
			ints.insert(temp);
			temp=merge3(a1, a3, a2);
			ints.insert(temp);
			temp=merge3(a2, a1, a3);
			ints.insert(temp);
			temp=merge3(a2, a3, a1);
			ints.insert(temp);
			temp=merge3(a3, a1, a2);
			ints.insert(temp);
			temp=merge3(a3, a2, a1);
			ints.insert(temp);

			
			if (flag==true && flag1==true){
				aatemp=a1;
				a1=aa;
				int maxtemp;
				maxtemp=maxNumber(a1, a2, a3);
				if (maxtemp>max){
					max=maxtemp;
				}
				cout<<"aa= "<<aa<<endl;

				ints.insert(a1);
				ints.insert(a2);
				ints.insert(a3);
				temp=merge2(a1, a2);
				ints.insert(temp);
				temp=merge2(a1, a3);
				ints.insert(temp);
				temp=merge2(a2, a1);
				ints.insert(temp);
				temp=merge2(a2, a3);
				ints.insert(temp);
				temp=merge2(a3, a1);
				ints.insert(temp);
				temp=merge2(a3, a2);
				ints.insert(temp);
				temp=merge3(a1, a2, a3);
				ints.insert(temp);
				temp=merge3(a1, a3, a2);
				ints.insert(temp);
				temp=merge3(a2, a1, a3);
				ints.insert(temp);
				temp=merge3(a2, a3, a1);
				ints.insert(temp);
				temp=merge3(a3, a1, a2);
				ints.insert(temp);
				temp=merge3(a3, a2, a1);
				ints.insert(temp);

				a2=aa1;
				maxtemp=maxNumber(a1, a2, a3);
				if (maxtemp>max){
					max=maxtemp;
				}
				cout<<"aa= "<<aa<<endl;
				ints.insert(a1);
				ints.insert(a2);
				ints.insert(a3);
				temp=merge2(a1, a2);
				ints.insert(temp);
				temp=merge2(a1, a3);
				ints.insert(temp);
				temp=merge2(a2, a1);
				ints.insert(temp);
				temp=merge2(a2, a3);
				ints.insert(temp);
				temp=merge2(a3, a1);
				ints.insert(temp);
				temp=merge2(a3, a2);
				ints.insert(temp);
				temp=merge3(a1, a2, a3);
				ints.insert(temp);
				temp=merge3(a1, a3, a2);
				ints.insert(temp);
				temp=merge3(a2, a1, a3);
				ints.insert(temp);
				temp=merge3(a2, a3, a1);
				ints.insert(temp);
				temp=merge3(a3, a1, a2);
				ints.insert(temp);
				temp=merge3(a3, a2, a1);
				ints.insert(temp);
				
				a1=aatemp;
				maxtemp=maxNumber(a1, a2, a3);
				if (maxtemp>max){
					max=maxtemp;
				}
				cout<<"aa= "<<aa<<endl;
				ints.insert(a1);
				ints.insert(a2);
				ints.insert(a3);
				temp=merge2(a1, a2);
				ints.insert(temp);
				temp=merge2(a1, a3);
				ints.insert(temp);
				temp=merge2(a2, a1);
				ints.insert(temp);
				temp=merge2(a2, a3);
				ints.insert(temp);
				temp=merge2(a3, a1);
				ints.insert(temp);
				temp=merge2(a3, a2);
				ints.insert(temp);
				temp=merge3(a1, a2, a3);
				ints.insert(temp);
				temp=merge3(a1, a3, a2);
				ints.insert(temp);
				temp=merge3(a2, a1, a3);
				ints.insert(temp);
				temp=merge3(a2, a3, a1);
				ints.insert(temp);
				temp=merge3(a3, a1, a2);
				ints.insert(temp);
				temp=merge3(a3, a2, a1);
				ints.insert(temp);
				
			}
			else if (flag==true){
				a1=aa;
				int maxtemp;
				maxtemp=maxNumber(a1, a2, a3);
				if (maxtemp>max){
					max=maxtemp;
				}
				cout<<"aa= "<<aa<<endl;

				ints.insert(a1);
				ints.insert(a2);
				ints.insert(a3);
				temp=merge2(a1, a2);
				ints.insert(temp);
				temp=merge2(a1, a3);
				ints.insert(temp);
				temp=merge2(a2, a1);
				ints.insert(temp);
				temp=merge2(a2, a3);
				ints.insert(temp);
				temp=merge2(a3, a1);
				ints.insert(temp);
				temp=merge2(a3, a2);
				ints.insert(temp);
				temp=merge3(a1, a2, a3);
				ints.insert(temp);
				temp=merge3(a1, a3, a2);
				ints.insert(temp);
				temp=merge3(a2, a1, a3);
				ints.insert(temp);
				temp=merge3(a2, a3, a1);
				ints.insert(temp);
				temp=merge3(a3, a1, a2);
				ints.insert(temp);
				temp=merge3(a3, a2, a1);
				ints.insert(temp);
			}
			set<int>::iterator iter1, iter2;
			iter1=ints.begin();
			iter2=ints.end();
			list<int> intlist(iter1, iter2);
			intlist.sort();
			list<int>::iterator iter;
			for (iter=intlist.begin(); iter!=intlist.end(); iter++){
				cout<<*iter<<' ';
			}
			cout<<endl;

			iter=intlist.begin();
			cout<<"max= "<<max<<endl;

			for (int i=1; i<max; i++){
				iter++;
			}
			cout<<(*iter)<<endl;
		}
		else
		{
			cout<<-1;
		}
	}
	system("pause");
	return 0;
}