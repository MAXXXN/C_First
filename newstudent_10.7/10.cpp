#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int a,r,num[10100],n;
int main(){
	while(scanf("%d%d",&a,&r)!=EOF){
		n=0;
		memset(num,0,sizeof(num));
		while(a){
			num[++n]=a%r;
			a/=r;
		}
		if(num[n]<0)	printf("-");	
		for(int i=n;i>=1;i--){
			if(abs(num[i])==10)	printf("A");
			else if(abs(num[i])==11)	printf("B");
			else if(abs(num[i])==12)	printf("C");
			else if(abs(num[i])==13)	printf("D");
			else if(abs(num[i])==14)	printf("E");
			else if(abs(num[i])==15)	printf("F");
			else	printf("%d",abs(num[i]));
		}
		printf("\n");
	}
	return 0;
}
