#include <stdio.h>

int main() {
    // First angle
    int angle1 = 65; 

    // Second angle
    int angle2 = 45;

    // ? the third angle
    int angle3;

    // Calculate the third angle
    angle3 = 180 - (angle1 + angle2);

    // Print the third angle
    printf("The third angle is: %d\n",angle3);
}