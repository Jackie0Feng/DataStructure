#pragma once
template <typename T>
class SqList
{
public:
	T* data;
	int length;

	/// <summary>
	/// 根据大小初始化顺序表
	/// </summary>
	SqList(int n);

	SqList(T list[], int n);

	~SqList();

	int main();

	/// <summary>
	/// 顺序表是否为空
	/// </summary>
	/// <param name="e"></param>
	/// <returns>顺序表是否为空</returns>
	bool ListEmpty();
	/// <summary>
	/// 返回顺序表长度
	/// </summary>
	int ListLength();

	/// <summary>
	/// 打印列表
	/// </summary>
	void DispList();
	/// <summary>
	/// 根据索引获取列表值
	/// </summary>
	bool GetElem(int index, T& value);

	/// <summary>
	/// 返回目标值的第一个索引
	/// </summary>
	/// <returns>返回第一个匹配的索引值，-1表示没找到</returns>
	int LocateElem(T e);
	/// <summary>
	/// 指定位置插入列表元素
	/// </summary>
	bool ListInsert(int index, T value);
	/// <summary>
	/// 指定位置删除列表元素
	/// </summary>
	bool ListDelete(int index, T& value);

	/// <summary>
	/// 输出列表中指定值
	//暴力法：遍历列表，遇到一个删一个，会造成多次的数组变动
	//遍历一次，造成最小的数组变动：元素前移位数和指定值个数相关
	/// </summary>
	/// <param name="value"></param>
	void DelNode(T value);

	/// <summary>
	/// 划分算法，以列表第一个元素为基准，将所有小于它的移到前面，大于它的移到后面
	/// 临时变量保存基准，前后遍历列表，不满足最终条件则交换
	/// </summary>
	/// <returns></returns>
	void Partition1();

	/// <summary>
	/// 交换数值
	/// </summary>
	void Swap(T& a, T& b);

	//**********************查找算法************************

	/// <summary>
	/// 折半查找
	/// 在区间里不断查找对比中间的数，若相等则跳出，不相等则缩小区间继续查找
	/// </summary>
	int BinSearch(T value);

};
