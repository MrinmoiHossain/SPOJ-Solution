#include <bits/stdc++.h>
using namespace std;

#define read() freopen("input.txt", "r", stdin)

int main(void)
{
    read();

    int n;
    cin >> n;
    vector<int> s(n);
    for(int i = 0; i < n; i++)
        cin >> s[i];

    int m;
    cin >> m;
    vector<int> q(m);
    for(int i = 0; i < n; i++)
        cin >> q[i];

    int mn = min(n, m);
    for(int i = 0; i < mn; i++){
        if(s[i] == q[i])
            cout << i + 1 << " ";
    }
    cout << endl;

    return 0;
}
