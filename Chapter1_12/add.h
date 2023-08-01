#pragma once //하단 작성한 헤더가드와 똑같이 작동, 메인에서 중복정의 방지용

//#ifndef MY_ADD = MY_ADD 라는게 이미 정의되어 있으면 다시 정의하지 말아라
//#define MY_ADD

int add(int a, int b)
{
	return a + b;
}

//#endif