#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int max = a > b? a : b;
    int min = a < b? a : b;
    for(int i = max; i >= min; i--){
        cout << i << ' ';
    }
    return 0;
}