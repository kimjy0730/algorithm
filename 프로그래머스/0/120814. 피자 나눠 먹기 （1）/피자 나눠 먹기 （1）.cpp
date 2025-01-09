#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int a=0;
    if(n <=7)
    {answer = 1;}
    else if(n>7)
    {
        a = n % 7;
        if(a > 0 && a <= 7 )
        {   
            a = 1;
        }
        answer = n / 7 + a ;
    }
    return answer;
}