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
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
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
//	struct student s = { "����",15,70 };
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
	p->name = "����";
	//t->age = 20;
	//t->stu.name = "С��";
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
	//struct�Ĺؼ��ֿ���ʡ���ڴ�������ʱ;
	struct Student s1;
	s1.name = "����";
	s1.age = 19;
	s1.score = 100;
	cout << " ����: " << s1.name <<" ����: "<<s1.age<<" ����: "<<s1.score<< endl;
}
#endif