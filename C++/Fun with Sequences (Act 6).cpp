#include <bits/stdc++.h>
using namespace std;

#define read() freopen("input.txt", "r", stdin)

int main(void)
{
    read();

    int n;
    cin >> n;
    vector<int> s(n);
    int sumS = 0;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        sumS += s[i];
    }

    int m;
    cin >> m;
    vector<int> q(m);
    int sumQ = 0;
    for(int i = 0; i < m; i++){
        cin >> q[i];
        sumQ += q[i];
    }

    if(sumQ < sumS){
        for(int i = 0; i < n; i++){
            cout << s[i];
            if(i < n - 1)
                cout << " ";
        }
    }
    else{
        for(int i = 0; i < m; i++){
            cout << q[i];
            if(i < m - 1)
                cout << " ";
        }
    }
    cout << endl;

    return 0;
}
