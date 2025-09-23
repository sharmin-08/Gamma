#include <bits/stdc++.h>
using namespace std;
// Function to integrate: f(x) = e^(-x^2)
double f(double x)
{
    return exp(-x * x);
}
/**
 * Trapezoidal Rule implementation
 * a lower limit
 * b upper limit
 * n number of subintervals
 * return approximate integral value
 */
double trapezoidal(double a, double b, int n)
{
    double h = (b - a) / n; // step size
    double sum = 0.0;
   // first and last terms
    sum += f(a) + f(b);
    // intermediate terms
    for (int i = 1; i < n; i++)
    {
        double x = a + i * h;
        sum += 2 * f(x);
    }
   return (h / 2) * sum;
}
int main()
{
 double a = 0.0, b = 1.0; // integration limits
    int n;                   // number of intervals
    cin >> n;
      if (n <= 0)
    {
        cout << "Number of subintervals must be positive." << endl;
        return 0;
    } 
    double approx = trapezoidal(a, b, n);
    // Set the output to a fixed-point notation with 5 decimal places.
        cout << fixed << setprecision(5);
    // Print the calculated trapezoidal approximation.
    cout << "Trapezoidal Approximation = " << approx << endl;
}
