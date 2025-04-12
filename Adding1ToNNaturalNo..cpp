#include<stdio.h>
int main() {
	int num;
	printf ("Enter a Natural Number: ");
	scanf ("%d",&num);
	{
	for (int i=1; i<num; i++) {
		int sum = i + num;
		printf(sum);
	}
}
}
