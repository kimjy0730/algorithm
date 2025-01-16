#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int age) {
    string answer = "";
    vector<int>agenum;
    int agenumber = age;
    while(agenumber)
    {
        int number;
        agenum.push_back(agenumber%10);
        agenumber = agenumber / 10;
          
    }
    reverse(agenum.begin(),agenum.end());
    
    
    for(auto c : agenum)
    { answer += char(c + 97); }
        
       
    return answer;
}