#include<iostream>
using namespace std;

int main() {
    int n = 7;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= n / 2; j++) {

            if ((i == 0 && j != 0 && j != n / 2) || 

                (i == n / 2) || 

                (j == 0 && i != 0) ||

                (j == n / 2 && i != 0)) {

                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
