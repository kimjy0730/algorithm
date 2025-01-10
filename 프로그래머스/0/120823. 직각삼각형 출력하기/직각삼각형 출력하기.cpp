#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
  
    for(int i = 1 ; i <= n ; i++ )
    {
        for (int e = 1 ; e <= i ; e++ )
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}