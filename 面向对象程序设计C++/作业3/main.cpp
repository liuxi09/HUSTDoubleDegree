/*
��������ɵ� 3.2 ��ҵ�����ϣ����������÷��͹��ܡ�
��1�����ܹ����� const Լ���ĵط�������const Լ�������� �����������������ȵȡ�
��2����������constԼ����Υ����Լ����һ���﷨�������䣨�������Σ���֮�󣬽���Щ����������ע���У�ע������ԭ��
��3������һ����̬���ݳ�Ա�����ڼ�¼ĳһʱ���ж��ٸ��������ڡ����� ���캯��������ʱ����¼�Ĵ�����1���� ��������������ʱ����¼�Ĵ�����1����ÿ�������ݳ�Ա�����仯ʱ��Ҫ�����Ӧ����Ϣ(��̬��Ա��ֵ��������������Ķ�����data�������ݡ����� ��construct  ***  string is ***** ;
��4������ NEW �� delete ���������ͷ� ���ڵ㡣
��5�������ڵ㣨NODE���У�����һ�������ݳ�Ա value, ����ýڵ�ļ�ֵ����Ȩ�أ�������һ�������������󣬷��������� value,������� value.
��6������һ��˽�еľ�̬���ݳ�Ա����¼���Ĵ����ߵ�������������ߣ��������в���ĳһ�����Ƿ���ڡ�����ʱ������ýڵ�Ĵ����ߡ�
��7�������Ĵ�С�������Ǿ�̬���ݳ�Ա�����е�ƫ�Ƶ�ַ��Ҫ��ʹ�����ݳ�Աָ��ķ�ʽ���ƫ�Ƶ�ַ��������ָ�� p, *(int *)&p ��Ϊƫ������
��8���޸�ĳһ���ڵ�� value ֵ��ע�⣬value�ǳ����ݳ�Ա��Ҫʹ��ǿ�Ƶ�����ת�������޸�ʱҪ��ʹ�����ݳ�Աָ�롣
*/
#include<iostream>
#include<string>
#include"Node.h"
int NODE::count = 0;
std::string NODE::name = "lyh";
int NODE::valueSum = 0;
int main()
{
	NODE t;
	
	char ch[11] = "0123456789";
	for (int i = 0; i < 10; i++)
	{
		t.insert(&ch[i]);
		std::cout << "���нڵ�����" << t.count << std::endl;
	}

	std::cout << "���������\n";
	t.preOrder();
	std::cout << std::endl;
	std::cout << "valueSum = " << NODE::valueSum << std::endl;
	std::cout << "���������\n";
	t.inOrder();
	std::cout << std::endl;

	if (t.search(&ch[2]) == NULL)
	{
		std::cout << "Not Found\n";
	}
	else
	{
		std::cout << "creator name :" << NODE::name << std::endl;
		std::cout << "Find :" << t.search(&ch[0]) << std::endl;
	}
	printf("data�ĵ�ַ��%d\n", t.getDatap());
	printf("left�ĵ�ַ��%d\n", t.getLeftp());
	printf("right�ĵ�ַ��%d\n", t.getRightp());
	printf("value�ĵ�ַ��%d\n", t.getValuep());

	//�������������������нڵ�
	std::cout << "����ִ����������\n";
	t.~NODE();
	std::cout << "���нڵ�����" << t.count << std::endl;
	std::cout << "��Ĵ�С��" << sizeof(t) << std::endl;
	//����value��ֵΪ2
	t.setValue(2);
	std::cout << "Value:" << t.getValue() << std::endl;
	return 0;
}