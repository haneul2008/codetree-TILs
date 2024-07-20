#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int max = a > b? a : b;
    int min = a < b? a : b;

    int sum = 0;
    for(int i = min; i <= max; i++){
        if(i % 5 == 0)
            sum += i;
    }

    cout << sum;
    return 0;
}