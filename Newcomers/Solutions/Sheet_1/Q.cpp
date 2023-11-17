#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	double res = b / (double)a;

	cout << setprecision(3) << fixed;

	cout << res << endl;
}