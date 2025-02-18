#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    unordered_map<char, int> freq;

    for (char pin : s) 
    {
        freq[pin]++;
    }

    for (auto& pair : freq) 
    {
        if (pair.second == 1) 
        {
            answer += pair.first;
        }
    }
    
    sort(answer.begin(),answer.end());
    return answer;
}