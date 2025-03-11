#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string temp = "";
    int number = 0;
    for(int i = 0; i < s.length();i++)
    {
        if(s[i] == ' ')
        {
            if(!temp.empty())
            {
                number = stoi(temp);
                answer += number;
                temp = "";
            }
        }
        else if(s[i] == 'Z')
        {
            answer -= number;
        }
        else
        {
            temp += s[i];
        }
    }
    if(!temp.empty())
    {
        number = stoi(temp);
        answer += number;
        temp = "";
    }
    
    return answer;
}