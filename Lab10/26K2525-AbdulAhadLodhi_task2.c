#include <stdio.h>
#include <string.h>

int main() {
    char student_names[10][50];
    char temporary_name[50];
    int name_index, compare_index;

    // take the names of ten students
    printf("Enter 10 student names:\n");
    for (name_index = 0; name_index < 10; name_index++) {
        scanf("%49s", student_names[name_index]);
    }

    // arrange the names in alphabetical order
    for (name_index = 0; name_index < 9; name_index++) {
        for (compare_index = 0; compare_index < 9 - name_index; compare_index++) {
            if (strcmp(student_names[compare_index], student_names[compare_index + 1]) > 0) {
                strcpy(temporary_name, student_names[compare_index]);
                strcpy(student_names[compare_index], student_names[compare_index + 1]);
                strcpy(student_names[compare_index + 1], temporary_name);
            }
        }
    }

    // print the sorted student list
    printf("\nSorted Alphabetical Roster:\n");
    for (name_index = 0; name_index < 10; name_index++) {
        printf("%s\n", student_names[name_index]);
    }

    return 0;
}
