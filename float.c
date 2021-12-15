#include <stdio.h>

int main(void){
	float average;
	int total;
	int count;
	
	char a;
	char array[20];
	printf ("Write a sentence: ");
	gets(array);
	printf ("Your sentence is: %s\n\n", array);
	
	/*******************************************/
	printf ("Enter the first number: ", &total);
	scanf  ("%d", &total);
	printf ("Enter the second number: ", &count);
	scanf  ("%d", &count);	
	average = (float)total / count;
	printf ("Average: %.2f\n\n", average);
	/*******************************************/
	
	do{
		printf ("Input the number '3': ");
		a = getchar();
		printf ("You entered: %c\n", a);
	}while(a != '3');
	
	
	getch();
}
