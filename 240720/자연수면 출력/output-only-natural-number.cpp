#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    if(a <= 0){
        cout << 0;
        return 0;
    }

    for(int i = 0; i < b; i++){
        if(a > 0)
            cout << a;
    }
    return 0;
}