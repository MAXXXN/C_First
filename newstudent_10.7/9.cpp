#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
char a[101];
int n,len,f;
int main(){
	scanf("%d",&n);
	getchar();
	for(int i=1;i<=n;i++){
		f=0;
		gets(a);
		len=strlen(a);
		for(int j=0;j<=len/2;j++){
			if(a[j]!=a[len-j-1]){
				f=1;
				break;
			}
		}
		if(f==1)	printf("no\n");
		else	printf("yes\n");
	}
	return 0;
}
