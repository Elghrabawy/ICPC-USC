#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    bool first_row = (a >= 1 && a <= 3) && (b >= 1 && b <= 3);
    bool second_row = (a >= 4 && a <= 6) && (b >= 4 && b <= 6);
    bool third_row = (a >= 7 && a <= 9) && (b >= 7 && b <= 9);

    if(first_row || second_row || third_row){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

}