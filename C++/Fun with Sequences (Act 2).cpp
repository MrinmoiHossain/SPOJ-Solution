#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++)
        cin >> b[i];

    vector<int> c;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            if(a[i] == b[j])
                c.push_back(a[i]);
    }

    for(int i = 0; i < c.size(); i++)
        cout << c[i] << " ";
    cout << endl;

    return 0;
}
