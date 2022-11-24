﻿// 20221124_kkw_test1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
//C언어
#include <stdlib.h> //rand(), srand()
#include <time.h> //time()
#include <math.h>

int find_max(int d, int e, int f);
int find_min(int d, int e, int f);
int main()
{
	int a = 0, b = 0, c = 0;
	int min = 0, max = 0;
	int random_number =  0;
	int i = 0;
	double sum = 0.0, avg  = 0.0;
	double dist1 = 0.0, dist2 = 0.0, dist3 = 0.0;

	srand((unsigned int)time(NULL)); //seed값으로 현재시간 부여 
	scanf("%d %d %d", &a, &b, &c);
	
	min = find_min(a, b, c);
	max = find_max(a, b, c);

	for(i=0;i<10;i++)
	{ 
	   random_number = rand() % (max - min + 1) + min;
       printf("난수[%d] : %d\n",i, random_number); //난수 발생
	   sum += random_number;
	}
	/// 발생된 10개의 난수(랜덤값)의 합을 구하여라(10). 
	// 중간값 = 평균 
	avg = sum / 10;
	printf("sum = %6.3lf | average = %6.3lf\n", sum, avg);

	dist1 = fabs(a - avg);  dist2 = fabs(b - avg); dist3 = fabs(c - avg);
	printf("%6.3lf %6.3lf %6.3lf\n", dist1, dist2, dist3);

	return 0;
}

int find_max(int d, int e, int f)
{
	int max = d;	
	max = (d > max) ? d : max;
	max = (e > max) ? e : max;
	max = (f > max) ? f : max;
	return max;
}

int find_min(int d, int e, int f)
{
	int min = d;
	min = (d < min) ? d : min;
	min = (e < min) ? e : min;
	min = (f < min) ? f : min;
	return min;
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
