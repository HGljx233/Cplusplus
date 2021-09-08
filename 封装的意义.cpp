#include<iostream>
using namespace std;
class Person {
public:
	void setName(string name) {
		Name = name;
	}
	string getName() {
		return Name;
	}
	int getAge() {
		return Age;
	}
	void setAge(int age) {
		if (age < 0 || age>150) {
			cout << "您个老妖怪!" << endl;
			return;
		}
		Age = age;
	}
	void setLover(string lover) {
		Lover = lover;
	}
private:
	string Name;//可读可写
	int Age;//只读
	string Lover;//只写

};
int main() {
	Person p1;
	p1.setName("张三");
	cout << "姓名为: " << p1.getName()<< endl;
	p1.setAge(1002);
	cout << "年龄为: " << p1.getAge() << endl;
	p1.setLover("藏进空");
	system("pause");
	return 0;
}
//class默认权限私有
//struct 默认权限公有
//class c1 {
//	int m_A;
//};
//struct c2 {
//	int m_A;
//};
//int main() {
//	//c1 c;
//	//c.m_A = 100;
//	c2 c;
//	c.m_A = 100;
//}
//公共权限 public 成员 类内可以访问, 类外也可以;
//保护权限 protected 成员 类内可以访问, 类外不可以访问;继承可以访问;儿子可以访问
// 私有权限 private 成员 类内可以访问, 类外不可以访问;儿子也不能访问~~~
//class Person {
//public:
//	string m_name;
//protected:
//	string m_car;
//private: 
//	int m_Psaaword;
//public:
//	void func() {
//		cout << m_car;
//		cout << m_name;
//		cout << m_Psaaword;
//	}
//};
//int main() {
//	Person p1;
//	p1.func();
//	p1.m_name = "李四";
//}
//class Student {
//public:
//	string s_name;//成员变量
//	int s_id;
//	void showStudent() {//成员函数
//		cout << "姓名: " << s_name << "学号: " << s_id << endl;
//	}
//
//};
//int main() {
//	Student s1;
//	s1.s_name = "张三";
//	s1.s_id = 110;
//	s1.showStudent();
//	system("pause");
//	return 0;
//}
//const double PI = 3.14;
//class Circle {
//public:
//	int r;
//	double calculateZC() {
//		return 2 * PI * r;
//	}
//};
//
//
//int main() {
//	Circle c1;
//	c1.r = 10;
//	cout << "圆的周长为: " << c1.calculateZC() << endl;
//	system("pause");
//	return 0;
//}