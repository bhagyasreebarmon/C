/*
structure data type: koyekti built in(readymade) data type mile banano data type hocche
structure data type. programmar nije nije ei data type banate pare

example: print a one person biodata :
name = "john smith" , age = 30, height = 5.8;
*/
#include<stdio.h>
#include<string.h>
// Define a structure for a Person
struct Person{

	char name[50];
	int age;
	float height;
};
int main()  
{
	// Declare a structure variable
	struct Person person1;
	// Assign values to the structure members using the dot operator
	strcpy(person1.name, "john smith");
	person1.age = 30;
	person1.height = 5.8;
	// Output the values
	printf("name : %s\n",person1.name);
	printf("age : %d\n", person1.age);
	printf("height : %f",person1.height);
	
}
