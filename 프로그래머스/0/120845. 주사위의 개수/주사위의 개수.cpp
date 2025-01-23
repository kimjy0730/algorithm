#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0;
    for(int i = 1 ; i <= box[2]/n; i++)
    {
        int tump = (box[0]/n)*(box[1]/n);
        answer += tump;
    }
    
    return answer;
}