#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int mA, eA, mB, eB;
    cin >> mA >> eA >> mB >> eB;

    if(mA != mB){
        cout << ((mA > mB)? 'A' : 'B');
    }
    else{
        cout << ((eA > eB)? 'A' : 'B');
    }
    return 0;
}