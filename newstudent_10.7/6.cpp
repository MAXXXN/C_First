#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char a[101];
int len,f=0;
int main(){
	while(gets(a)){
		f=0;
		len=strlen(a);
		a[0]=char(a[0]-32);
		for(int i=1;i<len;i++){
			if(f==1){
				a[i]=char(a[i]-32);
				f=0;
				continue;
			}
			if(a[i]==' '){
				f=1;
				continue;
			}
		}
		for(int i=0;i<len;i++)
			printf("%c",a[i]);
		printf("\n");
	}
	return 0;
}
