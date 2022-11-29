#include <stdio.h>
#include <string.h>

#define MAX_NAME   20

struct student{
	int ID;
	char name[MAX_NAME];
	double grade;
};

int main(int argc, const char * argv[]) {
	
	struct student student1 = {1003, "JuyeopKim", 4.3};
	
	student1.ID = 1020;
	strcpy(student1.name, "KimJuyeop");
	student1.grade = 3.3;
	
	printf("ID : %i\n", student1.ID);
	printf("name: %s\n", student1.name);
	printf("grade: %1f\n", student1.grade);
	
	return 0;
}
