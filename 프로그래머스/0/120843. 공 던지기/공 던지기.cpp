#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int o = 0;
    for(int i = 0; i < k-1 ; i++)
    {
      o = (o+2)%numbers.size();
      answer = numbers[o];
    }
    
    return answer;
}