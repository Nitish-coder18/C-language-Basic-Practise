#include <stdio.h>
int main() {
	int n, fact=1;
	printf ("Enter a Number: ");
	scanf ("%d",&n);
	for (int i=1; i<=n; i++) {
		fact *= i;
	}
	printf("The Factorial of number is: %d", fact);
}
