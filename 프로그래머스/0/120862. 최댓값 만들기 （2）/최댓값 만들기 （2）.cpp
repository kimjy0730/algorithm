#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = numbers[0] * numbers[1];
    for(int i = 0 ; i< numbers.size();i++)
    {
        for(int p = i + 1; p<numbers.size();p++)
        {      
            int product = numbers[i] * numbers[p]; 
                if(answer < product)
                    answer = product;
        }
    }
    return answer;
}