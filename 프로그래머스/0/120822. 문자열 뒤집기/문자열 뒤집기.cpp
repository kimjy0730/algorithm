#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {

    reverse(begin(my_string),end(my_string));
    string answer = my_string;
    return answer;
}