// 友元类.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

class A{
private:
	int a;
public :
	A(int a) {
		this->a = a;
	}
	void printA(){
		cout <<"a=" << a << endl;
	}
	friend class B;
};
class B {
private :
	int b;
public:
	B(int b) {
		this->b = b;
	}
	void printB() {
		A a(10);
		cout << "printB 中的a" << a.a << endl;
		cout << "b=" << b << endl;
	}
};

int main()
{
	B b(30);
	b.printB();
	cin.get();
    return 0;
}

