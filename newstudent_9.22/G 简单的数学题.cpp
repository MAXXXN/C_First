#include<cstdio>
#include<iostream>
using namespace std;
int a[101],n,num=0,maxx=0,sum=1;
void chai(){
	int t=n;
	while(t>0){
		a[++num]=t%10;
		t/=10;
	}
}
int main(){
	scanf("%d",&n);
	chai();
	int x=2;
	for(int i=1;i<=num;i++)
		sum*=a[i];
	maxx=sum;
	while(x<=num){
		sum=1;
		for(int i=num;i>=x+1;i--)
			sum*=a[i];
		//printf("%d\n",sum);	
		if(a[x]-1<=0){
			if(x==num)	a[x]=2;
			else{
				x++;
				continue;
			}
		}
		sum*=(a[x]-1);
		for(int i=x-1;i>=1;i--)
			sum*=9;
		if(sum>maxx)	maxx=sum;
		x++;
	}
	printf("%d",maxx);
	return 0;
}
