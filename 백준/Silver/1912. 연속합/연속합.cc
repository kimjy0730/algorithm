#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int>Number(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> Number[i];
    }
   
    int current = Number[0];
    int answer = Number[0];
    
    for (int i = 1; i < n; ++i) 
    {
        current = max(Number[i], current + Number[i]);
        answer = max(answer, current);
    }

    cout << answer << endl;
    return 0;
}