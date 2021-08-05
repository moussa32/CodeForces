#include <iostream>
using namespace std;

int main() {
    int n, Petya, Vasya, Tonya, total(0);
    cin >> n;

    while(n--){
        cin >> Petya >> Vasya >> Tonya;

        if(Petya + Vasya + Tonya >= 2){
            total += 1;
        }
    }

    cout << total << endl;

    return 0;
}
