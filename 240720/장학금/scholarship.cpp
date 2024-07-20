#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int s1, s2;
    cin >> s1 >> s2;

    if(s1 < 90){
        cout << 0;
    }
    else if(s1 >= 90 && s2 >= 95){
        cout << 100000;
    }
    else if(s1 >= 90 && s2 >= 90){
        cout << 50000;
    }
    return 0;
}