// Pointers and the const Qualifier
#include <iostream>

void main()
{
	const double d0 = 10.0;
	double d1 = 11.0, ��2 = 11,1;
	const double* p1 = &d0; // d0�� const������ ��Ÿ����

	// *p1 = 11.0; -> �����Ұ�

	double* const p2 = &d1; // p2�� ����Ű�� �ּҰ��� �����Ұ�

	// p2 = d2; -> �����Ұ�
}