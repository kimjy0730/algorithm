#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    if(direction == "right")
    {
        int tump = numbers[numbers.size()-1];
        for(int i = numbers.size()-1; i > 0; i--)
        {
            numbers[i] = numbers[i-1];
        }
        numbers[0] = tump;
    }
     else if(direction == "left")
    {
        int tump = numbers[0];
        for(int i = 0; i < numbers.size(); i++)
        {
            numbers[i] = numbers[i+1];
        }
        numbers[numbers.size()-1] = tump;
    }
    
    
    return answer = numbers;
}