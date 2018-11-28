#include <bits/stdc++.h>
using namespace std;

#define read() freopen("input.txt", "r", stdin)

bool check(vector<int> v)
{
    int i, n = v.size();
    bool b = true;
    for(i = 1; i < n; i++){
        if(v[i] >= v[i-1])
            break;
    }

    i++;
    while(i < n){
        if(v[i] <= v[i - 1]){
            b = false;
            break;
        }
        i++;
    }
    return (b? 1 : 0);
}

int main(void)
{
    read();

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0, temp; i < n; i++)
        cin >> v[i];

    if(check(v))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
