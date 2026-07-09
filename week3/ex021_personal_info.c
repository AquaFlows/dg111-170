#include <stdio.h>

int main() {

    char name[50];
    int age;
    float GPA;
    char favsubject[50];

    printf("===Enter Data===\n");
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &GPA);

    printf("Enter your Favorite subject: ");
    scanf("%s", favsubject);

    printf("\n===Personal Info===\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", GPA);
    printf("Favorite Subject: %s\n", favsubject);
    return 0;
}