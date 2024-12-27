#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int num = 0;
    for(int a=0;a<n+1;a++)
    {if(a % 2 == 0){num+=a;}}
    answer=num;
    num=0;
    return answer;
}