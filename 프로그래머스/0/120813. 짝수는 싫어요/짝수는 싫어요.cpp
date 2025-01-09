#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    
    vector<int> answer;
    for(int i = 0 ; i <= n;i++)
    {
        int o = i % 2;
        if(o != 0)
        {
            answer.push_back(i);
        }
    }
    return answer;
}