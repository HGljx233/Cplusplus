#include<iostream>
#include<time.h>
#include"fun.h"
using namespace std;
void f(int) {
	cout << "f(int)" << endl;

}
void f(int*) {
	cout << "f(int*)" << endl;
}
void main() {
	f(nullptr);
	f(0);
	f(NULL);
	f((int*)NULL);
}
/*void main() {
	int ar[] = { 1,2,3,4,5,6,7,8,9 };
	for (auto e : ar)
		cout << e<< endl;
}
void main() {
	int ar[] = { 1,2,3,4,5,6,7,8,9 };
	int n = sizeof(ar) / sizeof(ar[0]);
	for (int i = 0; i < n; i++) {
		cout << ar[i] << endl;
	}
}
//auto不能作为参数类型,不能修饰数组;
extern "C"
 using namespace std;
int main() {
	int a = 10;
	printf( typeid(a).name());
}
 void main() {
	 int a = 10;
	 auto b = &a;
	 cout << typeid(b).name() << endl;
 }
 void main() {
	 int a = 10;
		 int b = 20;
		 cout << "MAX=" << MAX(a, b) << endl;
 }
 inline int fun(int a,int b) {
	 a = 10;
	 b = 20;
	 return a + b;
 }
 void main() {
	 fun(20,30);

}
struct A {
	int a[10000];
};
void TestFun1(A a) {

}
void TestFun2(A &a) {

}
void Test() {
	A a;
	size_t begin1 = clock();
	for (size_t i = 0; i < 10000; i++) {
		TestFun1(a);
	}
	size_t end1 = clock();
	size_t begin2 = clock();
	for (size_t i = 0; i < 10000; ++i)
		TestFun2(a);
	size_t end2 = clock();
	// 分别计算两个函数运行结束后的时间
	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;

}
void main() {
	Test();
}
int& fun(int a, int b) {

}
void main() {

}


void swap(int& left, int& right) {
	int tmp = left;
	left = right;
	right = tmp;
}
void main() {
	int a = 10;
	int b = 120;
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return;
}

void main() {
	const int& a = 10;
	 const int* pa = &a;
}
//一个变量可以有多个引用,比如一个人有很多外号;


//void main() {
//	const int a = 10;
//	const int* pa = &a;
//}
void main() {
	int a = 10; 
	int& b = a;
	int c = 1;
	int* const pc = &c;//只能修改值

	*pc = 10;
	cout << a << b << c << endl;
//const int* pc = &c;只能修改指向
}
void main() {
	int a = 10;
	int &b = a;//引用: 给空间起别名
	cout << &a <<endl<< &b << endl;
	char ch = 'A';
	char& c = ch;

	int* pa = &a;
	int*& qa = pa;
}

namespace MySpace {
	void fun() {
		cout << "This is fun1()" << endl;
	}
};
namespace YouSpace {
	void fun() {
		cout << "This is fun2()" << endl;
	}
};
void main() {
	YouSpace::fun();  //::作用域解析符;
}
/*#define AAA
#ifdef AAA
void fun() {
	cout << "This is My fun()" << endl;
}
#else
void fun() {
	cout << "This is You fun()" << endl;
}
#endif
void main() {
	fun();
}*/
/*

void fun(int a=10) {
	cout << "a=" << a << endl;
}
void main(){
	fun(20);


//函数的重载
void fun() {
		cout << "This is a fun()." << endl;
	}
void fun(int a, int b) {
	cout << "This is a fun(a,b)." << endl;
}
void  main() {
	fun();
	fun(10, 20);

	

	cout << "HELLO WORLD!" <<endl;


	int result;
	cin >> result;
	cout << "result=" << result << endl;


	char ch = 'A';
	int i = 100;
	float f = 12.34f;
	double d = 23.45;
	cout << ch << " " << i << " " << f << " " << d << endl;


}*/