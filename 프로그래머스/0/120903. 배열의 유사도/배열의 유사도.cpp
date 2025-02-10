#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for(int i = 0; i <s1.size(); i++)
    {
        for(int p = 0; p < s2.size(); p++)
        {
            if(s1[i] == s2[p])
            {
                answer++;
            }
        }
    }
    return answer;
}