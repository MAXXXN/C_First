#include<cstdio>
#include<iostream>
using namespace std;
int a[1000010];
int n,m,num=0,t=0;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&m);
		a[m]++;
		if(m>t)	t=m;
	}
	//for(int i=1;i<=n;i++)	printf("%d ",a[i]);
	for(int i=1;i<=t;i++){
		if(a[i]>0)	num+=a[i];
		//printf("%d\n",num);
		if(num>=(n/2+1)){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
