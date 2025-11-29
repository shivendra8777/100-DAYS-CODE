/*Q150: Use pointer to struct to modify and display data using -> operator.

Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

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

  
    printf("Enter new details for Student (Name RollNo Marks): ");
    scanf("%s %d %f", student->name, &student->roll_no, &student->marks);

    printf("Modified Data:\n");
    printf("Name: %s | Roll: %d | Marks: %.2f\n", student->name, student->roll_no, student->marks);

    free(student);
    return 0;
}