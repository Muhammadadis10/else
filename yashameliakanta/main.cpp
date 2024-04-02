#include <iostream>

using namespace std;

int main()
{
 int a, b, c;

    cout << "Son kiriting: \n";
    cin >> a >> b >> c;
    if (a < b && a < c) {
        cout << a << "ortancha son" << endl;
    }
    else if (b < a && b < c) {
        cout << b << "ortancha son" << endl;
    }
    else {
        cout << c << "ortancha son" << endl;
    }
    return 0;
}
