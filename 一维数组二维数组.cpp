//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	int score[3][3] = {
//		{100,100,100},
//		{80,90,60},
//		{60,70,80}
//	};
//	string names[3] = { "����","����","����" };
//	for (int i = 0; i < 3; i++) {
//		int sum = 0;
//		for (int j = 0; j < 3; j++) {
//			sum += score[i][j];
//
//			//cout << score[i][j] <<"\t" << " ";
//		}
//		cout << names[i] << "���ܷ�Ϊ: " << sum << endl;
//	}
//}

	//int arr[2][3]{
	//	{1,2,3},
	//	{4,5,6}
	//};
	//cout << "��ά����ռ���ڴ�ռ�Ϊ: " <<sizeof(arr)<< endl;
	//cout << "��ά�����һ��ռ���ڴ�Ϊ: " << sizeof(arr[0]) << endl;
	//cout << "��ά��������Ϊ: " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;//������
	//
	//cout << "��ά��������Ϊ: " << sizeof(arr) / sizeof(arr[0]) << endl;//������
	////2.�鿴��ά������׵�ַ
	//cout << "��ά�����׵�ַΪ: " << (int)arr << endl;
	//cout << "��ά�����һ���׵�ַΪ: " << (int)arr[0] << endl;
	//cout << "��ά����ڶ����׵�ַΪ: " << (int)arr[1] << endl;
	//cout << "��ά�����һ��Ԫ���׵�ַΪ: " << (int)&arr[0][0] << endl;
	//cout << "��ά����ڶ���Ԫ���׵�ַΪ: " << (int)&arr[0][1] << endl;
	//int arr1[2][3] = {
	//	{1,2,5},
	//	{4,5,6},
	//};
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << arr1[i][j] << " ";
	//	}
	//	cout << endl;
	//}


	//int arr3[2][3] = { 1,2,3,4,5,6 };
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << arr3[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//����ʡ������,����ʡ������;
//	int tmp;
//	int arr[] = { 4,3,2,8,6,1,3,9,0 };
//	cout << "����ǰ" << endl;
//	for (int i = 0; i < 9; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 8 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	cout << "�����; " << endl;
//	for (int i = 0; i < 9; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//	//ð������;
//	int i, j;
//	int arr[] = { 4,3,2,8,6,1,3,9,0 };
//	//cout << "����ǰ" << endl;
//	//for ( i = 0; i < 9; i++) {
//	//	cout << arr[i] << "  ";
//	//}
//	//cout << endl;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int temp;
//	cout << "�����: " << endl;
//	//for (i = 0; i < n-1; i++)
//	//{
//	//	for (j = 0; j = n- i-1; j++)
//	//	{
//	//		if (arr[j] > arr[j + 1])
//	//		{
//	//			temp = arr[j];
//	//			arr[j] = arr[j + 1];
//	//			arr[j + 1] = temp;
//	//		}
//	//	}
//	//}
//	
//	for (i = 0; i < n; i++) {
//		cout <<arr[i]<< "  ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
//	//��������
//	int arr[5] = { 1,2,3,4,5 };
//	cout << "��������ǰ: " << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << arr[i] << endl;
//	}
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (start < end)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//	cout << "�������ú�: " << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << arr[i] << endl;
//	}
//
//}

	////����С��;
	//int arr[5] = { 100,300,500,400,200 };
	//int max = 0;
	//for(int i=0; i < 5; i++) {
	//	if (arr[i]>max){
	//		max = arr[i];
	//	}
	//}
	//cout << "���ص�С������Ϊ: " << max << endl;
	//�˷���
	//for (int i = 1; i <=9; i++) {
	//	for (int j = 1; j <= i; j++) {
	//		cout << j<< " * " << i << " = " << j * i <<"    ";
	//	}
	//	cout << endl;
	//}
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