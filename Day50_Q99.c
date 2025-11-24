#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int day, month, year;
    char monthStr[4];

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Month conversion
    switch (month) {
        case 1:  strcpy(monthStr, "Jan"); break;
        case 2:  strcpy(monthStr, "Feb"); break;
        case 3:  strcpy(monthStr, "Mar"); break;
        case 4:  strcpy(monthStr, "Apr"); break;
        case 5:  strcpy(monthStr, "May"); break;
        case 6:  strcpy(monthStr, "Jun"); break;
        case 7:  strcpy(monthStr, "Jul"); break;
        case 8:  strcpy(monthStr, "Aug"); break;
        case 9:  strcpy(monthStr, "Sep"); break;
        case 10: strcpy(monthStr, "Oct"); break;
        case 11: strcpy(monthStr, "Nov"); break;
        case 12: strcpy(monthStr, "Dec"); break;
        default: printf("Invalid month!\n"); return 1;
    }

    printf("Converted Date: %02d-%s-%04d\n", day, monthStr, year);

    return 0;
}
