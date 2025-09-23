#  Implementation of the Trapezoidal Rule for Numerical Integration.

## Overview

This project provides a C++ implementation of the Trapezoidal Rule for approximating the definite integral of a function. The program calculates the integral of the Gaussian function, f(x) = e^(-x^2) from 0 to 1. This project serves as a clear and practical demonstration of numerical integration principles.

## Objectives

-   To apply the numerical method of the trapezoidal rule to a specific function.
-   To show how increasing the number of subintervals (`n`) improves the accuracy of the approximation.

## Method / Formula

The core of the program is the trapezoidal rule, which approximates the area under a curve by dividing it into a series of trapezoids.

The formula used is:

I ≈ (h / 2) * [ f(a) + f(b) + 2 * Σ f(a + i*h) ]

Where:
- a = lower limit (0)
- b = upper limit (1)
- h = (b - a) / n
- n = number of subintervals (user input)

##  Code Description

- Written in *C++*, modular and well-commented
- f(x) function calculates e^(-x^2)
- trapezoidal(a, b, n) applies the trapezoidal rule
- User can input n to control accuracy

  ##  How to Run

1. *Compile:*
   
   g++ trapezoidal.cpp -o trapezoidal
   

2. *Execute:*
   
   ./trapezoidal

##  Example

Here is a sample execution of the program:

**Input:**
Enter the number of subintervals (n): 1000

**Output:**
Trapezoidal Approximation = 0.74682

##  Results

The program outputs the numerical approximation of the integral for the given number of subintervals. By increasing the value of n, users can observe the approximation converging towards the true value of the integral, demonstrating the principle that a greater number of intervals leads to higher accuracy.
