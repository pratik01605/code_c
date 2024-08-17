#include<stdio.h>
void main(){

	int a[50];
	int n,sum=0;
	printf("Enter a size of an array");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);

	}

for(i=0;i<n;i++){
sum=sum+a[i];
}
printf("%d",sum);
}
