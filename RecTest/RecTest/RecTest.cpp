#include <iostream>    // C++ 표준 헤더파일 소스 프로그램에 결합(#include)한다.
using namespace std;  // using구문을 사용하여 std 명칭공간을 지정하지 않고 사용할 수 있다.

int main()	         // 함수의 머리부. main()함수: 프로그램의 시작점
{
	int a = 10, b = 20;    // 변수 a = 10, 변수 b = 20 선언한다.

	int& aRef = a;	      // 변수 a를 참조하는 참조 변수(a변수의 별명) aRef를 선언한다.
	cout << "a의 값 : " << a << endl;	   // 변수 a의 값을 출력한다.
	cout << "aRef가 참조하는 값 : " << aRef << endl << endl;	// a를 참조하는 참조변수 aRef를 출력
																// 현재 변수 a의 값은 10이므로 10이 출력
	aRef = 100;          // 참조변수 aRef의 값을 100 으로 변경
	cout << "a의 값 : " << a << endl;    // a의 값을 출력한다. 
										// 현재 a의 값은 100이므로 100이 출력
	aRef = b;	    // a를 참조하는 참조변수 aRef의 값을 b의 값으로 변경
	cout << "a의 값 : " << a << endl;	 // 참조변수의 값이 b의 값으로 변경, 출력값은 20이 출력

	return 0;		// 현재 실행중인 함수를 종료한다.
}

