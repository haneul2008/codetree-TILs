#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int count = 0;
    int sum = 0;
    for(int i = 0; i < 10; i++){
        int input;
        cin >> input;

        if(input >= 0 && input <= 200){
            count++;
            sum += input;
        }
    }

    cout << fixed;
    cout.precision(1);

    cout << sum << ' ' << (double)sum / count;
    return 0;
}