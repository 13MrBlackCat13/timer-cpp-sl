#include <iostream>
using namespace std;

int main() {
    int timer;
    cin >> timer;
    timer++;
    while(timer--) {
        if (timer != 0){
            if(timer % 5 != 0){
                cout << timer << endl;
            } else {
                cout << timer << endl;
                cout << "Beep" << endl;
        }
            }else {
            return 0;
        }
    }
    return 0;
}
