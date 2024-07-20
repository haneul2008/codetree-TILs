#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int classCnt = 0;
    int bokdoCnt = 0;
    int toiletCnt = 0;

    for(int i = 1; i <= n; i++){
        if(i % 12 == 0)
            toiletCnt++;
        else if(i % 3 == 0)
            bokdoCnt++;
        else if(i % 2 == 0)
            classCnt++;
    }

    cout << classCnt << ' ' << bokdoCnt << ' ' << toiletCnt;
    return 0;
}