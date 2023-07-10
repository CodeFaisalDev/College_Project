#include <iostream>
#include <cmath>
using namespace std;

int length(long long n) {
    return floor(log10(n) + 1);
}

void armstrong(int n) {
    int r, sum = 0;
    int temp = n;
    int x = length(temp);


    while (n != 0) {
        r = n % 10;
        sum = sum + pow(r, x);
        n /= 10;
    }

    if (temp == sum) { 
        cout << "Armstrong Number" << endl; 
    }
    else {
        cout << "Not Armstrong Number" << endl;
    }

}

int main()
{
    int num;

    cout << "Enter a number: " << endl;
    cin >> num;

    armstrong(num);
}