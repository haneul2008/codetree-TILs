#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    int min;
    if(a < b && a < c){
        min = a;
    }
    else if(a > b && c > b){
        min = b;
    }
    else{
        min = c;
    }

    cout << (a == min) << ' ' << (a == b == c);
    return 0;
}