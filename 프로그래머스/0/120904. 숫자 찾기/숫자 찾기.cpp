#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    std::string temp = std::to_string(num);
    char k_char = k + '0';
    for (size_t i = 0; i < temp.size(); ++i) {
        if (temp[i] == k_char) {
            return answer = i + 1;
        }
    }
    
    
    return answer = -1;
}