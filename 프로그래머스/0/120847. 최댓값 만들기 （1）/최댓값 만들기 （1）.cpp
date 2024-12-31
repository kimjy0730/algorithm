#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers)
{
    int sum;
    for(int i = 0; i < numbers.size()-1; i++)
    {
        for(int p =i+1; p<numbers.size(); p++ )
        {
            if(numbers[i] < numbers[p])
            {
            sum = numbers[i];
            numbers[i] = numbers[p];
            numbers[p] = sum;           
            }    
        }
    }
    int answer = 0;
    answer = numbers[0] * numbers[1];
    
    return answer;
}