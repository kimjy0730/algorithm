#include <string>
#include <vector>

using namespace std;

long long factorial(int number , int numbersec)
{
    long long num = 1;
    for (int i = 1; i <= numbersec; i++) 
    {
        num *= (number -i + 1);
        num /= i;
    }
    return num;
}
int solution(int balls, int share) {
    long long answer = 0;
    
    
    return answer = factorial(balls, share) ;
}