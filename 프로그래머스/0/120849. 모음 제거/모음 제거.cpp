#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(string my_string) {
    char Remove = 'a';
    char Remove1 = 'e';
    char Remove2 = 'i';
    char Remove3 = 'o';
    char Remove4 = 'u';
    my_string.erase(remove(my_string.begin(), my_string.end(), Remove), my_string.end());
    my_string.erase(remove(my_string.begin(), my_string.end(), Remove1), my_string.end());
    my_string.erase(remove(my_string.begin(), my_string.end(), Remove2), my_string.end());
    my_string.erase(remove(my_string.begin(), my_string.end(), Remove3), my_string.end());
    my_string.erase(remove(my_string.begin(), my_string.end(), Remove4), my_string.end());
    string answer = my_string;
    
    return answer;
}