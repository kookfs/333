#include"employee.h"
int n=0;
int m=0;
employee::employee()
{
	if(m==0)
	{
			cout << "欢迎使用小冯信息管理系统！" <<endl;
			m++;
	}
	cout << "请输入姓名" << endl; 
	char a[100];
	cin >> a;
	strcpy(name,a);
	srand((unsigned)time(NULL));//time()用系统时间初始化种。为rand()生成不同的随机种子。
	accumpay = rand() % 100 + 1;//生成1~100随机数
	grade=rand() % 10 + 1;
	bianhao=n++;
}
employee::~employee()
{ 
	if(m==1)
	{
		cout << "欢迎您的使用，再见！";
		m++;
	}
}

