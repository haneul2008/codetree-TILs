#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    int min = 100;

    if(a < min)
        min = a;
    if(b < min)
        min = b;
    if(c < min)
        min = c;

    cout << min;
    return 0;
}