#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int i = 1;

    while(i <= n){
        if(i % 3 == 0)
            cout << i << ' ';
        
        i++;
    }
    return 0;
}