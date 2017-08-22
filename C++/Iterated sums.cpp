#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    a--;

    cout << ((b * (b + 1) * (2 * b + 1)) / 6) - ((a * (a + 1) * (2 * a + 1)) / 6) << endl;

    return 0;
}
