#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <locale.h>
#include <math.h>
int lab5home()
{
	// контроль 0.000071    4       -0.09489
	// контроль 230000      2.7     -0.654889
	float x, y,f;
	printf("введите x \n");
	scanf_s("%f", &x);
	printf("введите y \n");
	scanf_s("%f", &y);
	f = (sqrt(pow (2+y,2) + pow ((sin(y+5)), (float)1/7)))/(log(x+1)-pow(y, 3));
	printf("Функция равна %+.6f",f);
	return 0;
}
int lab6home1()
{
	int x, y, z, a1, a2, a3;
	printf("введите первую цифру \n");
	scanf_s("%d", &x);
	a1 = x;
	printf("введите вторую цифру \n");
	scanf_s("%d", &y);
	if (a1 > y) a2 = y; else { a1 = y; a2 = x; };
	printf("введите третью цифру \n");
	scanf_s("%d", &z);
	if (a1 > z) if (a2 > z) a3 = z; else { a3 = a2; a2 = z; } else { a3 = a2; a2 = a1; a1 = z; };
	printf("Наибольшее возможное число %d%d%d", a1, a2, a3);
	return 0;
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	//lab5home();
	lab6home1();

}