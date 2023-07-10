#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int swaped;
    for (int i = 0; i < n - 1; i++) {
        int swaped = false;
        for (int j = 0; j < n - i - 1; j++) {
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

int binarySearch(int arr[], int left, int right, int x) {

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] == x) {
			return mid;
		}
		else if (arr[mid] > x) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}

	return -1;
}



int main()
{
    int n,num;
    int arr[100];
    int output;

    cout << "Enter the number of element of the array: " << endl;
    cin >> n;
    cout << endl;

    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Enter the elemnt you want to search: " << endl;
    cin >> num;

    output = binarySearch(arr, 0, n - 1, num);

    if (output == -1) {
        cout << "No match found: " << endl;
    }
    else {
        cout << "Match found at index: " << output << endl;
    }
}