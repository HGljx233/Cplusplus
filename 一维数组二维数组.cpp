//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	int score[3][3] = {
//		{100,100,100},
//		{80,90,60},
//		{60,70,80}
//	};
//	string names[3] = { "张三","李四","王五" };
//	for (int i = 0; i < 3; i++) {
//		int sum = 0;
//		for (int j = 0; j < 3; j++) {
//			sum += score[i][j];
//
//			//cout << score[i][j] <<"\t" << " ";
//		}
//		cout << names[i] << "的总分为: " << sum << endl;
//	}
//}

	//int arr[2][3]{
	//	{1,2,3},
	//	{4,5,6}
	//};
	//cout << "二维数组占用内存空间为: " <<sizeof(arr)<< endl;
	//cout << "二维数组第一行占用内存为: " << sizeof(arr[0]) << endl;
	//cout << "二维数组行数为: " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;//求列数
	//
	//cout << "二维数组行数为: " << sizeof(arr) / sizeof(arr[0]) << endl;//求行数
	////2.查看二维数组的首地址
	//cout << "二维数组首地址为: " << (int)arr << endl;
	//cout << "二维数组第一行首地址为: " << (int)arr[0] << endl;
	//cout << "二维数组第二行首地址为: " << (int)arr[1] << endl;
	//cout << "二维数组第一个元素首地址为: " << (int)&arr[0][0] << endl;
	//cout << "二维数组第二个元素首地址为: " << (int)&arr[0][1] << endl;
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
	//可以省略行数,不能省略列数;
//	int tmp;
//	int arr[] = { 4,3,2,8,6,1,3,9,0 };
//	cout << "排序前" << endl;
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
//	cout << "排序后; " << endl;
//	for (int i = 0; i < 9; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//	//冒泡排序;
//	int i, j;
//	int arr[] = { 4,3,2,8,6,1,3,9,0 };
//	//cout << "排序前" << endl;
//	//for ( i = 0; i < 9; i++) {
//	//	cout << arr[i] << "  ";
//	//}
//	//cout << endl;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int temp;
//	cout << "排序后: " << endl;
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
//	//数组逆置
//	int arr[5] = { 1,2,3,4,5 };
//	cout << "数组逆置前: " << endl;
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
//	cout << "数组逆置后: " << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << arr[i] << endl;
//	}
//
//}

	////最重小猪;
	//int arr[5] = { 100,300,500,400,200 };
	//int max = 0;
	//for(int i=0; i < 5; i++) {
	//	if (arr[i]>max){
	//		max = arr[i];
	//	}
	//}
	//cout << "最重的小猪体重为: " << max << endl;
	//乘法表
	//for (int i = 1; i <=9; i++) {
	//	for (int j = 1; j <= i; j++) {
	//		cout << j<< " * " << i << " = " << j * i <<"    ";
	//	}
	//	cout << endl;
	//}
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