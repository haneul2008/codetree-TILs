#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    int max = -100;

    if(max < a)
        max = a;
    if(max < b)
        max = b;
    if(max < c)
        max = c;

    cout << max;
    return 0;
}