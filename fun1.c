 #include <stdio.h>

// Function declaration: tells the compiler about add before it is used.
int add(int firstNumber, int secondNumber);

// Function definition: contains the code that adds the two numbers.
int add(int firstNumber, int secondNumber) {
	return firstNumber + secondNumber;
}

int main(void) {
	int firstNumber;
	int secondNumber;

	printf("Enter two numbers: ");
	scanf("%d %d", &firstNumber, &secondNumber);

	// Function call: runs add with the two numbers entered by the user.
	printf("Sum: %d\n", add(firstNumber, secondNumber));

	return 0;
}
