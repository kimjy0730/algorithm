#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

string solution(string letter) 
{
    string answer = "";
    stringstream ss(letter);
    string word;
    vector<string> words;

  
    while (ss >> word) 
    {
        words.push_back(word);
    }


    for (auto word : words) 
    {
        if (word == ".-") answer += 'a';
        else if (word == "-...") answer += 'b';
        else if (word == "-.-.") answer += 'c';
        else if (word == "-..") answer += 'd';
        else if (word == ".") answer += 'e';
        else if (word == "..-.") answer += 'f';
        else if (word == "--.") answer += 'g';
        else if (word == "....") answer += 'h';
        else if (word == "..") answer += 'i';
        else if (word == ".---") answer += 'j';
        else if (word == "-.-") answer += 'k';
        else if (word == ".-..") answer += 'l';
        else if (word == "--") answer += 'm';
        else if (word == "-.") answer += 'n';
        else if (word == "---") answer += 'o';
        else if (word == ".--.") answer += 'p';
        else if (word == "--.-") answer += 'q';
        else if (word == ".-.") answer += 'r';
        else if (word == "...") answer += 's';
        else if (word == "-") answer += 't';
        else if (word == "..-") answer += 'u';
        else if (word == "...-") answer += 'v';
        else if (word == ".--") answer += 'w';
        else if (word == "-..-") answer += 'x';
        else if (word == "-.--") answer += 'y';
        else if (word == "--..") answer += 'z';
    }

    return answer;
}