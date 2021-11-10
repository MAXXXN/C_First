#include<cstdio>
#include<iostream>
using namespace std;
int num[10000002]={};
int div(int x){
	int sum=0;
	while(x){
		int m=x%10;
		if(m==1)
			sum++;
		x/=10;
	}
	return sum;
} 
int main(){
	num[1]=1;
	for(int i=2;i<=200000;i++){
		num[i]+=div(i)+num[i-1];
		//cout<<i<<" "<<num[i]<<endl;
		if(num[i]==i){
			cout<<i;
			return 0;
		}
	}
}
