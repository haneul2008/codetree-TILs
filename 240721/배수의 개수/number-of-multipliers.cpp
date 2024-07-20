#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < 10; i++){
        int input;
        cin >> input;

        if(input % 3 == 0)
            count1++;
        if(input % 5 == 0)
            count2++;
    }

    cout << count1 << ' ' << count2;
    return 0;
}