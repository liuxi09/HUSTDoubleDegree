/*
��ҵ���� 3.2��Ϊ����������һ�ö�������������Ȳ�С�� 3. 
��1������������ķ�ʽ����ʾ�����ڵ�data ָ������ݡ�
(2) ����ĳһ�����Ƿ������г��֣������ҵ��Ľڵ�ָ�롣
��3������������ķ�ʽ����ʾ�ԣ�2�����ҵ��Ľڵ�Ϊ������������
Ҫ�󣺲��ı����ݳ�Ա�Ķ��壨˽�еı������������ʵ��ĳ�Ա������
����������ܣ������ʵ�����ͨ������main�����������������ܽ��в��ԡ�
*/
#include<iostream>
#include"Node.h"

int main()
{
	NODE t;
	char ch[11] = "0123456789";
	for (int i = 0; i < 10; i++)
	{
		t.insert(&ch[i]);
	}

	std::cout << "���������\n";
	t.preOrder();
	std::cout << std::endl;

	std::cout << "���������\n";
	t.inOrder();
	std::cout << std::endl;

	if (t.search(&ch[2]) == NULL)
	{
		std::cout << "Not Found\n";
	}
	else
	{
		std::cout << "Find :" << t.search(&ch[0]);
	}
	return 0;
}
