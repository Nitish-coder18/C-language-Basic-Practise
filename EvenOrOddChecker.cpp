#include<stdio.h>
int main() {
	int num;
	printf("Enter the Number: ");
	scanf ("%d",&num);
	if (num%2 == 0) {
		printf("The Given Number is Even..!!");
	} else {
		printf("The Given Numeber is Odd..!!");
	}
}
