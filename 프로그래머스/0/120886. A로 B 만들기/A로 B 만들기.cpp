#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string before, string after) {
    int answer = 0;
    for(char st : before)
    {
        size_t pos = after.find(st);
        if(pos != string::npos)
        {
            after.erase(pos, 1);
        }
        else
        {
            answer = 0;
            break;
        }
    }
    answer = after.empty() ? 1 : 0;
    return answer;
}