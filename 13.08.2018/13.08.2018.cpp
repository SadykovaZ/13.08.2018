// 13.08.2018.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<ctime>


using namespace std;

int kub(int a)
{
	return a * a * a;
}

int plus1(int a, int b)
{
	return a + b;
}

int plus2(int a, int b, int c)
{
	return a + b + c;
}
int multiple(int a, int b)
{
	return a * b;
}
int max(int a, int b)
{
	int max;
	//max = x > y ? x : y;
	if (a > b)
		max = a;
	else
		max = b;
	return max;
}
int max1(int a, int b, int c)
{
	int max;

	if (a > b && a > c)
		max = a;
	else if (b > a && b > c)
		max = b;
	else
		max = c;
	return max;
}
int sum_arr(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += a[i];
	}

	return sum;
}
int sum_arr1(int a[], int size)
{
	int multiple = 1;
	for (int i = 0; i < size; i++)
	{
		multiple *= a[i];
	}

	return multiple;
}
void fill_array(int a[], int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 10 + 1;
	}
}
void print_array(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
bool fun(int a)
{
	if (a % 2 == 0)
		return true;
	else
		return false;

}
bool prime(int x)
{
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}
bool soversh(int a)
{
	int sum = 0;
	for (int i = 1; i < a; i++)
	{
		if (a%i == 0)
		{
			sum += i;
		}
	}
	if (sum == a)
	{
		return true;
	}
	else
	{
		return false;
	}

}
void poisk_soversh(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		if (soversh(i))
		{
			cout << i << endl;
		}
	}
}
bool check(char c)
{
	if ((c >= 'a'&& c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool lucky(int n)
{
	int a[6];
	int i = 0;
	int sum1 = 0, sum2 = 0;
	if (n < 100000 || n>999999)
		return false;
	else
		while (n)
		{
			a[i++] = n % 10;
			n /= 10;
		}

	if ((a[0] + a[1] + a[2]) == (a[3] + a[4] + a[5]))
		return true;
	else
		return false;

	/*int a1 = n / 100000;
	int a2 = n / 10000 % 10;
	int a3 = n / 1000 % 10;
	int a4 = n / 100 % 10;
	int a5 = n / 10 % 10;
	int a6 = n % 10;
	if ((a1 + a2 + a3) == (a4 + a5 + a6))
		return true;
	else
		return false;
*/
}
int zero(int a[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] == 0)
		{
			count++;
		}
	}
	return count;
}
int zeros(double a[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] == 0)
		{
			count++;
		}
	}
	return count;
}
int max3(int a[], int size)
{
	int max = INT_MIN;

	for (int i = 0; i < size; i++)
	{
		if (a[i]>max)
		{
			max = a[i];
		}
	}
	return max;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int a[] = { 1,2,3,4,9,5 };

	cout << max3(a, 6) << endl;
	
	/*int a[] = { 2,4,0,7,4,2 };
	double b[] = { 1.5,0,2.4,1.3,0,1 };

	cout << zero(a, 6) << endl; 
	cout << zeros(b, 6) << endl;*/

		/*int n;
		cin >> n;
		cout << lucky(n) << endl;
	*/

	/*char ch;
	cin >> ch;

	cout << check(ch) << endl;
*/

/*int a, b;
cin >> a >> b;

poisk_soversh(a, b);*/

//cout << soversh(a) << endl;
/*int a;
cin >> a;

cout << prime(a) << endl;
*/

/*int a;
cin >> a;

cout << fun(a) << endl;
*/
//int a[10];

////int a[] = { 3,4,2,7,9 };
//int b[3] = { 25,21,56 };

//fill_array(a, 10);
//print_array(a, 10);
//print_array(b, 3);

/*cout << sum_arr1(a, 5) << endl;
cout << sum_arr1(b, 3) << endl;

cout << sum_arr(a, 5) << endl;
cout << sum_arr(b, 3) << endl;*/




/*int a, b, c, d;

cin >> a >> b >> c >> d;

cout << plus1(a, b) << endl;
cout << plus1(a, c) << endl;
cout << plus2(a, b, c) << endl;
cout << multiple(a, b) << endl;
cout << max(a, b) << endl;
cout << max1(a, b, c) << endl;
*/

	system("pause");
	return 0;
}

