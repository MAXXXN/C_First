#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int num=0;
	while(a<=b){
		a*=3;
		b*=2;
		num++;
	}
	printf("%d",num);
	return 0;
} 
