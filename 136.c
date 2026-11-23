#include <stdio.h>
#include <string.h>
enum MenuChoice {
	ADD,
	SUBTRACT,
	MULTIPLY
};
int main() {
	char operation[100];
	int a, b;
	enum MenuChoice choice;
    printf("Enter operation(in capital letters) and two numbers");
    scanf("%s %d %d", operation, &a, &b);
	if (strcmp(operation, "ADD") == 0) {
		choice = ADD;
	} 
    else if (strcmp(operation, "SUBTRACT") == 0) {
		choice = SUBTRACT;
	} 
    else if (strcmp(operation, "MULTIPLY") == 0) {
		choice = MULTIPLY;
	} 
    else {
		return 1;
	}
	switch (choice) {
		case ADD:
			printf("%d\n", a + b);
			break;
		case SUBTRACT:
			printf("%d\n", a - b);
			break;
		case MULTIPLY:
			printf("%d\n", a * b);
			break;
	}
	return 0;
}