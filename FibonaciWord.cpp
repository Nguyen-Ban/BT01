#include <bits/stdc++.h>

using namespace std;

int main()
{
    string f[11];
    f[0] = "a";
    f[1] = "b";
    cout << "f(0) = a\n" << "f(1) = b\n";
    for(int i = 2; i <= 10; i++){
        f[i] = f[i-1] + f[i-2];
        cout << "f(" << i << ") = " << f[i] << endl;
    }
    return 0;
}
