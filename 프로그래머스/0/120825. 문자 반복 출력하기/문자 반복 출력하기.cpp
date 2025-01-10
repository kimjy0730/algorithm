#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for(int i = 0 ; i < my_string.length() ; i++)
    {
        for(int e = 0 ; e < n ; e++)
        {
            answer = answer + my_string[i] ;           
        }
    }

    return answer;
}