#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int num[101],prime[100010],number=0,sum_total=0;
int isprime(int x){
	int f=0;
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			f=1;
			break;
		}
	}
	if(f==1)	return 0;
	return 1;
} 
int splitnum(int x){
	memset(num,0,sizeof(num));
	int no=1;
	while(x!=0){
		num[no]=x%10;
		x/=10;
		no++;
	}
	return no;
}
void judge(int x){
	int t=x;
	int sum=0;
	int sum2=0;
	int len=splitnum(x);
	for(int i=1;i<=len;i++){
		sum+=num[i];
		sum2+=(num[i]*num[i]);
	}
	if(isprime(x)==1&&isprime(sum)==1&&isprime(sum2)==1){
		prime[++number]=x;
		sum_total+=x;
	}
}
int main(){
	for(int i=100;i<=10000;i++)
		judge(i);
	for(int i=1;i<=number;i++)
		printf("%d ",prime[i]);
	printf("\n");
	double ave=(sum_total*1.0)/number;
	printf("%lf",ave);
	return 0;
}
