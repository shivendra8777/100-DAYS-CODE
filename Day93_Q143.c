/*Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[3];
    float highest_marks = 0.0;
    int topper_index = -1;

    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d (Name RollNo Marks): ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);

        if (students[i].marks > highest_marks) {
            highest_marks = students[i].marks;
            topper_index = i;
        }
    }


    if (topper_index != -1) {
        printf("Topper: %s (Marks: %.2f)\n", students[topper_index].name, students[topper_index].marks);
    }

    return 0;
}
