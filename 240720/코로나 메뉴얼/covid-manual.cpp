#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char coldA, coldB, coldC;
    int cA, cB, cC;

    cin >> coldA >> cA;
    cin >> coldB >> cB;
    cin >> coldC >> cC;

    int dangerCount = 0;

    if(coldA == 'Y' && cA >= 37)
        dangerCount += 1;

    if(coldB == 'Y' && cB >= 37)
        dangerCount += 1;

    if(coldC == 'Y' && cC >= 37)
        dangerCount += 1;

    char r = (dangerCount >= 2)? 'E' : 'N';

    cout << r;
    return 0;
}