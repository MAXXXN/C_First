#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int n,m,f=0,num=0,a;
double stu[101]={0},cou[101]={0};
double mar[101][101];
int main(){
    while(scanf("%d%d",&n,&m)!=EOF){
        f=0;
        num=0;
        memset(stu,0,sizeof(stu));
        memset(cou,0,sizeof(cou));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                scanf("%d",&a);
                mar[i][j]=a*1.0;
                stu[i]+=a*1.0;
                cou[j]+=a*1.0;
            }
        }
        for(int i=1;i<=n-1;i++)
            printf("%.2lf ",stu[i]/(m*1.0));
        printf("%.2lf\n",stu[n]/(m*1.0));
        for(int j=1;j<=m-1;j++)
            printf("%.2lf ",cou[j]/(n*1.0));
        printf("%.2lf\n",cou[m]/(n*1.0));
        for(int i=1;i<=n;i++){
            f=0;
            for(int j=1;j<=m;j++)
                if(mar[i][j]<cou[j]/(n*1.0)){
                    f=1;
                    //printf("%d %d",i,j);
                    break;
                }
            if(f==0)    num++;
        }
        printf("%d\n\n",num);
    }
    return 0;
}