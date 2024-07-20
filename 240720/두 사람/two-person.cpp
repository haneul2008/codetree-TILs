#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int ageA, ageB;
    char jA, jB;
    cin >> ageA >> jA >> ageB >> jB;

    if((ageA >= 19 && jA == 'M') || (ageB >= 19 && jB == 'M')){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}