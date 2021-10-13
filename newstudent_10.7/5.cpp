#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std; 
char a[101];
int len,maxn,num;
int main(){
	while(gets(a)){
		maxn=0;
		len=strlen(a);
		for(int i=0;i<len;i++){
			if(a[i]+32>=maxn){
					maxn=a[i]+32;
					num=i;
			}
		}
		for(int i=0;i<len;i++){
			if(a[i]==a[num]){
				printf("%c(max)",a[i]);
				continue;
			}
			printf("%c",a[i]);
		}
		printf("\n");
	}
	return 0;
}
