#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int x = pow(a, b);
    int y = pow(b, a);
    
    cout << x + y;
}
