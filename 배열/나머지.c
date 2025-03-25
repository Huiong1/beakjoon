#include <stdio.h>

int arr[42];

int main(){
	int x;
	int ans = 0;
	
	for(int i=0;i<10;i++){
		scanf("%d",&x);
		arr[x%42] = 1;
	}
	
	for(int i=0;i<42;i++)
		ans += arr[i];
	
	printf("%d",ans);
	
	return 0;
}