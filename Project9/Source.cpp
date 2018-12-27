#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

void task11()
{
	int a, s, d, f, g;
	for (int i = 1; i < 11; i++)
	{
		int a = 1 + rand() % 9;
		int s = 1 + rand() % 9;
		int d = 1 + rand() % 9;
		int f = 1 + rand() % 9;
		int g = 1 + rand() % 9;
		float sum;
		float middle;
		if (a == s || a == d || a == f || a == g)
			a = 0;
		if (s == a || s == d || s == f || s == g)
			s = 0;
		if (d== s || d == a || d == f || d == g)
			d = 0;
		if (f == s || f == d || f == a || f == g)
			f = 0;
		if ( g == s || g == d || g == f || g == a)
			g = 0;
		sum = a + s + d + f + g;
		 middle = float(sum / 5);
		printf("%f\n%f\n", sum, middle);
	}



}

void task10()
{
	int tme1 = 120;
	int tme;
	for (int i = 1; i < 11; i++) {
		int tme = 1 + rand() % 119;
		if (tme < tme1)
			printf("%dminutes\n(last time%d)\n", tme,tme1);
		tme1 = tme;
	}

}
void task9()
{
	int notfat = 10 + rand() % 30;
	int fat = 1 + rand() % 5;
	int sum1 = 0;
	int sum2=0;
	int y=0;

	for (int i = 1; i <= notfat; i++)
	{
		int weight = 50 + rand() % 50;
		
		y = y + weight;
		
	}sum1 = y / notfat;
	printf("не полные %d\n", sum1);
	y = 0;
	for (int i = 1; i <= fat; i++)
	{
		int weight = 100 + rand() % 20;

		y = y + weight;

	}sum2 = y / fat;

	printf("полные%d\n", sum2);


}
void task8()
{
	int f = 10 + rand() % 30;
	int sum = 0;

	for (int i = 1; i <= f; i++)
	{
		int exam1 = 2 + rand() % 3;
		int exam2 = 2 + rand() % 3;
		if (exam1==2||exam2==2)
			sum++;

		printf("%d,%d\n", exam1, exam2);
	}
	printf("%d\n", sum);




}
void task7()
{
	int f = 10 + rand() % 30;
	int sum = 0;
	
	for (int i = 1; i <= f; i++)
	{
		int wins = 0 + rand() % 10;
		int fails = 0 + rand() % 10;
		if (fails < wins)
			sum++;
		
		printf("%d,%d\n", wins,fails);
	}
	printf("%d\n", sum);


}
void task6()
{
	int f = 10 + rand() % 30;
	int sum1 = 0;
	int sum2 = 0;
	int age;
	for (int i=1; i <= f; i++)
	{
		int age = 1980 + rand() % 30;
		if (age < 1985)
			sum1++;
		if (age > 1990)
			sum2++;
		printf("%d\n", age);
	}
	printf("%d\n%d\n", sum1, sum2);
}
void task5()
{
	
	int pupils=0;
	int sum=0;
	
	for (int i = 1; i <= 11; i++)
	{

		if ((i % 2) != 0) 
		{
			pupils = 10 + rand() % 40;
		}
		sum = sum + pupils;
	}
	printf("%d", sum);
}
void task4()
{
	int pages = 17 + rand() % 100;
	int magazines =1+ rand()% 100 ;
	int sum = pages * magazines;
	printf("%d\n", sum);
}
void task3()
{
	int f = 10 + rand() % 30;
	int a;
	int sum = 0;
	for(int i=1;i<=f;i++)
	{
		 a = 100 + rand() % 10000;
		if (a >= 1000)
		{
			sum = sum + a;
		}


	} 
	printf("%d\n", sum);
}
void task2()
{
	int i = 0;
	int sum = 0;
	for (int i = -1; i < 50; i)
	{
		i = i + 2;
		printf("%d\n", i);

	}
}
void task1()
{
    int a, b, c, d, s, q,j, r;
	printf(" количество");
	scanf_s("%d", &r);
	a = r / 64;
	b = (r - (64 * a))/32;
	c = (r - ((64 * a))-(32*b)) / 16;
	d = ((r - (64 * a))-(32*b)-(16*c)) / 8;
	s = ((r - (64 * a)) - (32 * b) - (16 * c)-(8*d)) / 4;
	q = ((r - (64 * a)) - (32 * b) - (16 * c)-(8*d)-(4*s)) / 2;
	j = ((r - (64 * a)) - (32 * b) - (16 * c) - (8 * d) - (4 * s)-(q*2)) / 1;
	if (b>=2)
	{
		b = 0;
	}
	if (c >= 2)
	{
		c = 0;
	}
	if (d >= 2)
	{
		d = 0;
	}
	if (s >= 2)
	{
	  s = 0;
	}
	if (q >= 2)
	{
		q= 0;
	}
	if (j >= 2)
	{
		j = 0;
	}

	printf("%d\n\%d\n\%d\n%d\n%d\n%d\n%d\n",a,b,c,d,s,q,j);


}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task (вариант 2)");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		case 4: task4(); break;
		case 5: task5(); break;
		case 6: task6(); break;
		case 7: task7(); break;
		case 8: task8(); break;
		case 9: task9(); break;
		case 10: task10(); break;
		case 11: task11(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}
