#include <string>
#include <vector>
#include <numeric>
using namespace std;

int solution(int n) {
    int answer = 0; //6의 최소 공배수값을 구해라?

    int lcd = (n * 6) / std::gcd(n,6);
            answer = lcd / 6 ;   
    return answer;
}