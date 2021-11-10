#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int isprime(long long x){
	int f=0;
	for(long long i=2;i*i<=x;i++){
		if(x%i==0){
			f=1;
			break;
		}
	}
	if(f==1)	return 0;
	return 1;
} 
int main(){
	for(int p=1;p<=15;p++)
		for(int q=1;q<=15;q++){
			long long m=(pow(p,q)+pow(q,p));
			if(isprime(m)==1&&isprime(p)==1&&isprime(q)==1)
				printf("p=%d q=%d\np^q+q^p=%lld\n\n",p,q,m);
		}
	return 0;
}
