#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int count = 0;
    int sum = 0;
    for(int i = a; i <= b; i++){
        if(i % 5 == 0 || i % 7 == 0){
            count++;
            sum += i;
        }
    }
    
    cout << fixed;
    cout.precision(1);

    cout << sum << ' ' << (double)sum / count;
    return 0;
}