#include <iostream>
using namespace std;

void Shift(int S[], int l, int k , int n) {
    int* S2 = new int[n];
    if (l == 1) {
        for (int i = 0; i < n; i++) {
            S2[(i + k) % (n)] = S[i];
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            S2[(n + i - k) % (n)] = S[i];
        }
    }

    for (int i = 0; i < n; i++) {
        S[i] = S2[i];
    }

    delete [] S2;
}
void Add(int S[], int n) {
    for (int i = 0; i < n; i++)
        cin >> S[i];
}

void Print(int S[], int size) {
    for (int i = 0; i < size; i++) {
        cout << S[i];
    }
    cout << endl;
}

int main()
{
    cout << "Enter arrays size" << endl;
    int n;
    cin >> n;
    int* S = new int[n];
    cout << "Fill array" << endl;
    Add(S,n);
    Print(S, n);
    int l, k;
    cout << "How much shift of position" << endl;
    cin >> k;
    cout << "To shift to the right enter(1), to the left (-1)" << endl;
    cin >> l;
    cout << "Shifted" << endl;
    Shift(S, l, k, n);
    Print(S, n);
    delete [] S;
    return 0;
}