#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int sounds = b / a;

    if(sounds < c){
        cout << sounds;
    }
    else{
        cout << c;
    }
}