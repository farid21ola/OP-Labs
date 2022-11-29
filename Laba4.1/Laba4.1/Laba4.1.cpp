#include <iostream>
using namespace std;

void Shift(int S[], int l, int k) {
    int* S2 = new int[sizeof(&S) + 1];
    if (l == 1) {
        for (int i = 0; i < sizeof(&S) + 1; i++) {
            S2[(i + k) % (sizeof(&S) + 1)] = S[i];
        }
    }
    else {
        for (int i = 0; i < sizeof(&S) + 1; i++) {
            S2[(sizeof(&S) + 1 + i - k) % (sizeof(&S) + 1)] = S[i];
        }
    }

    for (int i = 0; i < sizeof(&S) + 1; i++) {
        S[i] = S2[i];
    }

    delete[] S2;
}
void Print(int S[], int size) {
    for (int i = 0; i < size; i++) {
        cout << S[i];
    }
    cout << endl;
}

int main()
{
    int* S = new int[9] {0, 1, 2, 3, 4, 5, 6, 7, 8};
    Print(S, sizeof(&S) + 1);
    int l, k;
    cout << "How much shift of position" << endl;
    cin >> k;
    cout << "To shift to the right enter(1), to the left (-1)" << endl;
    cin >> l;
    cout << "Shifted" << endl;
    Shift(S, l, k);
    Print(S, sizeof(&S) + 1);
    return 0;
}