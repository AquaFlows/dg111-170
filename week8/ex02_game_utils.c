#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int clamp(int value, int min, int max);

float lerp(float a, float b, float t);

int randomRange(int min, int max);

float percentOf(int current, int total);

int main(void) {
    srand((unsigned int)time(NULL));

    printf("=== GAME UTILITY LIBRARY ===\n\n");

    printf("-- clamp --\n");
    printf("clamp(150, 0, 100) -> expected 100, actual %d\n", clamp(150, 0, 100));
    printf("clamp(-5, 0, 100)  -> expected 0,   actual %d\n", clamp(-5, 0, 100));
    printf("clamp(50, 0, 100)  -> expected 50,  actual %d\n", clamp(50, 0, 100));

    int hp = 150;
    int safeHP = clamp(hp, 0, 100);
    printf("hp เดิม = %d\n", hp);
    printf("safeHP  = %d\n\n", safeHP);

    printf("-- lerp --\n");
    printf("lerp(0, 100, 0.5) -> expected 50.0,  actual %.1f\n", lerp(0, 100, 0.5f));
    printf("lerp(0, 100, 0.0) -> expected 0.0,   actual %.1f\n", lerp(0, 100, 0.0f));
    printf("lerp(0, 100, 1.0) -> expected 100.0, actual %.1f\n", lerp(0, 100, 1.0f));

    float t = 0.5f;
    float pos = lerp(0, 100, t);
    printf("t ใน main = %.2f\n", t);
    printf("pos = %.2f\n\n", pos);

    printf("-- randomRange --\n");
    int diceMin = 1;
    for (int i = 0; i < 5; i++) {
        printf("dice roll: %d (expected range 1-6)\n", randomRange(diceMin, 6));
    }
    printf("diceMin เดิม = %d\n\n", diceMin);

    printf("-- percentOf --\n");
    printf("percentOf(35, 100) -> expected 35.0, actual %.1f\n", percentOf(35, 100));

    int score = 35, total = 100;
    float percent = percentOf(score, total);
    printf("score/total เดิม = %d/%d\n", score, total);
    printf("percent = %.1f%%\n", percent);

    return 0;
}


int clamp(int value, int min, int max) {
    if (value > max) value = max;
    if (value < min) value = min;
    return value;
}

float lerp(float a, float b, float t) {
    float result = a + (b - a) * t;
    return result;
}

int randomRange(int min, int max) {
    return rand() % (max - min + 1) + min;
}

float percentOf(int current, int total) {
    return (float)current / total * 100.0f;
}