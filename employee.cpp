#include"employee.h"
int n=0;
int m=0;
employee::~employee()
{ 
	if(m==1)
	{
		cout << "欢迎您的使用，再见！";
		m++;
	}
}

