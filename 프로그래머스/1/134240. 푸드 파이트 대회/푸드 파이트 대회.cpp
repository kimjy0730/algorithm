#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string left = "";

    for (int i = 1; i < food.size(); ++i) {
        int count = food[i] / 2;
        left += string(count, '0' + i);
    }

    string right = left;
    reverse(right.begin(), right.end());

    return left + "0" + right;
}
