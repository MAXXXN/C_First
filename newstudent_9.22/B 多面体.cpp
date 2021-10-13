#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
	string s;
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>s;
		if(s=="Tetrahedron")	sum+=4;
		if(s=="Cube")	sum+=6;
		if(s=="Octahedron")	sum+=8;
		if(s=="Dodecahedron")	sum+=12;
		if(s=="Icosahedron")	sum+=20;
	}
	printf("%d",sum);
	return 0;
} 
