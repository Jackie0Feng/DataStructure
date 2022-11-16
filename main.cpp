#include <iostream>
#include"SqList.h"
#include"Introduction.h"

using namespace std;

long fu(long x, string& s) {
	s = __func__;
	return 100;
}

int main()
{
	Introduction introduction;
	introduction.main();
	//introduction.ShowFuncTimeCost(1, fu);

	return 0;
}