#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int A, B, C;
    printf("=== ОПРЕДЕЛЕНИЕ ПРАВА ПЕРВОГО ХОДА ===\n");
    printf("Введите два целых числа (номера команд А и В): ");
    scanf("%d %d", &A, &B);
    C = ((A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0));
    if (C) {
        printf("Право первого хода получено (1 - да).\n");
    }
    else {
        printf("Права первого хода нет (0 - нет).\n");
    }
    return 0;
}