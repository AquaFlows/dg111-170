#include <stdio.h>

int main() 
{
    int score;

    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid score. Please enter a value between 0 and 100.\n");
        return 1;
    }

    if (score >= 80 && score <= 100) {
        printf("Grade A (4.0) - Pass\n");
    } else if (score >= 75 && score <= 79) {
        printf("Grade B+ (3.5) - Pass\n");
    } else if (score >= 70 && score <= 74) {
        printf("Grade B (3.0) - Pass\n");
    } else if (score >= 65 && score <= 69) {
        printf("GradeC+ (2.5) - Pass\n");
    } else if (score >= 60 && score <= 64) {
        printf("GradeC (2.0) - Pass\n");
    } else if (score >= 55 && score <= 59) {
        printf("Grade D+ (1.5) - Pass\n");
    } else if (score >= 50 && score <= 54) {
        printf("Grade D (1.0) - Pass\n");
    } else {
        printf("Grade F (0.0) - Fail\n");
    }

    return 0;
}