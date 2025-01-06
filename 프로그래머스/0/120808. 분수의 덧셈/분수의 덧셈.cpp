#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
        vector<int> answer;
    int a = denom1 * denom2;
    int b = (denom1 * numer2) + (denom2 * numer1);
    int r = a;
    int t = b;
        
    while(a != 0)
    { int e = a;
     a = b % a;
     b = e;
     
    }
    r = r / b;
    t = t / b;
    answer = {t , r};
    return answer;
}