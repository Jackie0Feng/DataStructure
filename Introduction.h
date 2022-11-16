#pragma once
#include<string>
using namespace std;
class Introduction
{
public:
	/// <summary>
	/// main函数，测试成员函数
	/// </summary>
	/// <returns></returns>
	int main();

	/// <summary>
	/// 普通求和法
	/// </summary>
	/// <param name="n"></param>
	/// <returns></returns>
	long SumNormal(long n);

	/// <summary>
	/// 高斯公式求和法
	/// </summary>
	/// <param name="n"></param>
	/// <returns></returns>
	long SumGauss(long n);

	/// <summary>
	/// 展示增长趋势
	/// </summary>
	void DisplayN(int n);

	/// <summary>
	/// 计算并显示算法执行时间
	/// </summary>
	/// <param name="func"></param>
	void ShowFuncTimeCost(long n, long func(long, string&));

	/// <summary>
	/// 返回1~N素数个数
	/// 素数：只能被1和它自身整除的数
	/// 暴力法：2~n-1都无法整除的数为素数
	/// </summary>
	///<param name="n"></param>
	int GetPrimeNumViolence(int n);

	/// <summary>
	/// 返回1~N素数个数
	/// 素数：只能被1和它自身整除的数
	/// 平方根法：2~suqt(n-1)都无法整除的数为素数
	/// </summary>
	///<param name="n"></param>
	int GetPrimeNumSqrt(int n);

	/// <summary>
	/// 返回1~n阶乘的和
	/// </summary>
	long GetFactorialSum1(long n);

	/// <summary>
	/// 返回1~n阶乘的和
	/// </summary>
	long GetFactorialSum2(long n);


};


