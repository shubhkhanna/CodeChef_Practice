#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{

    int n;
    long int m;
    double a;
    char ch;
    float f;

    cin >> n;
    cin >> m;
    cin >> ch;
    cin >> f;
    cin >> a;
    cout << n << endl
         << m << endl
         << ch << endl
         << fixed << setprecision(3) << f << endl
         << fixed << setprecision(9) << a;
    return 0;
}
