#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(int i = 0; i < array.size(); i++)
    {
       string number = to_string(array[i]);
        for(int o = 0; o <number.length(); o++)
        {
            char num = number[o];
            if(num == '7')
            {
                answer++;
            }
        }
    }
    
    return answer;
}