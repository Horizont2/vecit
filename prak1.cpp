#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int M, N;
    cout << "Enter the size of the first array (M): ";
    cin >> M;
    vector<int> A(M);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "Enter the size of the second array (N): ";
    cin >> N;
    vector<int> B(N);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    vector<int> C;
    for (int i = 0; i < M; i++) {
        if (find(B.begin(), B.end(), A[i]) != B.end()) {
            C.push_back(A[i]);
        }
    }

    cout << "The common elements are: ";
    for (int i = 0; i < C.size(); i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}