#include <iostream>
#include"SqList.cpp"
#include"Introduction.h"


using namespace std;

/// <summary>
/// 用来试验表达函数花费时间的函数
/// </summary>
/// <param name="x"></param>
/// <param name="s"></param>
/// <returns></returns>
long fu(long x, string& s) {
	s = __func__;
	return 100;
}

void SqListMain() {
	int list[10] = { 2,3,4,2,8,4,1,2,6,4 };
	SqList<int>* sqList = new SqList<int>(list, 10);
	sqList->DispList();

	sqList->Partition1();
	sqList->DispList();
}

int main()
{
	//Introduction introduction;
	//introduction.main();
	//introduction.ShowFuncTimeCost(1, fu);

	SqListMain();


	return 0;
}