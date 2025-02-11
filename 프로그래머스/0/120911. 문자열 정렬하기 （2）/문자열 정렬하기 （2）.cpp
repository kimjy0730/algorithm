#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(char change : my_string)
    {
        if(change >= 'A' && 'Z' >= change)
            change = change + ('a'-'A');
            answer += change;
    }
    sort(answer.begin(), answer.end());
    return answer;
}