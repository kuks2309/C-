// min-max.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int find_max(int a1, int a2, int a3, int a4, int a5, int a6)
{
	int max = -10000;
	/*
	if (max < a1)  max = a1;	
	if (max < a2)  max = a2;
	if (max < a3)  max = a3;
	if (max < a4)  max = a4;
	if (max < a5)  max = a5;
	if (max < a6)  max = a6;
	*/

	max = (max < a1) ? a1 : max;
	max = (max < a2) ? a2 : max;
	max = (max < a3) ? a3 : max;
	max = (max < a4) ? a4 : max;
	max = (max < a5) ? a5 : max;
	max = (max < a6) ? a6 : max;

	return max;
}

int find_min(int a1, int a2, int a3, int a4, int a5, int a6)
{
	int min = 10000;
	if (min > a1)  min = a1;
	if (min > a2)  min = a2;
	if (min > a3)  min = a3;
	if (min > a4)  min = a4;
	if (min > a5)  min = a5;
	if (min > a6)  min = a6;
	return min;
}
int main()
{
	int a1 = 0;  	int a2 = 0; 	int a3 = 0;
	int a4 = 0; 	int a5 = 0; 	int a6 = 0;
	

	scanf("%d", &a1); scanf("%d", &a2); scanf("%d", &a3);
	scanf("%d", &a4); scanf("%d", &a5); scanf("%d", &a6);

	printf("%d %d %d %d %d %d\n", a1, a2, a3, a4, a5, a6);

	
	printf("max = %d \n", find_max(a1,a2,a3,a4,a5,a6)) ;	
	printf("min = %d \n", find_min(a1, a2, a3, a4, a5, a6));

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
