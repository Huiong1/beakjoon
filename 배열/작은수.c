#include <stdio.h>


int main() {
	
	int t, X;
	int a;
	scanf("%d %d", &t, &X);
	
	for(int i = 0; i < t; i++) {
		scanf("%d", &a);
		if(X > a) printf("%d ", a);
	}
	
	return 0;
}