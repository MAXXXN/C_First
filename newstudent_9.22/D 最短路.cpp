#include<bits/stdc++.h>
using namespace std;
int n,m,tot=0;
const int maxn=5e5+5;
int head[maxn],to[maxn],w[maxn],nxt[maxn];
int dis[maxn],f[maxn];
priority_queue<pair<int,int> >q;
void add(int a,int b,int c){
	w[++tot]=c;
	nxt[tot]=head[a];
	to[tot]=b;
	head[a]=tot;
	w[++tot]=c;
	nxt[tot]=head[b];
	to[tot]=a;
	head[b]=tot;
}
void dijkstra(){
	fill(dis,dis+n+1,0x3f3f3f3f);
	dis[n]=0;
	q.push(make_pair(0,n));
	while(q.size()!=0){
		int x=q.top().second;
		q.pop();
		if(f[x]!=0)	continue;
		f[x]=1;
		for(int i=head[x];i;i=nxt[i]){
			int a=to[i];
			int b=w[i];
			if(dis[a]>dis[x]+b){
				dis[a]=dis[x]+b;
				q.push(make_pair(-dis[a],a));
			}
		}
	}
}
int main(){
	int a,b,c;
	scanf("%d%d",&n,&m);
	while(n!=0&&m!=0){
		memset(head,0,sizeof(head));
		memset(nxt,0,sizeof(nxt));
		memset(w,0,sizeof(w));
		memset(f,0,sizeof(f));
		tot=0; 
		for(int i=1;i<=m;i++){
			scanf("%d%d%d",&a,&b,&c);
			add(a,b,c);
		}
		dijkstra();
		printf("%d\n",dis[1]);
		scanf("%d%d",&n,&m);
	}
	return 0;
}
