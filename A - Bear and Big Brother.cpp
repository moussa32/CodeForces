#include <iostream>
using namespace std;

int main(){
    int Limak, Bob, Years;

    Years = 0;

    cin >> Limak >> Bob;

    while(Limak <= Bob){
        Limak *=3;
        Bob *=2;
        Years += 1;
    }
    cout << Years;

    return 0;
}
