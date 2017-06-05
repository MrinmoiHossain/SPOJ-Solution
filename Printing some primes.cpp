#include <bits/stdc++.h>
#define MAX 100000000
#define LL long long int
#define Check(n) (status[n/64] & (1 << ((n % 64) / 2)))
#define Set(n)   (status[n/64] |= (1 << ((n % 64) / 2)))
using namespace std;

int status[MAX/64 + 2];

void seive()
{
    int limit = sqrt(MAX);

    for(int i = 3; i <= limit; i += 2){
        if(!Check(i)){
            for(int j = i * i; j <= MAX; j += i + i)
                Set(j);
        }
    }

    cout << 2 << endl;
    LL con = 1, j = 1;
    for(int i = 3; i <= MAX; i += 2){
        if(!Check(i))
            con++;
        if(con == 1 + 100 * j){
            cout << i << endl;
            j++;
        }
    }
}

int main(void)
{
    seive();

    return 0;
}
