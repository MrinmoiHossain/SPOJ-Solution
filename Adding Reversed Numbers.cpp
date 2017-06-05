#include <bits/stdc++.h>
using namespace std;

string add(string a, string b);

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 0; i < T; i++){
        string a, b;
        cin >> a >> b;

        cout << add(a, b) << endl;
    }

    return 0;
}

string add(string a, string b)
{
    string sum;
    if(a.length() < b.length())
        swap(a, b);

    for(int i = b.length(); i < a.length(); i++)
        b += "0";

    int c = 0;
    for(int i = 0; i < a.length(); i++){
        int add = (a[i] - '0') + (b[i] - '0') + c;
        c = add / 10;
        sum += (add % 10) + '0';
    }
    if(c > 0)
        sum += (c % 10) + '0';

    reverse(sum.begin(), sum.end());

    int l = sum.length() - 1;
    while(sum[l] == '0'){
        sum.erase(sum.end() - 1);
        l--;
    }

    reverse(sum.begin(), sum.end());

    return sum;
}
