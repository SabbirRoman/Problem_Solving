// C++ program for implementation of Newton Raphson Method for
// solving equations
#include<bits/stdc++.h>
#define EPSILON 0.001
using namespace std;

// An example function whose solution is determined using
// Bisection Method. The function is x^3 - x^2 + 2
double func(double x)
{
	return x*x*x - 2*x -5;
}

// Derivative of the above function which is 3*x^x - 2*x
double derivFunc(double x)
{
	return 3*x*x - 2;
}

// Function to find the root
void newtonRaphson(double x)
{
	double h = func(x) / derivFunc(x);
	while (abs(h) >= EPSILON)
	{
		h = func(x)/derivFunc(x);

		// x(i+1) = x(i) - f(x) / f'(x)
		x = x - h;
	}

	cout << "The value of the root is : " << x;
}

// Driver program to test above
int main()
{
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
	double x0 ; // Initial values assumed
	cin>>x0;
	float fff=1.00/10.00;
	cout<<fff<<endl;
	newtonRaphson(x0);
	return 0;
}
