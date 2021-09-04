#include<iostream>
using namespace std;
int main() {
	for (int i = 1; i <=9; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j<< " * " << i << " = " << j * i <<"    ";
		}
		cout << endl;
	}
	//水仙花数
	//int num = 0;
	//do
	//{
	//	int a = 0, b = 0, c = 0;
	//	a = num % 10;
	//	b = num / 10 % 10;
	//	c = num / 100;
	//	if (a * a * a + b * b * b + c * c * c==num) {
	//		cout << num << endl;
	//	}
	//	num++;
	//} while (num<1000);

	//for (int i = 1; i <= 100; i++) {
	//	if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
	//		cout << i << endl;
	//	}
	//}
	//do while 
	//会先执行循环语句;
	//int num = 0;
	//do {
	//	cout << num << endl;
	//	num++;
	//} while (num<10);
	//
	//srand(time(0));
	//int num = rand() % 100 + 1;
	////cout << num << endl;
	//int val = 0;
	//while (1) {
	//	cin >> val;
	//	if (val > num) {
	//		cout << "大了" << endl;
	//	}
	//	else if (val < num) {
	//		cout << "小了" << endl;
	//	}
	//	else {
	//		cout << "猜对了" << endl;
	//		break;
	//	}
	//}
	//int num = 0;
	//while (num < 10) {
	//	cout << num << endl;
	//	num++;
	//}
	//switch;
	//switch的结构清晰,执行效率高;
	//但是判断的时候只能是整形或者字符型,不能判断一个区间
	//cout << "请给电影打分" << endl;
	//int score = 0;
	//cin >> score;
	//cout << "您打的分数为: " << score << endl;
	//switch (score) {
	//case 10:
	//	cout << "您认为是经典电影" << endl;
	//	break;
	//case 9:
	//	cout << "您认为是经典电影" << endl;
	//	break;
	//case 8:
	//	cout << "您认为电影非常好" << endl;
	//	break;
	//case 7:
	//	cout << "您认为电影非常好" << endl;
	//	break;
	//case 6:
	//	cout << "您认为电影一般" << endl;
	//	break;
	//case 5:
	//	cout << "您认为电影一般" << endl;
	//	break;
	//default:
	//	cout << "您认为是烂片" << endl;
	//	break;
	//}
	//三目运算符
	//int a = 10;
	//int b = 20;
	//int c = 0;
	//c = a > b ? a : b;
	//cout << c << endl;
	//int a, b, c;
	//cout << "请输入小猪a的体重: " << endl;
	//cin >> a;
	//cout << "请输入小猪b的体重: " << endl;
	//cin >> b;
	//cout << "请输入小猪c的体重: " << endl;
	//cin >> c;
	//if (a > b) {
	//	if (a > c) {
	//		cout << "小猪a最重" << endl;
	//	}
	//	else {
	//		cout << "小猪c最重" << endl;
	//	}
	//}
	//else {
	//	if (b > c) {
	//		cout << "小猪b最重" << endl;
	//	}
	//	else {
	//		cout << "小猪c最重" << endl;
	//	}
	//}

	//int score = 0;
	//cout << "请输入一个分数: " << endl;
	//cin >> score;
	//cout << "您的分数为: " << score << endl;
	//if (score > 600) {
	//	cout << "恭喜你考入一本大学" << endl;
	//	if (score > 700) {
	//		cout << "您能考入北京大学" << endl;
	//	}
	//	else if (score > 650) {
	//		cout << "你能考入清华大学" << endl;
	//	}
	//	else if (score > 600){
	//		cout << "你能考入西安电子科技大学" << endl;
	//	}
	//}

	//int score = 0;
	//cout << "请输入一个分数: " << endl;
	//cin >> score;
	//cout << "您的分数为: " << score << endl;
	//if (score > 600) {
	//	cout << "恭喜你考上了一本大学" << endl;
	//}
	//else {
	//	cout << "你考的是个锤子" << endl;
	//}
	system("pause");
	return 0;
}