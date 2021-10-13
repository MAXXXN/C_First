#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int x,y,a,maxn=0,tx,ty,t,f=0;
int main(){
    while(scanf("%d%d",&x,&y)!=EOF){
        maxn=0;
        for(int i=1;i<=x;i++)
            for(int j=1;j<=y;j++){
                scanf("%d",&a);
                if(a>maxn){
                    maxn=a;
                    tx=i;
                    ty=j;
                    t=a;
                    f=1;
                }
                if((-a)>maxn){
                    maxn=-a;
                    tx=i;
                    ty=j;
                    t=a;
                    f=1;
                }
            }
        if(f==1)    printf("%d %d %d\n",tx,ty,t);
        else    printf("1 1 0\n");
    }
    return 0;
}