#include <iostream>			// C++ ǥ�� ������� �ҽ� ���α׷��� ����(#include)�Ѵ�.
using namespace std;		// using������ ����Ͽ� std ��Ī������ �������� �ʰ� ����� �� �ִ�.

int main()					// �Լ��� �Ӹ���. main()�Լ�: ���α׷��� ������
{
	int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 }; // ũ�Ⱑ 10�� �迭 ����.
	int max{ data[0] };					 // data�� ù ��° �����͸� max�� �����Ѵ�.

	cout << "������ : " << data[0];		// 0�� �����͸� ����Ѵ�.
	for (int i = 1; i < 10; i++) {		// skajwl 9���� �����͸� ���Ѵ�.
		cout << " " << data[i];			// i�� �����͸� ����Ѵ�.
		if (max < data[i])				// i�� �����Ͱ� max���� ū�� ���ϰ� max���� ũ��
			max = data[i];				// max�� i�� �����ͷ� �����Ѵ�.
	}
	cout << endl << endl;				// �ٹٲ�
	cout << "�迭�� �ִ� : " << max << endl; // ǥ�� ��� ��Ʈ���� ����Ͽ� max ���� ����Ѵ�.

	return 0;							// ���� �������� �Լ��� �����Ѵ�.
}
