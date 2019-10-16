#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	float c1, c2, c3;
	printf("섭씨온도 3개를 실수로 입력하세요");
	scanf("%f %f %f", &c1, &c2, &c3);
	printf("%.4f의 화씨온도는 %.4f도입니다\n", c1, (9.0 / 5.00) * c1 + 32.0);
	printf("%.4f의 화씨온도는 %.4f도입니다\n", c3, (9.0 / 5.0) * c3 + 32.0);

	return 0;
}