#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
   
    int sum=0;
    int r = num_list.size()-1;
    int i = 0;
    
    while(i < r)
    {
     sum = num_list[i];
     num_list[i] = num_list[r];
     num_list[r] = sum;
        i++; r--;
    }
    
    vector<int> answer(num_list);
    return answer;
}