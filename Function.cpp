#include <iostream>
using namespace std;
int MyFunction(int a, int b)
{
	int t;
	t = a * b;
	cout << "the t is:" << t << endl;
	return t;
}
int main()
{
	int c1 = MyFunction(2, 3);
	int c2 = MyFunction(c1, 4);
	int c3 = MyFunction(c2, 5);
}