#include <iostream>
using namespace std;

void sorted(int arr[], int n) {
    int i, j;
    int swaped;
    for (i = 0; i < n-1; i++) {
        swaped = false;

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaped = true;
            }
        }
        if (swaped == false) {
            break;
        }
    }
    
}

void maxMin(int arr[], int n) {
    cout << "Max value is: " << arr[n-1] << endl;
    cout << "Min value is: " << arr[0] << endl;
}

int main()
{
    int n;
    int arr[100];

    cout << "Enter the number of element of the array: " << endl;
    cin >> n;
    cout << endl;

    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sorted(arr, n);
    maxMin(arr, n);
}