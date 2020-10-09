#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Complete the program

    string a, b, o, temp;
    int n, m;
    cin >> a >> b;
    n = a.size();
    m = b.size();
    o = a + b;
    cout << n << " " << m << endl
         << o << endl;
    char ch = a[0];
    char ch1 = b[0];
    a[0] = ch1;
    b[0] = ch;
    cout << a << " " << b;
    return 0;
}
