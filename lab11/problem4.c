#include <stdio.h>
struct address {
char city[50];
int zipcode;
char state[50];
};
struct student {
char rollno[20];
char name[50];
double cgpa;
struct address studentaddress;
};
int main() {
struct student student1 = {"26K-1042", "Abdul Ahad Lodhi", 3.85, {"Karachi", 75010, "Sindh"}};
printf("roll no: %s\n", student1.rollno);
printf("name: %s\n", student1.name);
printf("cgpa: %.2f\n", student1.cgpa);
printf("city: %s\n", student1.studentaddress.city);
printf("zip code: %d\n", student1.studentaddress.zipcode);
printf("state: %s\n", student1.studentaddress.state);
return 0;
}