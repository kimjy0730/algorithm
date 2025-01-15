#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int hp) {
    int answer = 0;
    answer = hp / 5;
    int gennull = hp % 5;
    if(gennull > 0)
    {
     answer += gennull / 3;
     int gennulltt = gennull % 3;
        if(gennulltt > 0)
        {
            answer += gennulltt / 1;
        }
        
    }
    
    return answer;
}