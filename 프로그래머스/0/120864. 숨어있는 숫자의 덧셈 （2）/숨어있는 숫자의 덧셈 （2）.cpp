#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int number = 0;
    for(char st : my_string)
    {
        if(st >= '0' && st <= '9')      
        {         
            number = number * 10 + (st - '0');
        }
        else
        {
            answer += number;
            number = 0;
        }
    }
    
    answer += number;
    return answer;
}