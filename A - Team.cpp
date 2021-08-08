#include <iostream>
using namespace std;

int main(){
    int n, ans = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        int Petya, Vasya, Tonya;
        cin >> Petya >> Vasya >> Tonya;

        ans += (Petya + Vasya + Tonya >= 2);
    }
    cout << ans << endl;
    return 0;
}
