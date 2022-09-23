#include <iostream>		// C++ 표준 헤더파일 소스 프로그램에 결합(#include)한다.
using namespace std;	// using구문을 사용하여 std 명칭공간을 지정하지 않고 사용할 수 있다.

int main()				// 함수의 머리부. main()함수: 프로그램의 시작점
{
	int a = 10, b = 100;		// 변수 a = 10, 변수 b = 100 선언한다.

	int	*ptr = &a;				// 포인터 ptr을 선언한 후에 변수 a의 주소를 넣는다.
	cout << "ptr이 가리키는 곳의 값 : " <<	*ptr << endl; // 변수 a에 저장된 값 10을 출력한다.

	 *ptr = 20;			// ptr이 가리키는 곳에 20을 저장 즉, 변수 a에 20을 저장한다.
	cout << "변수 a의 값 : " << a << endl;		// 변수 a의 값을 출력한다. 출력값 = 20

	ptr = &b;			// ptr이 b의 주소를 나타내도록 한다.
	cout << "변수 b의 값 : " << *ptr << endl;  // 현재 ptr은 b의 주소를 나타낸다.
											  // 즉, b 값을 출력한다. 출력값 = 100

	return 0;			// 현재 실행중인 함수를 종료한다.
}

