#include<stdio.h>
int main() {
	int num, sum;
	printf ("Enter a Natural Number: ");
	scanf ("%d",&num);
	for (int i=1; i<=num; i++) {
		sum += i;
	}
	printf("%d",sum);
}
