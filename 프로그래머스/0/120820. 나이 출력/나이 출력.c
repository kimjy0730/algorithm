#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int age) {
    int answer = 0;
    if(0 < age){ answer = 2023 - age;}
    return  answer;
}