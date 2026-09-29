// Function templates: generic max, swap and bubble sort
#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

template <class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swapValues(arr[j], arr[j + 1]);
}

template <class T>
void printArray(T arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    cout << "Max of 10, 25       = " << maximum(10, 25) << endl;
    cout << "Max of 3.5, 2.1     = " << maximum(3.5, 2.1) << endl;
    cout << "Max of 'a', 'z'     = " << maximum('a', 'z') << endl;

    int x = 1, y = 2;
    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    int a[] = {5, 2, 9, 1, 7};
    double b[] = {3.3, 1.1, 2.2};
    bubbleSort(a, 5);
    bubbleSort(b, 3);
    cout << "Sorted int array   : "; printArray(a, 5);
    cout << "Sorted double array: "; printArray(b, 3);
    return 0;
}
