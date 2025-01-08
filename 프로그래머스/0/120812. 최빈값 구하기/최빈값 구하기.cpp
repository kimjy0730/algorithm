#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {  
    int num=0;
    int answer = 0;
    int max=0;
    sort(array.begin(),array.end());
    for(int i = 0 ; i < array.size();i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    
    vector<int>brray(max+1,0);  
    
    for(int i =0; i<array.size();i++)
    {
     brray[array[i]]++;   
    }
    
    for(int i =0; i<brray.size();i++)
    {
        if(brray[i]>num)
        {
            num = brray[i];
            answer = i; 
        } 
        else if(brray[i]==num)
        {
            answer = -1;
        }
    }
  
    
    
    return answer;
}