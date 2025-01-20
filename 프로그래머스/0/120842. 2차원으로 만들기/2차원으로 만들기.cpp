#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int>sum;
    int count = 0;
    for(int o = 0; o < num_list.size(); o++)
    {
       sum.push_back(num_list[o]);
        count++;
        if(count == n)
        {
            answer.push_back(sum);
            sum.clear();
            count = 0;
        }
    }

    return answer;
}