#include <stdio.h>

int main() {
    int roll_number;
    char student_name[50];
    float student_marks;

    // open the file that contains the student marks
    FILE *marks_file = fopen("marks.txt", "r");

    if (marks_file == NULL) {
        printf("Error: File Not Found!\n");
        return 1;
    }

    // display a heading before reading the records
    printf("%-10s %-20s %-10s\n", "RollNo", "Name", "Marks");
    printf("----------------------------------------\n");

    // read and display each student's record
    while (fscanf(marks_file, "%d %49s %f", &roll_number, student_name, &student_marks) == 3) {
        printf("%-10d %-20s %-10.2f\n", roll_number, student_name, student_marks);
    }

    fclose(marks_file);

    return 0;
}
