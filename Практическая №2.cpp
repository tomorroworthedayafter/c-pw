//2.1
/*По двум введенным пользователем катетам вычислить длину 
гипотенузы. .*/

#include<iostream> 
#include<cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int a; // 1й катет
	int b; // 2й катет

	cout << "Введите 1й катет: ";
	cin >> a;
	cout << "Введите 2й катет: ";
	cin >> b;

	cout << "Гипотенуза = " << sqrt((a * a) + (b * b)) << endl;
}
//2.2
/*Найти сумму и произведение цифр трехзначного числа, которое 
вводит пользователь.*/
#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int a, b, c, d;
	cout << "Введите трёхзначное число: ";
	cin >> a;
	b = a / 100;
	a = a % 100;
	c = a / 10;
	a = a % 10;
	d = a;
	cout <<"Произведение цифр = "<<b * c * d << " " <<"Сумма цифр = "<< b + c + d;
}
//2.3
/*По введенным пользователем координатам двух точек вывести
уравнение прямой, проходящей через эти точки*/

#include<iostream> 
#include<cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	float A, B;
	cout << "Введите A = ";
	cin >> A;

	cout << "Введите B = ";
	cin >> B;

	cout << "Общее уравнение прямой " << A << "x+" << B << "y+C=0" << endl;

}
//2.4
/*Рассчитать месячные выплаты(m) и суммарную выплату(s) по
кредиту.О кредите известно, что он составляет n рублей, берется
на y лет, под p процентов.*/

#include<iostream> 
#include<cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	float s, m, n, y, p;

	cout << "Сумма кредита " << endl << "Количество лет " << endl << "Проценты " << endl;
	
	cin >> n >> y >> p;

	m = n * p / 100; 
	s = n + y * m; 

	cout << "Месячные выплаты по кредиту = " << m << endl << "Суммарная выплата = " << s << endl;
}
//2.5
/*Пользователь вводит два числа. Одно присваивается одной 
переменной, а второе - другой. Необходимо поменять значения 
переменных так, чтобы значение первой оказалось во второй, а 
второй - в первой*/

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cin >> a >> b;
	swap(a, b);
	cout << a << endl << b << endl;
}
//2.6
/*Вводится четырёхзначное число (abcd). Вывести сумму ab + cd. */

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int x, a, b, c, d;
	cout << "Введите четырёхзначное число: ";
	cin >> x;
	a = x / 1000;
	x = x % 1000;
	b = x / 100;
	x = x % 100;
	c = x/10;
	x = x % 10;
	d = x;

	cout << a * b + c * d << endl;
}
//2.7
/*Допустим, организации часто требуется красить баки 
цилиндрической формы. При этом они красят только верхнюю часть и стенки с внешней стороны. Организации требуется программа, 
которая бы определяла, сколько банок краски необходимо для 
покраски того или иного бака. */

#include<iostream> 
#include<cmath>
#define PI 3.14159265
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	float x, H, R, so, sb, Vr, Vb, sk; /*x-кол-во нужных банок краски, H-высота циллиндра, R-радиус циллиндра, so-площадь покраски,sb-площадь боковой поверхности, sk-площадь крышки, Vr-расход краски на еденицу площади бака, Vb-объем банки*/

	cout << "Введите высоту бака: ";
	cin >> H;
	cout << "Введите радиус бака: ";
	cin >> R;
	cout << "Введите расход краски на еденицу площади бака: ";
	cin >> Vr;
	cout << "Введите объём одной банки с краской: ";
	cin >> Vb;

	sb = 2 * PI * R * H;
	sk = PI * R * R;
	so = sb + sk;
	x = (so * Vr) / Vb;
	cout << "Банок на бак нужно " << x << endl;
}	
//2.8
/*Найти периметр: а) прямоугольника, ширина и длина вводятся с 
клавиатуры. */

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	float a, b;

	cout<<"Длина прямоугольника: ";
	cin >> a;
	
	cout << "Ширина прямоугольника: ";
	cin >> b;

	cout << "Периметр прямоугольника = " << (2 * a) + (2 * b) << endl;
}

/*Найти периметр: а) треугольника, длины всех сторон вводятся с 
клавиатуры. */

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	float a, b, c;

	cout<<"1я сторона: ";
	cin >> a;
	
	cout << "2я сторона: ";
	cin >> b;

	cout << "3я сторона: ";
	cin >> c;

	cout << "Периметр треугольника = " << a + b + c << endl;
}

/*Найти периметр: а) четырёхугольника, длины всех сторон вводятся с 
клавиатуры. */

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	float a, b, c, d;

	cout<<"1я сторона: ";
	cin >> a;
	
	cout << "2я сторона: ";
	cin >> b;

	cout << "3я сторона: ";
	cin >> c;

	cout << "4я сторона: ";
	cin >> d;

	cout << "Периметр четырёхугольника = " << a + b + c + d << endl;
}
//2.9
/*Найти объем шара радиуса R и площадь его поверхности.  */

#include<iostream> 
#include<cmath>
#define PI 3.14159265
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	float R;

	cout << "Радиус шара = ";
	cin >> R;
	cout << "Площадь поверхности шара = " << 4 * PI * R * R << endl << "Объём шара = " << (4 * PI * R * R * R)/3 << endl;
}
//2.10
/*Найти площадь поверхности и объем кругового цилиндра, радиус 
основания которого равен R, а высота h. */

#include<iostream> 
#include<cmath>
#define PI 3.14159265
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	double R,h;
	cout << "Радиус кругового цилиндра = ";
	cin >> R;
	cout << "Высота кругового цилиндра = ";
	cin >> h;
	cout << "Объём цилиндра = " << PI * R * R * h << endl << "Площадь поверхности = " << (2 * PI * R) * (R + h) << endl;
}
//2.11
/*Найти площадь осевого сечения прямого кругового конуса с 
радиусом основания R и образующей L. */

#include<iostream> 
#include<cmath>
//#define PI 3.14159265
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	double R, L, H;
	cout << "Радиус основания конуса = ";
	cin >> R;
	cout << "Образующая конуса = ";
	cin >> L;
	H = sqrt((L * L) - (R * R));
		cout << "Площадь осевого сечения прямого кругового конуса = " << R * H << endl;
}
//2.12
/*Найти площадь поверхности и объем прямого кругового конуса с 
радиусом основания R и высотой h. */

#include<iostream> 
#include<cmath>
#define PI 3.14159265
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	double R, h, l;

	cout << "Радиус основания конуса = ";
	cin >> R;

	cout << "Высота конуса = ";
	cin >> h;

	l = sqrt((R * R) + (h * h));

	cout << "Объём = " << (PI * R * R * h) / 3 << endl << "Площадь поверхности = " << (PI * R) * (l + R);
}
