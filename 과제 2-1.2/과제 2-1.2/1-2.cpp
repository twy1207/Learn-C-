#include "box.h" // ������� 

void main()
{
	// 11�� ���
	for (int i = 1; i <= 6; i++) { // 6�� ���������� ����ϰ� ������ 5�� �ݴ�� ���
		print((13 - (2 * i + 1)) / 2, ' ');
		if (i > 1) {
			print(1, '*');
			print(2 * i - 3, ' ');
			print(1, '*');
		} else print(1, '*'); // i == 1 �� �� '*' 1���� ���, ' '�� X
		print((13 - (2 * i + 1)) / 2, ' ');
		cout << endl;
	}
	for (int i = 5; i >= 1; i--) { // ������ 5�� �ݴ�� ���
		print((13 - (2 * i + 1)) / 2, ' ');
		if (i > 1) {
			print(1, '*');
			print(2 * i - 3, ' ');
			print(1, '*');
		}
		else print(1, '*');
		print((13 - (2 * i + 1)) / 2, ' ');
		if(i > 1) cout << endl;
	}
}