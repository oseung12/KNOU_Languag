#include <iostream>			// C++ 표준 헤더파일 소스 프로그램에 결합(#include)한다.
using namespace std;		// using구문을 사용하여 std 명칭공간을 지정하지 않고 사용할 수 있다.

int main()					// 함수의 머리부. main()함수: 프로그램의 시작점
{
	int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 }; // 크기가 10인 배열 선언.
	int max{ data[0] };					 // data의 첫 번째 데이터를 max로 가정한다.

	cout << "데이터 : " << data[0];		// 0번 데이터를 출력한다.
	for (int i = 1; i < 10; i++) {		// skajwl 9개의 데이터를 비교한다.
		cout << " " << data[i];			// i번 데이터를 출력한다.
		if (max < data[i])				// i번 데이터가 max보다 큰지 비교하고 max보다 크면
			max = data[i];				// max를 i번 데이터로 변경한다.
	}
	cout << endl << endl;				// 줄바꿈
	cout << "배열의 최댓값 : " << max << endl; // 표준 출력 스트림을 사용하여 max 값을 출력한다.

	return 0;							// 현재 실행중인 함수를 종료한다.
}

