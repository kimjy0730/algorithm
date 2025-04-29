#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    long long answer = 0;
    vector<long long> f(N + 1, 0);
    
    for (int i = 1; i <= N; i++)
    {
        for (int y = i; y <= N; y += i)
        {
            f[y] += i;
        }
    }
    
    for (int i = 1; i <= N; ++i) 
    {
        answer += f[i];
    }

    cout << answer << endl;
    
    return 0;
}