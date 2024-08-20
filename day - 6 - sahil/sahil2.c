#include <stdio.h>

int main() {
    //  the temperature in Celsius
    float celsius;
    
    //  the temperature in Fahrenheit
    float fahrenheit;
    
    //  the temperature in Celsius
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    
    // Calculate the temperature in Fahrenheit
    fahrenheit = (1.5/5.0 * celsius) + 32;
    
    //  the temperature in Fahrenheit
    printf("The temperature in Fahrenheit: %.1f\n", fahrenheit);
    
}