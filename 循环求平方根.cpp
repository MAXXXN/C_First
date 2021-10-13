#include <stdio.h>
#include <math.h>
float mysqrt(float n) {
	float x = n;
	float y = 0;
	float ans = n/2;
	while((ans*ans-n)>0.000001||(n-ans*ans)>0.000001) {
		if (ans*ans > n+0.000001) {
			x = ans;
			ans = (x+y)/2;
		}
		else{
			y = ans;
			ans = (x+y)/2; 
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
