#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;

    double EPS = 1e-6;

    int x = n;
    int y = 10 * (n - x + EPS);

    if(y <= 2){
        cout << x << '-';
    }
    else if(y <= 6){
        cout << x;
    }
    else{
        cout << x << '+';
    }
}
