#include <iostream>
#include <stdlib.h>

using namespace std;

void print(int* a, int n);

int main(int argc, char* argv[]) {
    // set up parameters
    if(argc != 2) {
        cout << "Usage: " << argv[0] << " number_of_people" << endl;
        cout << "Program ends." << endl;
        return -1;
    }
    int n = atoi(argv[1]);

    int number_left = n;  // numer of people left
    int flag = 0;         // flag for odd or even
    int count = 0;        // counter 
    int* a = new int[n];  // dynamically allocate an array of size n
    // initialize array
    for(int i = 0; i < n; i++)
        a[i] = 1;
    // Print array
    // print(a, n);
    
    while(number_left > 1) {
        if(flag == 0) {
            if(a[count] != -1)
                flag = 1;
        } else if(flag == 1 && a[count] != -1) {
            flag = 0;
            // cout << "Deleting " << a[count] << endl;
            a[count] = -1;
            // cout << "Array after deletion - ";
            // print(a,n);
            number_left--;
        }
        count++;
        if(count == n)
            count = 0;
    }

    // reset count 
    count = 0;
    // find the position
    while(a[count++] == -1);
    // print out result 
    cout << "It is " << count << "." << endl;
    // clean up
    delete[] a;

return 0;
}

void print(int* a, int n) {
    cout << "Array: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
