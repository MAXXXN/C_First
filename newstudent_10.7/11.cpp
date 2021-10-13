#include<cstdio>
#include<iostream>
using namespace std;
int n;
int a[31][31];
int main(){
	a[1][1]=1;
	a[2][1]=1;
	a[2][2]=1;
	for(int i=3;i<=30;i++){
		a[i][1]=1;
		a[i][i]=1;
	}
	for(int i=3;i<=30;i++)
		for(int j=2;j<i;j++)
			a[i][j]=a[i-1][j]+a[i-1][j-1];
	while(scanf("%d",&n)!=EOF){
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++)
				printf("%d ",a[i][j]);
			printf("%d\n",a[i][i]);
		}
		printf("\n");
	}
	return 0;
}
