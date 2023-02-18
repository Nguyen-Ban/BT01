#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(0));
    int num1, num2, maxx;
    for(int i = 1; i <= 20; i++){
        num1 = rand()% 100 + 0;
        num2 = rand()% 100 + 0;
        maxx = num1;
        //cout << num1 << " " << num2 << endl;
        if(abs(0 - num1) < abs(100 - num1)){
            maxx = num2;
        }
        if(maxx >= num1){
            cout << "Win" << endl;
        }
        else {
            cout << "Lose\n";
        }
    }
    return 0;
}
