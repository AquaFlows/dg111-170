#include <stdio.h>

int main() 
{
    float weight, height, BMI, height_m;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in centimeters: ");
    scanf("%f", &height);

    height_m = height / 100; // Convert height from centimeters to meters
    BMI = weight / (height_m * height_m);

    printf("Your BMI is: %.2f\n", BMI);

    if (BMI < 18.5) {
        printf("You are underweight.\n");
    } else if (BMI >= 18.5 && BMI < 24.9) {
        printf("You have a normal weight.\n");
    } else if (BMI >= 25 && BMI < 29.9) {
        printf("You are overweight.\n");
    } else if (BMI >= 30) {
        printf("You are obese.\n");
    }

    return 0;
}