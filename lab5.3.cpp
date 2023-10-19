#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double f(const double x);

int main() 
{
    double tp, tk, z;
    int n;

    cout << "tp = "; cin >> tp; 
    cout << "tk = "; cin >> tk; 
    cout<<"n ="; cin>>n;

    cout << fixed;
        cout << "-------------------------------------------------" << endl;
        cout << "|" << setw(5)  << "f(x)"      << "     |"
            << setw(10) << "t" << "       |"
            << endl;

        cout << "-------------------------------------------------" << endl;

    double dt = (tk-tp)/n;

    double t = tp;

    while (t <= tk)
    {
        z = f(t*t)+2*f(2*t+1); 
        cout << "|" << setw(7) << setprecision(2) <<  z   << "     |"
                    << setw(10) <<setprecision(5) << t << "     |"
                    << endl;
        cout<< t <<" "<<z<<endl;
        t += dt;
    }
        cout << "----------------------------------------------------" << endl;
    return 0; 
}
double f(const double x)
{
    if (abs(x) >= 1)
        return ((sin(x)+1)/(sin(x)+cos(x)));
    else
    {
        double S=0;
        int i=0;
        double a= x;
        S = a;
        do
        {
            i++;
            double R = (x*x)/(4*i*i+2*i) ;
            a *= R;
            S += a;
        } while(i<8);
        return S; 
    }
}
