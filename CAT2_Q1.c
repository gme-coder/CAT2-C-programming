#include <stdio.h>
#include <string.h>
//declaring a structure called employees
struct 
{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
	
}employee1;
int main(int argc, char** argv)
{
//initiallizing data
strcpy(employee1.name,"john doe");
employee1.id = 12345;
strcpy(employee1.department,"human resources");
employee1.salary = 55000.50;
strcpy(employee1.email,"johndoe@company.com");

//printing the results

printf("name: %s\n",employee1.name);
printf("id number: %d\n", employee1.id);
printf("salary: %f\n", employee1.salary);
printf("email: %s\n",employee1.email);
	
	return 0;
}
