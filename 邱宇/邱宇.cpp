// 邱宇.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;
struct student
{
	string name;
	string num;
	int age;
	struct student *next;
};

int main()
{
	struct student *p, *q, *head;
	int s = 1;
	int temp = 0;
	head = NULL;
	q = NULL;
	cout << "是否开始输入学生信息（1：是  2：否 ）" << endl;
	temp++;
	while (cin >> s, s == 1)
	{
		p = new student;
		cout << "输入姓名：";
		cin >> p->name;
		cout << "输入学号：";
		cin >> p->num;
		cout << "输入年龄：";
		cin >> p->age;
		if (head == NULL)
		{
			head = p;
		}
		else
		{
			q->next = p;
		}
		q = p;
		p->next = NULL;
		cout << endl << "是否继续录入（1：是  2：否 ）" << endl;
	}
	p = head;
	while (p != NULL)
	{
		cout << "名字:" << p->name << "   学号：" << p->num << "  年龄：" << p->age << endl;
		p = p->next;
	}
	p = head;
	while (p != NULL)
	{
		q = p->next;
		delete p;
		p = q;
		while (q);
	}
	cout << "---------再见！----------" << endl;
	return 0;
}