#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    for (int i = 0 ; i < sides.size() - 1 ; i++)
    {
        
        for (int o = i+1 ; o < sides.size() ; o++)
        if (sides[i] < sides[o])
        {
            int num;
            num = sides[i];
            sides[i] = sides[o];
            sides[o] = num;
        }
    }
    
    if(sides[0] < sides[1]+sides[2])
    {
        answer = 1;
    }
    else
    {
        answer =2;
    }
    return answer;
}