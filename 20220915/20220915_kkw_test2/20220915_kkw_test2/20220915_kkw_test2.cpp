﻿// 20220915_kkw_test2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.14159;

	printf("변수 ch의 크기 : %d \n", sizeof(ch));
	printf("변수 inum의 크기 : %d \n", sizeof(inum));
	printf("변수 dnum의 크기 : %d \n", sizeof(dnum));
	
	printf("변수 float의 크기 : %d \n", sizeof(float));
	printf("변수 double의 크기 : %d \n", sizeof(double));
	printf("변수 long의 크기 : %d \n", sizeof(long));

	unsigned char ui = 255;
	char i = 255;
	printf("ui의 값은 %d 입니다.\n", ui);
	printf("i의 값은 %d 입니다.\n", i);

	return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
