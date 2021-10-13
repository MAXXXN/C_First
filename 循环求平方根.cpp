#include <stdio.h>
#include <math.h>
float mysqrt(float n) {
	float right = n;
	float left = 0;
	float ans = n/2;
	while((ans*ans-n)>0.000001||(n-ans*ans)>0.000001) {
		if (ans*ans > n+0.000001) {
			right = ans;
			ans = (right+left)/2;
		}
		else{
			left = ans;
			ans = (right+left)/2; 
		}
	}
	return ans;
}
int main() {
	float n;
	scanf("%f",&n);
	n=mysqrt(n);
	printf("%f",n); 
	return 0;
} 
