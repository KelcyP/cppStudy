#include <iostream>

using namespace std;

int add(int x, int y) {
    return x + y; //indenting 탭으로 앞에 빈칸 만드는 것
}

int main()
{
    cout << "Hello World!" << "abcdef" << "Hello Home" << endl;

    int my_v        = 1;
    int x           = 4;
    int num_apples  = 123;
    //하드코딩은 프로그래머가 코드에서 변수값을 리터럴같이 고정된 값으로 직접 대입해주는 방식 (위의 예시처럼)
    //소프트코딩은 프로그램 실행 중에 사용자의 입력이나 외부파일, 인터넷 통신등으로 데이터를 가져오는 방식 (good!)


    int x = 1 + 2; //주석을 코드 옆에 써도 괜찮지만
    //위에 쓰는게 가독성이 좋다
    int y = 3 + 4;

    return 0;
}
