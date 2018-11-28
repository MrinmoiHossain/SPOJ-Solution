#include <bits/stdc++.h>
using namespace std;

/*File Section*/
#define read()  freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)

int main(void)
{
    //read();

    int n;
    cin >> n;
    int sumS = 0;
    vector<int> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
        sumS += s[i];
    }

    int m;
    cin >> m;
    int sumQ = 0;
    vector<int> q(m);
    for(int i = 0; i < m; i++){
        cin >> q[i];
        sumQ += q[i];
    }
    //cout << sumS << " " << sumQ << endl;
    double divM = sumQ / m;
    double divN = sumS / n;
    if(divM < divN){
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
