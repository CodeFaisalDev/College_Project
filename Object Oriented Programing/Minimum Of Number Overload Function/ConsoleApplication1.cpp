#include <iostream>
using namespace std;

void min(int x, int y) {
    (x > y) ?
        cout << y << " is minimum" << endl :
        cout << x << " is minimum" << endl ;
}

void min(int x, int y, int z) {
    (x < y) ?
        ((x < z) ? cout << x << " is minimum" << endl : cout << z << " is minimum" << endl) :
        ((y < z) ? cout << y << " is minimum" << endl : cout << z << " is minimum" << endl);
}

void min(float x, float y){
    (x > y) ?
        cout << y << " is minimum" << endl :
        cout << x << " is minimum" << endl ;
}

int main()
{
    int x, y, z;
    cout << "Enter three values: " << endl;
    cin >> x >> y >> z;

    min(x, y);
    min(x, y, z);
    min(x,y);
}