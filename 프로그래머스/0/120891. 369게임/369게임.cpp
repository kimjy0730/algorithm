#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
        std::string str_order = std::to_string(order);
    for (char digit : str_order) {
        if (digit == '3' || digit == '6' || digit == '9') {
            answer++;
        }
    }
    return answer;
}