#include "box.h" // ������� 

void main()
{
	for (int i = 1; i <= 5; i++) { // 5�� ���
		print((11 - (2 * i - 1)) / 2, ' ');
		print(2 * i - 1, '*');
		print((11 - (2 * i - 1)) / 2, ' ');
		if (i != 5) cout << endl;
	}
}