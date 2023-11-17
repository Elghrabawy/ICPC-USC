#include <iostream>
using namespace std;

int main() {
    int l, r, a;
    cin >> l >> r >> a;

    int ans = 0;
    
    // add all (a) to r
    if(r + a <= l){
        ans = r + a;
    }

    // add all (a) to l
    else if(l + a <= r){
        ans = l + a;
    }

    // divide all (a) to r, l
    else{
        if(l > r){
            a -= (l - r);
            r = l;

            ans = r + a / 2;
        }
        else{
            a -= (r - l);
            l = r;

            ans = l + a / 2;
        }
    }

    cout << 2 * ans;
}