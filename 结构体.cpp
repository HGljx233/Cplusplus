#include<iostream>
#include<string>
using namespace std;
struct Hero {
	string name;
	int age;
	string sex;
};
void bubbleSort(struct Hero heroArray[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (heroArray[j].age > heroArray[j+1].age) {
				struct Hero tmp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = tmp;
			}
		}
	}
}

int main() {
	struct Hero heroArray[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < len; i++) {
		cout << heroArray[i].name << heroArray[i].age << heroArray[i].sex << endl;
	}
	
	bubbleSort(heroArray, len);
	for (int i = 0; i < len; i++) {
		cout << heroArray[i].name << heroArray[i].age << heroArray[i].sex << endl;
	}
	cout << endl;

}
//struct student {
//	string name;
//	int age;
//	int score;
//};
//void printStudent(const student *s) {
//	s->age = 120;
//	cout << s->name << endl << s->age << endl << s->score << endl;
//}
//int main() {
//	struct student s = { "张三",15,70 };
//	printStudent(&s);
//	cout << s.name << endl << s.age << endl;
//}
#if 0
struct student {
	string name;
	int age;
	int score;
};
struct teacher {
	int id;
	int age;
	string name;
    student stu;
};
int main() {
	teacher t;
	teacher* p = &t;
	p->id = 100000;
	p->name = "老王";
	//t->age = 20;
	//t->stu.name = "小王";
	//t->stu.age = 9;
	//t->stu.score = 100;
	cout << p->id << endl;
}


struct Student {
	string name;
	int age;
	int score;
};
int main() {
	//struct的关键字可以省略在创建变量时;
	struct Student s1;
	s1.name = "张三";
	s1.age = 19;
	s1.score = 100;
	cout << " 姓名: " << s1.name <<" 年龄: "<<s1.age<<" 分数: "<<s1.score<< endl;
}
#endif