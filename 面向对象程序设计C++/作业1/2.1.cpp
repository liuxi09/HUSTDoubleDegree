#include<iostream>
char c, * pc;
const char cc = 'a';
const char* pcc;
char* const cpc = &c;
const char* const cpcc = &cc;
char* const* pcpc;

int main()
{
	//1
	c = cc;   //��ȷû������
	//2
	//cc = c;   ����һ�����������ٴθ�ֵ
	//3
	pcc = &c;  //��ȷû������
	//4
	pcc = &cc; //��ȷû������
	//5
	pc = &c;//��ȷû������
	//6
	//pc = &cc;  ����һ����ͨ��������ָ��һ�����������������������ͨ�����ı䳣��ֵ�Ŀ�����
	//7
//	pc = pcc;  �����޷��ӡ�const char *��ת��Ϊ��char *��
	//8
//	pc = cpcc; �޷��ӡ�const char *const ��ת��Ϊ��char *��
	//9
//	cpc = pc;  �������ܱ���ֵ
	//10
	*pc = "ABCD"[2]; //��ȷû������
	//11
//	cc = 'a'; �������ǳ��������ٱ���ֵ��
	//12
	*cpc = *pc;   //��ȷû������
	//13
	pc = *pcpc;//��ȷû������
	//14
	**pcpc = *pc;//��ȷû������
	//15
	*pc = **pcpc;//��ȷû������
	//16
//	*pcc = 'b';  �������ܱ���ֵ
	//17
//	*pcpc = 'c'; ��ͨ�����޷�ת��Ϊ����
	//18
//	*cpcc = 'd'; ���ܸ�������ֵ
	return 0;
}