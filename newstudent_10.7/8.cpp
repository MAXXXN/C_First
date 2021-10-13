#include<cstdio>
#include<iostream>
using namespace std;
int n;
int m,num,t;
int gcd(int a,int b){
	if(a%b==0)	return b;
	return gcd(b,(a%b));
}
int main(){
	while(scanf("%d",&n)!=EOF){
		scanf("%d",&m);
		num=m;
		if(n==1){
			printf("%d\n",num);
			continue;
		}
		for(int i=2;i<=n;i++){
			scanf("%d",&m);
			if(m<num){
				num=num/gcd(num,m)*m;
			}
			else	num=num/gcd(m,num)*m;
		}
		printf("%d\n",num);
	}
	return 0;
}
