//3.1
// Из двух случайных чисел, одно из которых четное, а другое 
нечетное, определить и вывести на экран нечетное число.*/

#include<iostream> 
using namespace std;

void main()
{
	setlocale( LC_ALL, "ru" );
	int a, b;
	cin >> a >> b; 
	if (a % 2 != 0)
	{
		cout << a << endl;
	}
	else
	{
		cout << b << endl;
	}

}
//3.2
/*Вводятся три разных числа. Найти, какое из них является средним 
(больше одного, но меньше другого).*/

#include<iostream> 
#include <algorithm>
using namespace std;

void main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << (a + b + c) - max(a, max(b, c)) - min(a, (b, c));
}
//3.3
/*Перевести число, введенное пользователем, в байты или килобайты 
в зависимости от его выбора.*/

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a, selection;
	cout << "Вводим число в битах" << endl;
	cin >> a;


	cout << "Перевод в " << endl <<
		"1. байты" << endl <<
		"2. килобайты" << endl;

	cin >> selection;
	switch (selection)
	{
	case 1:
		cout << "Число в байтах " << a / 8 << endl;
		break;
	case 2:
		cout << "Число в килобайтах " << a / 8 / 1024 << endl;
		break;
	}
}
//3.4
/*Вводится целое число, обозначающее код символа по таблице
ASCII. Определить, это код английской буквы или какой-либо иной
символ.*/

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cin >> a;
	if (a > 64 and a < 91)
	{
		cout << "Это код английской буквы ";
	}
	else if (a > 96 and a < 123)
	{
		cout << "Это код английской буквы ";
	}
	else  
	{
		cout << "Это НЕ код английской буквы ";
	}

}
//3.5
/*Вводятся два целых числа. Проверить делится ли первое на второе. 
Вывести на экран сообщение об этом, а также остаток (если он есть) 
и частное (в любом случае)..*/

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b  = ";
	cin >> b;
	if (a % b ==  0 and a>b)
	{
		cout << "Число делится. a/b = " << a / b << endl;
	}
	else if (a % b != 0 and a>b)
	{
		cout << "Частное от деления a/b = " << a / b << endl << "Остаток от деления a/b = " << a % b << endl;
	}
	else
	{
		cout << "Число не делится";
	}
}
//3.6
/* Определить, является ли год, который ввел пользователем,
високосным или невисокосным. .*/

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cout << "Введите год " << endl;
	cin >> a;
	if (a % 100 == 0 and a % 400 != 0)
	{
		cout << "Год не високосный " << endl;
	}
	
	else if (a % 4 != 0)
	{
		cout << "Год не високосный " << endl;
	}
	else  
	{
		cout << "Год  високосный " << endl;
	}
}
//3.7
/* Найти корни квадратного уравнения и вывести их на экран, если они 
есть. Если корней нет, то вывести сообщение об этом. Конкретное 
квадратное уравнение определяется коэффициентами a, b, c, которые 
вводит пользователь.*/

#include<iostream> 
#include<cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	float a, b, c, D;

	cout << "Введите коэф-ты квадратного уравнения " << endl;
	cin >> a >> b >> c;

	D = b * b - 4 * a * c;
	
	if (D > 0)
	{
		cout << "x1 =  " << (-b + sqrt(D)) / 2 * a << endl << "x2 = " << (-b - sqrt(D)) / 2 * a << endl;
	}
	else if (D == 0)
	{
		cout << "x = " << -b / 2 * a << endl;
	}
	else
	{
		cout << "Нет корней " << endl;
	}

	
}
//3.8
/* Определить четверть координатной плоскости, которой 
принадлежит точка. Координаты точки ввести с клавиатуры. */

#include<iostream> 
#include<cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	float a, b;
	cin >> a >> b;

	if (a > 0 and b > 0)
	{
		cout << "1я четверть ";
	}
	else if (a < 0 and b > 0)
	{
		cout << "2я четверть ";
	}
	else if (a < 0 and b < 0)
	{
		cout << "3я четверть ";
	}
	else if (a > 0 and b < 0)
	{
		cout << "4я четверть ";
	}
	else
	{
		cout << "Точка располагается на оси координат ";
	}
}
3.9//
/*Вводятся координаты (x;y) точки и радиус круга (r). Определить 
принадлежит ли данная точка кругу, если его центр находится в 
начале координат */

#include<iostream> 
#include<cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	float x, y, r, z; //z-гипотенуза, x и y - координаты точки, радиус круга

	cin >> x >> y >> r; // поочередно вводим координату x, координату y, радиус круга
	
	z = sqrt(x * x + y * y);

	if (z > r)
	{
		cout << "Точка не принадлежит кругу " << endl;
	}
	else
	{
		cout << "Точка принадлежит кругу " << endl;
	}
}
//3.10
/*.Вводятся три целых числа. Определить какое из них наибольшее.  */

#include<iostream> 
#include <algorithm>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a, b, c;
	cin >> a >> b >> c;
	cout << max(a, max(b, c));
}
//3.11
/*По длинам трех отрезков, введенных пользователем, определить 
возможность существования треугольника, составленного из этих 
отрезков. Если такой треугольник существует, то определить, 
является ли он разносторонним, равнобедренным или 
равносторонним. */

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	float a, b, c;
	cin >> a >> b >> c;
	
	if (a > 0 and b > 0 and c > 0 and a == b and a == c and b == c)
	{
		cout << "Треугольник равносторонний" << endl;
	}
	else if (a > 0 and b > 0 and c > 0 and ( (a == b and c != a) || ( a == c and a != b) || (b == c and b != a)))
	{
		cout << "Треугольник равнобедренный " << endl;
	}
	else if (a > 0 and b > 0 and c > 0 and a != b and a != c and b != c)
	{
		cout << "Треугольник разносторонний " << endl;
	}
	else
	{
		cout << "Треугольник не существует" << endl;
	}
}
//3.12
/*.Даны круг и квадрат. Составьте программу, определяющую по 
введенным вами значениям длин стороны квадрата и радиуса круга, 
одно из утверждений «Круг может быть вписан в квадрат» или 
«Квадрат может быть вписан в круг».  */

#include<iostream> 
#include<cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	float a, r, c; // a - сторона квадрата , r - радиус круга, c - диагональ квадрата
	
	cin >> a >> r;
	c = sqrt(a * a + a * a);
	
	if (a / 2 == r)
	{
		cout << "Круг можно вписать в квадрат " << endl;
	}
	else if (c / 2 == r)
	{
		cout << "Квадрат можно вписать в круг " << endl;
	}
	else
	{
		cout << "Круг нельзя вписать в квадрат и квадрат нельзя вписать в круг " << endl;
	}
	
}
//3.13
/*Напишите программу, которая анализирует человека по возрасту и 
относит к одной из четырех групп: дошкольник, ученик, работник, 
пенсионер. Возраст человека вводится с клавиатуры.  */

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a;
	cout << "Введите возраст человека ";
	cin >> a;
	if (a > -1 && a < 7)
	{
		cout << "Дошкольник " << endl;
	}
	else if (a > 7 && a < 24 )
	{
		cout << "Ученик " << endl;
	}
	else if (a > 24 && a < 66)
	{
		cout << "Работник " << endl;
	}
	else if (a > 65)
	{
		cout << "Пенсионер " << endl;
	}
	else
	{
		cout << "Труп" << endl;
	}
//3.14
/*Приём на работу идёт на конкурсной основе. Условия приёма 
требуют 20 лет рабочего стажа и возраста не более 42 лет. 
Определите, будет ли человек принят.  */

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a, b; //a - возраст, b - рабочий стаж
	cout << "Введите возраст человека ";
	cin >> a;
	cout << "Введите рабочий стаж ";
	cin >> b;
	if (a < 43 && b >= 20)
	{
		cout << "Человек будет принят на работу " << endl;
	}
	else
	{
		cout << "Человек не будет принят на работу " << endl;
	}
}

