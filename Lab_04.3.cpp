#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double a, b, c, xp, xk, dx;

   
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "F(x)" << " |" << endl;
    cout << "---------------------------" << endl;

    double x = xp;
    while (x <= xk) {
        double F; 

        
        if (x == 0 && b != 0) {
            F = (a * (x + c) * (x + c)) - b;
        }
        else if (x == 0 && b == 0) {
            F = (x - a) / -c;
        }
        else {
            F = a + (x / c);
        }

        
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << F
            << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;

    return 0;
}
