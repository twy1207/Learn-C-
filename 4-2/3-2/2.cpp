#include <iostream>
int addition_1(int a, int b) { return a + b; } // ���� ����� ��ȯ
void addition_2(int a, int b, int* result) { *result = a + b; } // ���� ����� ������ ������ �Ҵ�
void addition_3(int a, int b, int& result) { result = a + b; } // ���� ����� reference ������ �Ҵ�

int main()
{
	int result1, result2, result3;
	result1 = addition_1(3, 4);
	addition_2(5, 6, &result2);
	addition_3(7, 8, result3);
	std::cout << result1 << std::endl;
	std::cout << result2 << std::endl;
	std::cout << result3 << std::endl;
	return 0;
}