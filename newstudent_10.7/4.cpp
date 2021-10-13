#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int n,len,f;
char a[51];
int main(){
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++){
        f=0;
        gets(a);
        len=strlen(a);
        //printf("%d\n",len);
        if(a[0]>='0'&&a[0]<='9'){
            printf("no\n");
            continue;
        }
        for(int j=0;j<len;j++){
            if((a[j]>='A'&&a[j]<='Z')||(a[j]>='a'&&a[j]<='z')||(a[j]>='0'&&a[j]<='9')||(a[j]=='_')){
                //printf("%c ",a[j]);
				continue;
			}
            else  {
                f=1;
                break;
            }
        }
        if(f==1)    printf("no\n");
        else    printf("yes\n");
    }
    return 0;
}
