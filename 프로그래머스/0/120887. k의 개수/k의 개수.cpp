#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(i; i <= j; i++)
    {
        std::string num = std::to_string(i);
        for(char number : num)
        {
            char k_num = k + '0';
            if(number == k_num)
            {
                answer++;
            }
        }
    }
    return answer;
}