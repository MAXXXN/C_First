#include<iostream>
#include<cstdio> 
using namespace std;
int main(){
	int Array1[] = { 1,2,3 }, Array2[] = { 2,3,1 };
	int temp;
	int n = sizeof(Array1) / sizeof(int) + sizeof(Array2) / sizeof(int) - 1;
	int Array3[sizeof(Array1) / sizeof(int) + sizeof(Array2) / sizeof(int) - 1] = {0,0,0,0,0};
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 3; j++){
			if (i - j< 0||i - j>2){
				temp = 0;
			}
			else{
				temp = Array2[i - j];
			}
			Array3[i] = Array3[i] + Array1[j] * temp;
		}
	}
	for (int i = 0; i < n; i++){
		cout << Array3[i] << endl;
	}
	return 0;
}
