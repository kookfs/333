#include"employee.h"
int n=0;
int m=0;
employee::~employee()
{ 
	if(m==1)
	{
		cout << "��ӭ����ʹ�ã��ټ���";
		m++;
	}
}

