#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> num = emergency;
    vector<int> answer(emergency.size());
    sort(num.begin(), num.end(),greater<int>());
    for(int i =0 ;i < num.size(); i++)
    {
       auto it = find(emergency.begin(), emergency.end(), num[i]);
         if (it != emergency.end()) 
         {
          answer[it - emergency.begin()] = i + 1;
         }
    };
    return answer;
}