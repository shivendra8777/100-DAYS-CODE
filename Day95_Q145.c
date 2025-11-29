/*Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
#include <string.h> 
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student students[], int count) {
    struct Student topStudent = students[0];
    for (int i = 1; i < count; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    return topStudent;
}

int main() {
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d (Name RollNo Marks): ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    struct Student topStudent = getTopStudent(students, 3);
    printf("Top Student: %s | Roll: %d | Marks: %.2f\n", topStudent.name, topStudent.roll_no, topStudent.marks);

    return 0;
}
