#include"employee.h"
int n=0;
int m=0;
employee::employee()
{
	if(m==0)
	{
			cout << "��ӭʹ��С����Ϣ����ϵͳ��" <<endl;
			m++;
	}
	cout << "����������" << endl; 
	char a[100];
	cin >> a;
	strcpy(name,a);
	srand((unsigned)time(NULL));//time()��ϵͳʱ���ʼ���֡�Ϊrand()���ɲ�ͬ��������ӡ�
	accumpay = rand() % 100 + 1;//����1~100�����
	grade=rand() % 10 + 1;
	bianhao=n++;
}
employee::~employee()
{ 
	if(m==1)
	{
		cout << "��ӭ����ʹ�ã��ټ���";
		m++;
	}
}

