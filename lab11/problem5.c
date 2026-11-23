#include <stdio.h>
struct hospitalrecord {
int admissionid;
char ward[30];
struct patientinfo {
int patientid;
char name[50];
int age;
} patient;
};
int main() {
struct hospitalrecord rec = {501, "emergency trauma", {9001, "Hamza Tariq", 34}};
struct hospitalrecord *ptr = &rec;
printf("admission id: %d\n", ptr->admissionid);
printf("ward: %s\n", ptr->ward);
printf("patient id: %d\n", ptr->patient.patientid);
printf("patient name: %s\n", ptr->patient.name);
printf("patient age: %d\n", ptr->patient.age);
return 0;
}