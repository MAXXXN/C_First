#include<cstdio>
#include<iostream>
using namespace std;
int n,a,b,c,f[10001];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d",&a,&b,&c);
		if(a+b>c&&b+c>a&&a+c>b)
			f[i]=1;
		else	f[i]=0; 
	}
	for(int i=1;i<=n;i++){
		if(f[i]==1)
			printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}
