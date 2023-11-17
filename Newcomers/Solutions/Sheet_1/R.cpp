#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long ans = 1;

    if(n >= 2) ans *= 2;
    if(n >= 3) ans *= 3;
    if(n >= 4) ans *= 4;
    if(n >= 5) ans *= 5;
    if(n >= 6) ans *= 6;
    if(n >= 7) ans *= 7;
    if(n >= 8) ans *= 8;
    if(n >= 9) ans *= 9;
    if(n >= 10) ans *= 10;

    cout << ans << endl;
}
