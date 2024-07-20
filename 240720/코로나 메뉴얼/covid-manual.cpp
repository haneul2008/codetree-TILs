#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char coldA, coldB, coldC;
    int cA, cB, cC;

    cin >> coldA >> cA >> coldB >> cB >> coldC >> cC;

    int dangerCount;

    if(coldA == 'Y' && cA >= 37)
        dangerCount++;
    if(coldB == 'Y' && cB >= 37)
        dangerCount++;
    if(coldC == 'Y' && cC >= 37)
        dangerCount++;

    cout << ((dangerCount >= 2)? 'E' : 'N');
    return 0;
}