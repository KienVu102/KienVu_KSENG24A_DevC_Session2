#include <stdio.h>
int main(){
	const float pi = 3.14;
	int bankinh = 10;
	float chuvi = 2 * pi * bankinh;
	float dientich = bankinh * pi * bankinh;
	printf("Ban kinh cua hinh tron la %d \n", bankinh);
	printf("Chu vi cua hinh tron la %.2f \n", chuvi);
	printf("Dien tich cua hinh tron la %.2f \n", dientich);
	return 0;
}
