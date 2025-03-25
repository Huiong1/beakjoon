#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	double jumsu[1001];
	int t, max = -1;
	double sum = 0;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%lf", &jumsu[i]);
		if (max < jumsu[i]) max = jumsu[i];
	}

	for (int i = 0; i < t; i++) {
		jumsu[i] = jumsu[i] / max * 100;
		sum += jumsu[i];
	}

	printf("%lf", sum / t);



	return 0;
}