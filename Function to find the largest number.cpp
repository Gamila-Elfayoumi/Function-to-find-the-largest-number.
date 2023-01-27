#include <iostream>
#include <iomanip>
using namespace std;
int maximal(int, int,int );
int main()
{
	int num1, num2, num3;
	cout << "Enter 3 number to find the maximal :\n";
	cin >> num1 >> num2 >> num3;
	cout << "The largest number is \t" << maximal(num1, num2, num3) << endl;
	system("pause");
}
int maximal(int num1, int num2 ,int num3)
{
	int max=num1;
	if (max < num2)
		max = num2;
	if (max < num3)
		max = num3;
	return max;
}
