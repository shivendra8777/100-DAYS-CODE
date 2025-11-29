/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.


Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
#include <string.h>

enum TrafficLight { Red, Yellow, Green };

int main() {
    char input[10];
    enum TrafficLight light;

    printf("Enter traffic light(Red, Yellow, Green): ");
    scanf("%s", input);

    if (strcmp(input, "Red") == 0) {
        light = Red;
    } else if (strcmp(input, "Yellow") == 0) {
        light = Yellow;
    } else if (strcmp(input, "Green") == 0) {
        light = Green;
    } else {
        printf("Invalid Input!\n");
        return 0;
    }

    switch (light) {
        case Red:
            printf("Stop\n");
            break;
        case Yellow:
            printf("Wait\n");
            break;
        case Green:
            printf("Go\n");
            break;
    }

    return 0;
}
