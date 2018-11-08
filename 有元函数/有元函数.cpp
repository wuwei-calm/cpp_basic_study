// 有元函数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	int x;
	int y;
public:
	Person() {}
	Person(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int getX() {
		return this->x;
	}
	int getY() {
		return this->y;
	}
	friend int getPerson2(Person&);
};

int getPerson(Person &p) {
	Person p1(10, 20);
	Person p2(1,2);
	return (p1.getX() - p2.getX())* (p2.getY() - p2.getY());
}
int getPerson2(Person &p) {
	Person p1(10, 20);
	Person p2(1, 2);
	cout << p1.x << endl;
	cout << p2.x << endl;
	cout << p1.x - p2.x << endl;
	cout << p2.y - p2.y << endl;
	cout << (p1.x - p2.x) * (p1.y - p2.y);
	return (p1.x - p2.x) * (p2.y - p2.y);
}
int main()
{
	Person p;
	cout << getPerson2(p);
	cin.get();
    return 0;
}

