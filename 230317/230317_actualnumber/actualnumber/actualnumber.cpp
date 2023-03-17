#include <stdio.h>

int main(void) {

	float f = 46.5f;
	printf("%f\n", f);	//이처럼 출력했을경우 46.500000 같이 출력된다. 자릿수를 정하고자 하는 경우
	//printf("%.1f\n", f); 와 같이 %.원하는 자릿수f 이렇게 작성을 한다
	double d = 4.428;
	printf("%.2lf\n", d);	//소숫점 2번째 자리까지 반올림된다.
	return 0;
}