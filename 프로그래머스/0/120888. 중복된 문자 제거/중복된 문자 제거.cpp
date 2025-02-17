#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char>ans;
    
    for(char str : my_string)
    {
         if (find(ans.begin(), ans.end(), str) == ans.end()) 
         {
            ans.push_back(str);
            answer += str;
        }  
    }
    return answer;
}