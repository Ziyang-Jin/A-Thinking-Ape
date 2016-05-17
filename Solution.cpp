#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int n;
    int count;
    int power;
    int answer;

    while(1) {
        n = 0;
        power = 1;
        cout << "Enter N: ";
        cin >> n;

        if(n == 0) // program ends when input 0 
            break;

        count = n;
        while(count > 1) {
            count = count / 2;
            power = power * 2;
        }

        answer = 2 * (n - power) + 1;
        cout << "The answer is: " << answer << endl;
        cout << endl; 
        cout << "Enter 0 or any letter to quit." << endl;
    }
    cout << "Quit!" << endl;
    return 0;
}
