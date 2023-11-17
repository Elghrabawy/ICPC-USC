#include <iostream>
using namespace std;

int main() {

    int x, y;
    char c;
    
    cin >> x >> c >> y;
    
    if(y >= 0 && y <= 2){
        cout << x << '-';
    }
    else if(y >= 3 && y <= 6){
        cout << x;
    }
    else if(y >= 7 && y <= 9){
        cout << x << '+';
    }
}
