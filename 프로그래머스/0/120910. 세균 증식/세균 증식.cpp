#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    int b;
    for(int i = 1; i<t+1 ; i++)
    {
         b = n * 2;
         n = b;
    }
    
    int answer = b;   
    return answer;
}