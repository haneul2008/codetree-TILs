#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;

        sum += input;
    }

    cout << fixed;
    cout.precision(1);

    cout << sum << ' ' << (double)sum / n;
    return 0;
}