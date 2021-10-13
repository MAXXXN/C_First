#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};
char a[9][9];
int fh[9];
int n,k,num=0;
void dfs(int sum,int x){
	if(sum>k){
		num++;
		return;
	}
	if(x>n)	return;
	for(int i=1;i<=n;i++){
		if(a[x][i]!='#'||fh[i]==1)	continue;
		fh[i]=1;
		dfs(sum+1,x+1);
		fh[i]=0;
	}
	dfs(sum,x+1);
	return;
}
int main(){
	scanf("%d%d",&n,&k);
	while(n!=-1&&k!=-1){
		memset(a,0,sizeof(a));
		memset(fh,0,sizeof(fh));
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				cin>>a[i][j];
		num=0;
		dfs(1,1);
		printf("%d\n",num);
		scanf("%d%d",&n,&k);		
	}
	return 0; 
}
