#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int n,len,num[10100][10]={0};
char a[101];
int main(){
	scanf("%d",&n);
	getchar();
	for(int i=1;i<=n;i++){
		gets(a);
		len=strlen(a);
		for(int j=0;j<len;j++){
			if(a[j]=='a')	num[i][1]++;
			if(a[j]=='e')	num[i][2]++;
			if(a[j]=='i')	num[i][3]++;
			if(a[j]=='o')	num[i][4]++;
			if(a[j]=='u')	num[i][5]++;
		}
	}
	for(int i=1;i<n;i++){
		printf("a:%d\n",num[i][1]);
		printf("e:%d\n",num[i][2]);
		printf("i:%d\n",num[i][3]);
		printf("o:%d\n",num[i][4]);
		printf("u:%d\n\n",num[i][5]);
	}
	printf("a:%d\n",num[n][1]);
	printf("e:%d\n",num[n][2]);
	printf("i:%d\n",num[n][3]);
	printf("o:%d\n",num[n][4]);
	printf("u:%d\n",num[n][5]);
	return 0;
}
