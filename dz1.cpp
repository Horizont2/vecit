#include <iostream>
#include <vector>
#include <set>
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

    set<int> C;
    for (int i = 0; i < M; i++) {
        if (find(B.begin(), B.end(), A[i]) == B.end()) {
            C.insert(A[i]);
        }
    }

    cout << "Elements in A but not in B (without duplicates): ";
    for (set<int>::iterator it = C.begin(); it != C.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}