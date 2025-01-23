#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 2 ; i<=n ; i++)
    {
        int count =0;
        
        for(int o= 1; o<=i; o++)
        {
            if(i % o == 0)
            {
                count++;
            }
        }
        if(count > 2)
        {
            answer++;
        }
    }
    return answer;
}