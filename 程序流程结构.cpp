#include<iostream>
using namespace std;
int main() {
	for (int i = 1; i <=9; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j<< " * " << i << " = " << j * i <<"    ";
		}
		cout << endl;
	}
	//ˮ�ɻ���
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
	//����ִ��ѭ�����;
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
	//		cout << "����" << endl;
	//	}
	//	else if (val < num) {
	//		cout << "С��" << endl;
	//	}
	//	else {
	//		cout << "�¶���" << endl;
	//		break;
	//	}
	//}
	//int num = 0;
	//while (num < 10) {
	//	cout << num << endl;
	//	num++;
	//}
	//switch;
	//switch�Ľṹ����,ִ��Ч�ʸ�;
	//�����жϵ�ʱ��ֻ�������λ����ַ���,�����ж�һ������
	//cout << "�����Ӱ���" << endl;
	//int score = 0;
	//cin >> score;
	//cout << "����ķ���Ϊ: " << score << endl;
	//switch (score) {
	//case 10:
	//	cout << "����Ϊ�Ǿ����Ӱ" << endl;
	//	break;
	//case 9:
	//	cout << "����Ϊ�Ǿ����Ӱ" << endl;
	//	break;
	//case 8:
	//	cout << "����Ϊ��Ӱ�ǳ���" << endl;
	//	break;
	//case 7:
	//	cout << "����Ϊ��Ӱ�ǳ���" << endl;
	//	break;
	//case 6:
	//	cout << "����Ϊ��Ӱһ��" << endl;
	//	break;
	//case 5:
	//	cout << "����Ϊ��Ӱһ��" << endl;
	//	break;
	//default:
	//	cout << "����Ϊ����Ƭ" << endl;
	//	break;
	//}
	//��Ŀ�����
	//int a = 10;
	//int b = 20;
	//int c = 0;
	//c = a > b ? a : b;
	//cout << c << endl;
	//int a, b, c;
	//cout << "������С��a������: " << endl;
	//cin >> a;
	//cout << "������С��b������: " << endl;
	//cin >> b;
	//cout << "������С��c������: " << endl;
	//cin >> c;
	//if (a > b) {
	//	if (a > c) {
	//		cout << "С��a����" << endl;
	//	}
	//	else {
	//		cout << "С��c����" << endl;
	//	}
	//}
	//else {
	//	if (b > c) {
	//		cout << "С��b����" << endl;
	//	}
	//	else {
	//		cout << "С��c����" << endl;
	//	}
	//}

	//int score = 0;
	//cout << "������һ������: " << endl;
	//cin >> score;
	//cout << "���ķ���Ϊ: " << score << endl;
	//if (score > 600) {
	//	cout << "��ϲ�㿼��һ����ѧ" << endl;
	//	if (score > 700) {
	//		cout << "���ܿ��뱱����ѧ" << endl;
	//	}
	//	else if (score > 650) {
	//		cout << "���ܿ����廪��ѧ" << endl;
	//	}
	//	else if (score > 600){
	//		cout << "���ܿ����������ӿƼ���ѧ" << endl;
	//	}
	//}

	//int score = 0;
	//cout << "������һ������: " << endl;
	//cin >> score;
	//cout << "���ķ���Ϊ: " << score << endl;
	//if (score > 600) {
	//	cout << "��ϲ�㿼����һ����ѧ" << endl;
	//}
	//else {
	//	cout << "�㿼���Ǹ�����" << endl;
	//}
	system("pause");
	return 0;
}