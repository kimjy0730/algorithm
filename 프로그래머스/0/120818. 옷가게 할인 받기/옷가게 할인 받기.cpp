#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
   
    if (price >= 100000 && price <300000)
    {
        answer = price - (price * 5 +50)/ 100;
    }
    else if ( price >= 300000 && price <500000)
    {
         answer = price - (price * 10+50) / 100;
    }
    else if ( price >= 500000 && price <= 1000000)
    {
         answer = price - (price * 20+50) / 100;
    }  
    else 
    {
        answer = price;
    }
   
    return answer;
}