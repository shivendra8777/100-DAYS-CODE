/*Q149: Use malloc() to allocate structure memory dynamically and print details.


Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

int main() {
    Student *student = (Student *)malloc(sizeof(Student));
    if (student == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter Student details (Name RollNo Marks): ");
    scanf("%s %d %f", student->name, &student->roll_no, &student->marks);

    printf("Student allocated dynamically with details:\n");
    printf("Name: %s | Roll: %d | Marks: %.2f\n", student->name, student->roll_no, student->marks);

    free(student);
    return 0;
}