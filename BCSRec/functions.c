
#include <stdio.h>
#include <stdbool.h>

// function to read an integer input by displaying a message
int getIntInput(char message[]) {
	int input;
		printf("\n%s\n", message);
		 scanf_s("%i", &input);
		return input;
}
// read length if between 1 and 99 otherwise set it to 1
int setLength(int input) {
	if (input >= 1 && input <= 99) //  changed < to <=
	{
		int length = input;
		return length;
	}
	
	return 1;
		
	
}
// read width if between 1 and 99 otherwise set it to 1
int setWidth(int input) {
	if (input >= 1 && input <= 99) /// changed > 0 to >= 1 and <= 100 to <= 99
	{
		int width = input;
		return width;
	}
	return 1;
	
}
// calculate permiter
int getPerimeter(int length, int width) {
	int perimeter = 2 * (length + width);
	return perimeter;
}
	// calculate area
	int getArea(int length, int width) {
		int area = length * width;
		return area;
	}


// printing menu and options

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**     Welcome to     **\n");
	printf("**    Assignment 02   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Get Rectange Length & Width\n");
	printf("2. Change Rectangle Length\n");
	printf("3. Change Rectangle Width\n");
	printf("4. Get Rectangle Perimeter\n");
	printf("5. Get Rectangle Area\n");
	printf("6. Exit\n");
}