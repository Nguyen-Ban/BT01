#include <iostream>

using namespace std;

int main()
{
    int N;
    while(true){
        cin >> N;
        if(N == -1) break;
        if(N >= 0 && N % 5 == 0) cout << N/5;
        else cout << "-1";
    }
    return 0;
}
