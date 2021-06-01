//4.1
/*В спортзал ежедневно приходит какое - то количество посетителей.
Необходимо предложить пользователю ввести такие данные : сколько
человек посетило спортзал за день, ввести возраст каждого
посетителя и в итоге показать возраст самого старшего и самого
молодого из них, а так же посчитать средний возраст посетителей.*/

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	
	int age; 
	int maxAge = 0; 
	int minAge = 100;
	int sum = 0; 
	int average = 0; //средний возраст
	int p = 0; // количество посетителей 

	cout << "Введите количество посетителей спортзала: " << endl;
	cin >> p;

	for (int i = 0; i < p; i++)
	{
		cout << "Введите возраст " << i + 1 << "-го посетителя: "; 
		cin >> age;

		if (age > maxAge)
		{
			maxAge = age;
		}
		if (age < minAge)
		{
			minAge = age;
		}
		sum += age;
	}

	average = sum / p; // подсчет среднего возраста

	cout << "Средний возраст всех посетителей: " << average << endl;
	cout << "Самый взрослый: " << maxAge << endl;
	cout << "Самый молодой: " << minAge << endl;

}
//4.2
/*На складе имеется определённое количество ящиков с яблоками (в 
нашем примере 15). Когда подъезжает машина для погрузки, 
попросить пользователя ввести, сколько ящиков загрузить в первую 
машину, во вторую и так далее, пока не закончатся ящики с 
яблоками. Предусмотреть тот случай, когда пользователь введёт 
количество ящиков больше, чем есть на складе. */

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	
	int k = 15; //кол-во ящиков на складе
	int a; //кол-во ящиков которое будем грузить в машину

	for (int i = 1; ; i++)
	{
		cout << "Ящиков загрузить в " << i << "-ю машину ";
		cin >> a;

		if (a > k)
		{
			cout << "Ящиков не хватает " << endl;
			cout << "Осталось ящиков " << k << endl;
			i--;
		}
		else
		{
			k -= a;
				cout << "Осталось ящиков " << k << endl;
		}
		if (k == 0)
		{
			cout << "Кончились ящики ";
			break;
		}
	}
}
	
//4.3
/*Необходимо суммировать все нечётные целые числа в диапазоне, 
который введёт пользователь с клавиатуры.*/

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	
	int sum = 0;

	int rangeBegin, rangeEnd;

	cout << "Введите начало диапазона " << endl;
	cin >> rangeBegin;

	cout << "Введите конец диапазона " << endl;
	cin >> rangeEnd;

	do
	{
		if (rangeBegin % 2 != 0)
		{
			sum += rangeBegin;
		}
		rangeBegin++;
	} while (rangeBegin < rangeEnd);

	cout << "Сумма всех целых нечётных чисел в указанном диапазоне = " << sum << endl;
}

//4.4

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int h = 0; 

    cout << "Введите высоту  равнобедренного треугольника: ";
    cin >> h;

    for (int i = 0; i < h; i++)
    {
        for (int j = 1; j < h - i; j++)
        {
            cout << ' ';
        }

        for (int j = h - 2 * i; j <= h; j++)
        {
            cout << '^';
        }
        cout << endl;
    }
    return 0;
}
//4.5
/*С клавиатуры вводится натуральное число. Найти его наибольшую 
цифру.*/

#include<iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a, maxCifra;

	cout << "Введите число ";
	cin >> a;

	maxCifra = a % 10;
	a = a / 10;
	
	while (a > 0)
	{
		if (a % 10 > maxCifra)
			maxCifra = a % 10;
		a = a / 10;
	}
	cout << "Наибольшая цифра " << maxCifra << endl;
}
//4.6	
#include <iostream>
#include <ctime>
#define N 1000
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");
    
    srand(time(NULL));

    int i;
    int j = 0;
    
    for (i = 0; i < N; i++)
    {
        if (rand() % 100 % 2 == 0)
            j += 1;
        cout << (j / N) * 100 << "%" << endl;
    }
    
}
//4.7
/*Напишите программу, доказывающую или проверяющую, что для 
множества натуральных чисел выполняется равенство: 
1+2+...+n = n(n+1)/2, где n - любое натуральное число.*/

#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");

    int n, sum;
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << "Sum = " << sum << endl;
}
//4.8
/*В программе генерируется случайное целое число от 0 до 100. 
Пользователь должен его отгадать не более чем за 10 попыток. После 
каждой неудачной попытки должно сообщаться больше или меньше 
введенное пользователем число, чем то, что загадано. Если за 10 
попыток число не отгадано, то вывести загаданное число. */

#include <iostream>
#include <ctime>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");

    srand(time(NULL));

    int n, i, o;
    n = rand() % 100;
    i = 1;

    while (i <= 10)
    {
        cout << i << "-я попытка ";
        cin >> o;

        if (o < n)
        {
            cout << "Меньше нужного" << endl;
        }
        else if (o > n)
        {
            cout << "Больше нужного" << endl;
        }
        else
        {
            cout << "Угадано" << endl;
            break;
        }
        i += 1;
    }
    if (i == 11)
    {
        cout << "Не угадано. Загаданное число " << n << endl;
    }
}
//4.9
/*Вывести на экран коды и символы таблицы ASCII, начиная с символа 
под номером 32 и заканчивая 127-м включительно. Вывод выполнить 
в табличной форме: по десять пар "код-символ" в каждой строке. */

#include <iostream>
using namespace std;

void main()
{
    char i;
    for (i = 32; i <= 127; i++)
    {
        cout << i << "-";
        if (i % 10 == 0)
        {
            cout << "\n";
        }
        if (i == 127)
        {
            break;
        }
    }
}
//4.10
/*Посчитать четные и нечетные цифры введенного натурального числа. */

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a, ch, nech;
	int kch = 0;
	int knech = 0;

	cout << "Введите число ";
	cin >> a;

	while (a > 0)
	{
		if (a % 10 % 2 == 0)
		{
			kch++;
		}
		else
		{
			knech++;
		}

		a = a / 10;
	}
	cout << "Количество четных " << kch << endl;
	cout << "Количество нечетных " << knech << endl;

}
//4.11
/*Вывести на экран столько элементов ряда Фибоначчи, сколько указал 
пользователь. Например, если на ввод поступило число 6, то вывод 
должен содержать шесть первых чисел ряда Фибоначчи: 1 2 3 5 8 13. */

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int k, i, c;
	int a = 1;
	int b = 2;

	cout << "Введите количество чисел ";
	cin >> k;
	cout << a;
	cout <<" "<< b;

	for (i = 3; i <= k; i++)
	{
		cout <<" "<< a + b;
		c = a;
		a = b;
		b = c + a;
	}
	
}
//4.12
/*Вывести на экран ряд натуральных чисел от минимума до максимума 
с шагом. Например, если минимум 10, максимум 35, шаг 5, то вывод 
должен быть таким: 10 15 20 25 30 35. Минимум, максимум и шаг 
указываются пользователем (считываются с клавиатуры).  */

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int rangeBegin, rangeEnd, step;

	cout << "Введите начало диапазона " << endl;
	cin >> rangeBegin;

	cout << "Введите конец диапазона " << endl;
	cin >> rangeEnd;

	cout << "Введите шаг " << endl;
	cin >> step;

	while (rangeBegin <= rangeEnd)
	{
		cout <<" "<< rangeBegin;
		rangeBegin += step;
	}
}
//4.13
/*Сформировать из введенного числа обратное по порядку входящих в 
него цифр и вывести на экран.*/

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a, b;

	b = 0;

	cout << "Введите число ";
	cin >> a;

	while (a > 0)
	{
		b = b * 10 + a % 10;
		a = a / 10;
	}

	cout << b;
	
}
//4.14
/*Найти сумму и произведение цифр, введенного натурального числа*/

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a, sum, pr, b;

	sum = 0;
	pr = 1;
	b = 0;

	cout << "Введите число ";
	cin >> a;

	while (a > 0)
	{
		b = a % 10;
		sum += b;
		pr *= b;
		a = a / 10;
	}

	cout << "Sum = " << sum << endl;
	cout << "Pr = " << pr << endl;
}
//4.15
/*.Написать программу, которая будет складывать, вычитать, умножать 
или делить два числа. Числа и знак операции вводятся пользователем. 
После выполнения вычисления программа не должна завершаться, а 
должна запрашивать новые данные для вычислений. Завершение 
программы должно выполняться при вводе символа '0' в качестве 
знака операции. Если пользователь вводит неверный знак (не '0', '+', '-
', '*', '/'), то программа должна сообщать ему об ошибке и снова 
запрашивать знак операции. Также сообщать пользователю о 
невозможности деления на ноль, если он ввел 0 в качестве делителя. */

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a, b;
	char s = '+';
	while (s != '0')
	{
		cout<< "Знак ";
		cin >> s;
		if (s == '0')
		{
			break;
		}
		if (s == '+' || s == '-' || s == '*' || s == '/')
		{
			cout << "Введите 2 числа " << endl;
			cin >> a >> b;
		}
	

		switch (s)
		{
		case '+':
			cout << "result " << a + b << endl;
			break;
		case '-':
			cout << "result " << a - b << endl;
			break;

		case '*':
			cout << "result " << a * b << endl;
			break;

		case '/':
			if (b != 0)
			{
				cout << "result " << (float)a / b << endl;
			}
			else
			{
				cout << "На ноль делить нельзя" << endl;
			}

		}
	
	}
}
