#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int maxx=0,n,m,maxn;
int shai(int a){
	if(a==1)	return a;
	while(a>1){
		for(int i=2;i<=a;i++){
			if(a==i)	return a;
			if(a%i==0){
				while(a%i==0&&a>i)
					a/=i;
				break;
			} 
		}
	}
	return a;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&m);
		if(shai(m)>maxx){ 
			maxn=m;
			maxx=shai(m);
			//printf("%d %d\n",shai(m),maxn);
		}
	}
	printf("%d",maxn);
	return 0;
} 
