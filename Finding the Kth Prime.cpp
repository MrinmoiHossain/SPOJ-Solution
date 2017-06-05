#include <bits/stdc++.h>
#define pb push_back
#define LL long long int
#define Check(n) (status[n/64] & (1 << ((n % 64) / 2)))
#define Set(n)   (status[n/64] |= (1 << ((n % 64) / 2)))
#define MAX 100000000
using namespace std;

int status[MAX/64 + 2];
vector<LL> prime;

void seive()
{
    int limit = sqrt(MAX);

    for(int i = 3; i <= limit; i += 2){
        if(!Check(i)){
            for(int j = i * i; j <= MAX; j += i + i)
                Set(j);
        }
    }

    prime.pb(2);
    for(size_t i = 3; i <= MAX; i += 2)
        if(!Check(i))
            prime.pb(i);
}
int main(void)
{
    seive();

    int T;
    cin >> T;


    for(int i = 1, n; i <= T; i++){
        cin >> n;

        cout << prime[n - 1] << endl;
    }


    return 0;
}
