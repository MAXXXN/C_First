#include<cstdio>
#include<iostream>
using namespace std;
int money[6]={1,2,5,10,50,100};
int main(){
	int n,a,num=0,t;
	scanf("%d",&n);
	while(n!=0){
		num=0;
		for(int i=1;i<=n;i++){
			scanf("%d",&a);
			for(int j=0;j<=5;j++){
				if(a<=money[j]){
					t=j;
					while(a!=0){
						num+=a/money[t];
						a%=money[t];
						t--;
					}
					break;
				}
			}
			if(a>100){
				t=5;
				while(a!=0){
					num+=a/money[t];
					a%=money[t];
					t--;
				}
			}
			//printf("%d\n",num);
		}
		printf("%d\n",num);
		scanf("%d",&n);
	}
	return 0;
}
