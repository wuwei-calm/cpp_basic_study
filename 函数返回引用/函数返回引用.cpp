// 函数返回引用.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int getA() {
	int a = 10;
	return a;
}

int& getAr() {
	int a = 10;
	return a;
}

int* getAp() {
	int a = 10;
	return &a;
}
int main()
{
	int a = 0;
	getAr() = 100;
	a = *getAp();
	cout << a << endl;
	cin.get();
    return 0;
}

