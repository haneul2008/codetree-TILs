#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int jender, age;
    cin >> jender >> age;

    if(jender == 0){
        cout << ((age >= 19)? "MAN" : "BOY");
    }
    else if(jender == 1){
        cout << ((age >= 19)? "WOMAN" : "GIRL");
    }
    return 0;
}