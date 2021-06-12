/1.1
/*В массиве, содержащем положительные и отрицательные целые 
числа, вычислить сумму четных положительных элементов.*/

#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
    srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100 - 50;
	}

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > 0 && arr[i] % 2 == 0)
			sum += arr[i];
	}
	cout << sum;
}

/1.2
/*В массиве найти максимальный элемент с четным индексом.*/

#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
    srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];
	int max = -50;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100 - 50;
	}

	for (int i = 0; i < SIZE; i += 2)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << max << endl;
}
/1.3
/*Найти в массиве те элементы, значение которых меньше среднего 
арифметического, взятого от всех элементов массива. */

#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
    srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];
	int sum = 0;
	int sr = 0;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
		sum += arr[i];
	}

	sr = sum / SIZE;
  
	for (int i = 0; i < SIZE; i ++ )
	{
		if (arr[i] < sr )
		{
			cout << arr[i]<<endl;
		}
	}
	
}
/1.4
/* В одномерном массиве целых чисел определить два наименьших 
элемента. Они могут быть как равны между собой (оба являться 
минимальными), так и различаться.  */

#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];
	int min1 = 101;
	int min2 = 101;
        int b

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}

    if (arr[0] < arr[1]) {
        min1 = 0;
        min2 = 1;
    }
    else {
        min1 = 1;
        min2 = 0;
    }

    for (int i = 2; i < SIZE; i++) {
        if (arr[i] < arr[min1]) {
            b = min1;
            min1 = i;
            if (arr[b] < arr[min2]) min2 = b;
        }
        else {
            if (arr[i] < arr[min2]) min2 = i;
        }
    }
    cout << min1 << endl;
    cout << min2 << endl;
}
/1.5
/* Сжать массив, удалив из него все элементы, величина которых 
находится в интервале [а, b]. Освободившиеся в конце массива 
элементы заполнить нулями. */

#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

    int const SIZE = 10;
    int arr[SIZE];
    int i, a, b, k, p;

    cout << "Введите a и b ";
    cin >> a >> b;

    for (i = 0; i < SIZE; i++) 
    {
        arr[i] = a + rand() % (b - a);
        cout<< arr[i];
    }
    cout<<"\n\n";

    cout<<"Удаляемый диапазон[a, b]:";
    cin>>a>>b;

    i = 0;
    p = SIZE;
    while (i < p)
        if (arr[i] <= b && arr[i] >= a) {
            p -= 1;
            for (k = i; k < p; k++)
                arr[k] = arr[k + 1];
        }
        else
            i += 1;

    for (i; i < SIZE; i++)
        arr[i] = 0;
    for (i = 0; i < SIZE ; i++) {
        cout<< arr[i];
    }
	
}
/1.6
/*Вычислить сумму модулей элементов массива, расположенных после 
первого отрицательного элемента.*/

#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

    const int size = 10;
    int arr[size];
    int i, sum = 0;

    for (i = 0; i < size; i++) {
        arr[i] = rand() % 10 - 5;
        cout << arr[i] << endl;
    }
    

    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            for (i = i + 1; i < size; i++) {
                sum += abs(arr[i]);
            }
        }
    }
    cout << "Сумма = " << sum << endl;
	
}
/1.7
/*Найти номер минимального по модулю элемента массива.*/

#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

    const int size = 10;
    int arr[size];
    int i, min = 0;

    for (i = 1; i < size; i++) {
        arr[i] = rand() % 20 - 10;
        cout << arr[i] << endl;
    }

    min = 0;
    for (i = 1; i < size; i++)
        if (abs(arr[i]) < abs(arr[min]))
            min = i;

    cout << "Индекс минимального модуля элемента: " << min;
	
}
/1.8
/*Найти сумму всех цифр целочисленного массива.*/

#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

    const int size = 10;
    int arr[size];
    int i, num;
    int sum = 0;
    
    for (i = 1; i < size; i++) 
    {
        arr[i] = rand() % 20 ;
        cout << arr[i] << endl;
        num = arr[i];

        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
    }

    cout <<"Сумма = " << sum << endl;
	
}
/1.9
/*Дан целочисленный массив В[1..4, 1..3]. Заменить все его элементы 
их квадратами. */

#include <iostream>
#include <ctime>
#include <cmath> 

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

    const int n = 4, m = 3;
    int b[n][m];
    int i, j;

    srand(time(NULL));
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            b[i][j] = rand() % 10 + 1;
            cout<< b[i][j];
        }
        cout << "\n";
    }
  

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            b[i][j] *= b[i][j];
            cout<< b[i][j];
        }
        cout << "\n";
    }
    
}
/1.10
/* Заполнить двумерный массив случайными числами от 10 до 100. 
Посчитать сумму элементов отдельно в каждой строке и 
определить номер строки, в которой эта сумма максимальна. */

#include <iostream>
#include <ctime>
#include <cmath> 

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

    const int n = 4, m = 4;
    int b[n][m];
    int i, j, maxn, maxm, sum, maxsum;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            b[i][j] = rand() % 90 + 10;
            cout <<" "<< b[i][j] ;
        }
        cout << "\n";
    }

    maxn = 0;
    maxm = 0;
    maxsum = 0;
    for (i = 0; i < n; i++) {
        sum = 0;
        for (j = 0; j < m; j++) {
            sum += b[i][j];
            if (b[i][j] > b[maxn][maxm]) {
                b[maxn][maxm] = b[i][j];
            }
            else if (b[maxn][maxm] < b[maxn][j])
                b[maxn][maxm] = b[maxn][j];
        }
        cout << "Сумма = " << i + 1 << "Строки = " << sum << endl;
        if (maxsum < sum) {
            maxsum = sum;
        }
    }
    cout << "Максимальная сумма строки: " << maxsum << endl;
    cout << "Максимальный элемент матрицы: " << b[maxn][maxm] << endl;
}
