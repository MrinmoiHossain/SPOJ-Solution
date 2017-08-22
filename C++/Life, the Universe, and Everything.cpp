#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    bool res = true;

    while(cin >> n){
        if(n == 42){
            res = false;
            continue;
        }
        if(res)
            cout << n << endl;
    }

    return 0;
}
