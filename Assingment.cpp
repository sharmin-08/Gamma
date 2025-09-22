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
}
int main()
{
    
}
