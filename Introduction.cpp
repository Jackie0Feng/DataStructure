#include "Introduction.h"
#include <iostream>

#define NAME(variable) (#variable)
using namespace std;

long Introduction::SumNormal(long n)
{
	clock_t t = clock();

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += i;
	}
	cout << "SumNormal:1+2+...+" << n << " = " << sum << endl;

	t = clock() - t;
	cout << __func__ << "花费时间为" << t << "毫秒" << endl;
	return sum;
}

long Introduction::SumGauss(long n)
{
	clock_t t = clock();

	int sum = 0;
	sum = n * (n - 1) / 2;
	cout << "SumNormal:1+2+...+" << n << " = " << sum << endl;

	t = clock() - t;
	cout << __func__ << "花费时间为" << t << "毫秒" << endl;
	return sum;
}

void Introduction::DisplayN(int n)
{
	//表头
	cout << "log2(n)\tsqrt(n)\tn\tnlog2(n)\tn^2\tn^3\t2^n\tn!\n";
	//分隔符
	cout << "————————————————————————————————————\n";
	//表项
	for (int i = 1; i <= n; i++)
	{
		cout << log2((double)i) << "\t";
		cout << sqrt((double)i) << "\t";
		cout << (i) << "\t";
		cout << i * log2(i) << "\t\t";
		cout << i * i << "\t";
		cout << i * i * i << "\t";
		cout << pow(2, i) << "\t";
		long fac = 1;
		for (int j = 1; j <= i; j++)
		{
			fac *= j;
		}
		cout << fac << "\n";

	}

}

void Introduction::ShowFuncTimeCost(long n, long func(long, string&))
{
	clock_t t = clock();

	string s;
	func(n, s);

	t = clock() - t;
	cout << s << "花费时间为" << t << "毫秒" << endl;
}

int Introduction::GetPrimeNumViolence(int n)
{
	clock_t t = clock();

	int num = 0;
	for (int i = 2; i <= n; i++)
	{
		bool isPrime = true;
		for (int j = 2; j < i; j++)//2~n - 1都无法整除的数为素数
		{
			if (i % j == 0)//若有整除的，则不是质数
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
			num++;
	}
	cout << "1~" << n << "质数个数为：" << num << endl;

	t = clock() - t;
	cout << __func__ << "花费时间为" << t << "毫秒" << endl;
	return num;
}

int Introduction::GetPrimeNumSqrt(int n)
{
	clock_t t = clock();

	int num = 0;
	for (int i = 2; i <= n; i++)
	{
		bool isPrime = true;
		for (int j = 2; j <= (int)sqrt(i); j++)//2~sqrt(n)都无法整除的数为素数
		{
			if (i % j == 0)//若有整除的，则不是质数
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
			num++;
	}
	cout << "1~" << n << "质数个数为：" << num << endl;

	t = clock() - t;
	cout << __func__ << "花费时间为" << t << "毫秒" << endl;
	return num;
}

long Introduction::GetFactorialSum1(long n)
{
	clock_t t = clock();

	long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		long fac = 1;
		for (int j = 1; j <= i; j++)
		{
			fac *= j;
		}
		//cout << i << "! =" << fac << endl;
		sum += fac;
	}
	cout << "1!+2!+...+" << n << "! =" << sum << endl;

	t = clock() - t;
	cout << __func__ << "花费时间为" << t << "毫秒" << endl;
	return sum;
}

long Introduction::GetFactorialSum2(long n)
{
	clock_t t = clock();

	long sum = 0;
	long fac = 1;
	for (int i = 1; i <= n; i++)
	{
		fac *= i;
		//cout << i << "! =" << fac << endl;
		sum += fac;
	}
	cout << "1!+2!+...+" << n << "! =" << sum << endl;

	t = clock() - t;
	cout << __func__ << "花费时间为" << t << "毫秒" << endl;
	return sum;
}

int Introduction::main()
{
	SumNormal(99999999);
	SumGauss(99999999);
	DisplayN(10);

	GetPrimeNumViolence(23456);
	GetPrimeNumSqrt(23456);

	GetFactorialSum1(5);
	GetFactorialSum2(5);

	return 0;
}

