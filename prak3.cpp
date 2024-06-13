#include <iostream>
#include <vector>

using namespace std;

int main() {
    int M, choice;
    cout << "Enter the size of the array (M): ";
    cin >> M;
    vector<int> A(M);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "Enter 1 to remove even numbers or 2 to remove odd numbers: ";
    cin >> choice;

    vector<int> B;
    if (choice == 1) {
        for (int i = 0; i < M; i++) {
            if (A[i] % 2 != 0) {
                B.push_back(A[i]);
            }
        }
    } else if (choice == 2) {
        for (int i = 0; i < M; i++) {
            if (A[i] % 2 == 0) {
                B.push_back(A[i]);
            }
        }
    }

    cout << "The array after removal is: ";
    for (int i = 0; i < B.size(); i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}