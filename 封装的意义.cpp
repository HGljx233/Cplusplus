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
			cout << "����������!" << endl;
			return;
		}
		Age = age;
	}
	void setLover(string lover) {
		Lover = lover;
	}
private:
	string Name;//�ɶ���д
	int Age;//ֻ��
	string Lover;//ֻд

};
int main() {
	Person p1;
	p1.setName("����");
	cout << "����Ϊ: " << p1.getName()<< endl;
	p1.setAge(1002);
	cout << "����Ϊ: " << p1.getAge() << endl;
	p1.setLover("�ؽ���");
	system("pause");
	return 0;
}
//classĬ��Ȩ��˽��
//struct Ĭ��Ȩ�޹���
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
//����Ȩ�� public ��Ա ���ڿ��Է���, ����Ҳ����;
//����Ȩ�� protected ��Ա ���ڿ��Է���, ���ⲻ���Է���;�̳п��Է���;���ӿ��Է���
// ˽��Ȩ�� private ��Ա ���ڿ��Է���, ���ⲻ���Է���;����Ҳ���ܷ���~~~
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
//	p1.m_name = "����";
//}
//class Student {
//public:
//	string s_name;//��Ա����
//	int s_id;
//	void showStudent() {//��Ա����
//		cout << "����: " << s_name << "ѧ��: " << s_id << endl;
//	}
//
//};
//int main() {
//	Student s1;
//	s1.s_name = "����";
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
//	cout << "Բ���ܳ�Ϊ: " << c1.calculateZC() << endl;
//	system("pause");
//	return 0;
//}