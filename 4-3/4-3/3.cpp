#include <iostream>

int main() 
{
	int a = 'A';
	int* ptr = &a;
	int** ptr2 = &ptr;
	//�ּҰ� -> �ּҿ�����
	std::cout << "a �ּ� : " << &a << std::endl;
	std::cout << "ptr �ּ� : " << &ptr << std::endl;
	std::cout << "ptr2 �ּ� : " << &ptr2 << std::endl;

	//������ -> �״��
	std::cout << "a ������ : " <<  a << std::endl;
	std::cout << "ptr ������ : " <<  *ptr << std::endl;
	std::cout << "ptr2 ������ : " << *ptr2 << std::endl;
	std::cout << "ptr2 ���� ������ : " << **ptr2 << std::endl;

	return 0;
}