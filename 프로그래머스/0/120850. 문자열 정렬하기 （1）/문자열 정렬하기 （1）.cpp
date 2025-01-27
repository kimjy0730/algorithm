#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(char c : my_string)
    {
        if(c == '0')
        {
            answer.push_back(0);
        }
        if(c == '1')
        {
            answer.push_back(1);
        }
        if(c == '2')
        {
            answer.push_back(2);
        }
        if(c == '3')
        {
            answer.push_back(3);
        }
        if(c == '4')
        {
            answer.push_back(4);
        }
        if(c == '5')
        {
            answer.push_back(5);
        }
        if(c == '6')
        {
            answer.push_back(6);
        }
        if(c == '7')
        {
            answer.push_back(7);
        }
        if(c == '8')
        {
            answer.push_back(8);
        }
        if(c == '9')
        {
            answer.push_back(9);
        }      
    }
    
    sort(answer.begin(),answer.end());
  
    return answer;
}