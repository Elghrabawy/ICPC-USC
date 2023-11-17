#include <iostream>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    int cnt_odds = (n + 1) / 2;
    
    if(k <= cnt_odds){
        cout << (2 * k) - 1 << endl;
    }
    else{
        k -= cnt_odds;
        cout << 2 * k << endl;
    }
}
