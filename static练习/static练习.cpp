// static练习.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Student {
private :
	string name;
	double score;
	static int count;
	static double sum_score;
public:
	Student(int score, string name) {
		this->score = score;
		this->name = name;
		count++;
		sum_score += score;
	}
	~Student() {
		this->count--;
		sum_score -= this->score;
	}
	int getCount() {
		return this->count;
	}

	double getSumScore() {
		return this->sum_score;
	}


};

int Student::count = 0;
double Student::sum_score = 0.0;
int main()
{
	Student s1(80,"ceshi");
	Student s2(90,"lisi");
	cout << s1.getCount() << endl;
	cout << s2.getSumScore() << endl;
	cin.get();
    return 0;
}

