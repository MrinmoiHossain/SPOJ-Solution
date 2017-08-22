#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main(void)
{
    LL a, b;
    cin >> a >> b;
    (a % 2 == 0) ? a /= 2 : (++a /= 2);
    (b % 2 == 0) ? b /= 2 : (++b /= 2);

    cout << (LL)(b * b - a * a) << endl;

    return 0;
}
