#include "SqList.h"
#include <iostream>
#define MAXSIZE 100
using namespace std;


template<typename T>
SqList<T>::SqList(int n)
{
	data = new T[MAXSIZE];
	length = 0;
}

template<typename T>
SqList<T>::SqList(T list[], int n)
{
	data = new T[MAXSIZE];
	for (int i = 0; i < n; i++)
	{
		data[i] = list[i];
	}
	length = n;
}

template<typename T>
SqList<T>::~SqList()
{
	delete data;
	length = 0;
}

template<typename T>
bool SqList<T>::ListEmpty()
{
	return data != nullptr;
}

template<typename T>
int SqList<T>::ListLength()
{
	return length;
}

template<typename T>
void SqList<T>::DispList()
{
	for (int i = 0; i < length; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}

template<typename T>
bool SqList<T>::GetElem(int index, T& value)
{
	if (index < length)
	{
		value = data[index];
		return true;
	}
	else
	{
		return false;
	}

}

template<typename T>
int SqList<T>::LocateElem(T e)
{
	for (int i = 0; i < length; i++)
	{
		if (data[i] == e) {
			return i;
		}
	}
	return -1;
}

template<typename T>
bool SqList<T>::ListInsert(int index, T value)
{
	if (index > length)
		return false;
	//插入位置之后的元素往后移一格
	for (int i = length; i > index; i--)
	{
		data[i] = data[i - 1];
	}
	data[index] = value;
	length++;
	return true;
}

template<typename T>
bool SqList<T>::ListDelete(int index, T& value)
{
	if (index > length)
		return false;
	cout << "正在移除值，索引为" << index << endl;
	//删除位置之后的元素往前移一格
	value = data[index];
	for (int i = index; i < length; i++)
	{
		data[i] = data[i + 1];
	}
	length--;
	return true;
}

template<typename T>
void SqList<T>::DelNode(T value)
{
	cout << "正在移除所有" << value << endl;
	//int num记录指定值的个数，也代表着元素前移个数
	int num = 0;
	for (int i = 0; i < length; i++)
	{
		if (data[i] == value)
			num++;
		data[i] = data[i + num];
	}
	length -= num;
}

template<typename T>
void SqList<T>::Partition1()
{
	T pivot = data[0];
	int i = 0, j = length - 1;//前后遍历，找到位置不对的前后两个点然后互换
	while (i < j)
	{
		while (i < j && data[j] >= pivot)//找到小于基准的后方元素
			j--;
		while (data[i] <= pivot)//找到大于基准的前方元素
			i++;
		Swap(data[j], data[i]);
	}
	Swap(data[0], data[i]);
}

template<typename T>
void SqList<T>::Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}


template<typename T>
int SqList<T>::main()
{
	//ListInsert(0, 1);
	//ListInsert(1, 2);
	//ListInsert(2, 3);
	//ListInsert(3, 4);
	//ListInsert(4, 3);
	//DispList();

	//int removeValue;
	//ListDelete(2, removeValue);
	//DispList();

	//DelNode(3);
	//DispList();



	return 0;
}