#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int minnum = 0;
    sort(array.begin(),array.end());
    for(int i : array)
    {
        int num = n - i;
        if(num < 0)
        {num = num * -1;}
        
        if(num == 0)
        {
            answer = i;
            break;
        }
        
        if(minnum == 0)
        {
            minnum = num;
            answer = i;
        }
        if(minnum > num)
        {
            minnum = num;
            answer = i;
        }
    }
    
    return answer;
}