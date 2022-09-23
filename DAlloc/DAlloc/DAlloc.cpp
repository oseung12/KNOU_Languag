#include <iostream>		// C++ 표준 헤더파일 소스 프로그램에 결합(#include)한다.
using namespace std;	// using구문을 사용하여 std 명칭공간을 지정하지 않고 사용할 수 있다.

int main()				// 함수의 머리부. main()함수: 프로그램의 시작점
{
	int* intPtr;		 // 정수형의 포인터변수 선언
	intPtr = new int[4]; // intPtr에 4개의 int 값을 저장할 메모리 할당
	cout << "intPtr 주소: " << intPtr << endl; // intPtr의 할당 받은 주소를 출력한다.

	// 할당된 공간을 사용한다.
	* intPtr = 10;			// intPtr[0] = 10 포인터가 첫번째 저장공간을 가리키며 10 저장
	*(intPtr + 1) = 20;		// intPtr[1] = 20 포인터가 두번째 저장공간을 가리키며 20 저장
	intPtr[2] = 30;			// intPtr[2] = 30 포인터가 세번째 저장공간을 가리키며 30 저장
	intPtr[3] = 40;			// intPtr[3] = 40 포인터가 네번째 저장공간을 가리키며 40 저장

	for (int* p = intPtr, i = 0; i < 4; i++) // intPtr이 가리키는 주소를 포인터 변수 p에 저장한다.
		cout << *p++ << p << endl;	// p포인터 변수가 가리키는 곳의 값을 1씩 증가하면서 출력한다.
	cout << endl;			// 줄바꿈
	delete[] intPtr;		// 4개의 int 값을 할당한 메모리 값을 반환

	cout << "intPtr 주소 : " << intPtr << endl; // intPtr이 가리키고 있는 주소값을 출력한다.
	intPtr = nullptr;			// 불필요한 공간을 시스템에 반납.
								// 주소값을 제거하기위해서 포인터에 nullptr를 넣는다.
	cout << "intPtr 주소 : " << intPtr << endl;  // 주소값이 제거된 intPtr을 출력한다.

		return 0;			// 현재 실행중인 함수를 종료한다.
}

