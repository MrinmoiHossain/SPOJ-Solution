#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

void seive(vector<int>& primes);

int main(void)
{
    //read();
    vector<int> primeList(32001, 1);
    seive(primeList);

    int t;
    cin >> t;

    for(int i = 0, m, n; i < t; i++){
        cin >> m >> n;
        vector<int> newPrimeList(n-m+1, 1);

        for(int j = 2, k; j <= 32000; j++){
            if(primeList[j]){
                if(m % j == 0)
                    k = m/j;
                else
                    k = m/j+1;

                k = max(j, k);
                long long int temp = k * j;
                while(temp <= n){
                    newPrimeList[temp-m] = 0;
                    k++;
                    temp = k * j;
                }
            }
        }

        if(m == 1)
            newPrimeList[0] = 0;
        for(int j = 0; j < n-m+1; j++)
            if(newPrimeList[j])
                cout << m+j << endl;
        cout << endl;
    }

    return 0;
}

void seive(vector<int>& primes)
{
    int sz = primes.size(), limit = sqrt(sz * 1.0) + 2;
    primes[0] = 0, primes[1] = 0;

    for(int i = 4; i <= sz; i += 2)
        primes[i] = 0;

    for(int i = 3; i <= sz; i += 2){
        if(primes[i]){
            if(i <= limit){
                for(int j = i * i; j <= sz; j += 2*i)
                    primes[j] = 0;
            }
        }
    }
}
