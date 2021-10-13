#include<cstdio>
#include<iostream>
using namespace std;
int a[1001];
int n,m,k,num=2000;
int main(){
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=m+1;i<=n;i++)
		if(k>=a[i]&&a[i]!=0){
			num=i-m;
			break;
		}
	for(int i=m-1;i>=1;i--)
		if(k>=a[i]&&a[i]!=0){
			if(num>m-i)	num=m-i;
			break;
		}
	printf("%d",num*10);
	return 0;
}
