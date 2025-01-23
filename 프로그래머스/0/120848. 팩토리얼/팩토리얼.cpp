#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i =1; i <= 10;i++)
    {
        long long factorial = 1;
        
        for(int o =1; o<=i;o++)
        {
            factorial *= o;
        }
        
        if(factorial <= n)
        {
            answer++;
        }
        else 
        {
            break;
        }
    }
    return answer;
}