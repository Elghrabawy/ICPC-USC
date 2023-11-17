#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3, s4, s5, s6, s7, s8;
    cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;
    
    bool multiples_of_25 = (s1 % 25 == 0 && s2 % 25 == 0 && s3 % 25 == 0 && s4 % 25 == 0 && s5 % 25 == 0 && s6 % 25 == 0 && s7 % 25 == 0 && s8 % 25 == 0);
    bool is_increasing = (s1 <= s2 && s2 <= s3 && s3 <= s4 && s4 <= s5 && s5 <= s6 && s6 <= s7 && s7 <= s8);
    bool between_100_675 = (s1 >= 100 && s8 <= 675);
    
    if  (is_increasing && multiples_of_25 && between_100_675){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}