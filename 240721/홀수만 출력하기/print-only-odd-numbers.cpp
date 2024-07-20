#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int j;
        cin >> j;
        if(j % 2 != 0 && j % 3 == 0){
            cout << j << endl;
        }
    }
    return 0;
}