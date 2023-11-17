#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int value1 = a * 10 + b + c;
    int value2 = b * 10 + a + c;
    int value3 = c * 10 + a + b;

    cout << max({value1, value2, value3}) << endl;
}