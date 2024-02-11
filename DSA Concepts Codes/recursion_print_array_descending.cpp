#include "iostream"
using namespace std;

void rPrint(int A[], int n) {
    cout << A[n] << endl;
    
    if(n > 0) rPrint(A, n-1);
}

void printArray(int A[], int size) {
    if(size <= 0) exit(0);

    rPrint(A, size-1);
}

int main() {
    int A[] = {6, 3, 8, 1, 4};

    printArray(A, 5);
    return 0;
}