//№1
/*(вызов числа при вводе тогоже числа)*/

#include <iostream>
#include <cmath> 

using namespace std;

int f()
{
    static int n;
    n++;
    return n;
}
void main()
{
    for (int i = 0; i < 10; i++)
        cout << f() << " ";
}

//№2
/*Написать процедуру без параметров, при первом вызове печатающую 
«Good morning!», при втором — «Good afternoon!», при третьем — 
«Good evening!», при четвертом — снова «Good morning!», и далее по 
циклу. */

#include <iostream>
#include <cmath> 

using namespace std;

char f(int x)
{
    if (x % 3 == 1)
        cout<<"Good morning!";
    else if (x % 3 == 2)
        cout<<"Good afternoon!";
    else if (x % 3 == 0)
        cout<<"Good evening!";
}
int main()
{
    int l;
    cout<<"Введите число";
    cin>>l;
    cout << f(l) << endl;
}

//№3
/* Написать функцию, управляющую целочисленным значением 
следующим образом: сначала значение равно 0, и при каждом вызове 
устанавливается новое значение (равное значению параметра), и 
возвращается старое. */

#include <iostream>
#include <cmath> 

using namespace std;

int f(int x)
{
    static int new1 = 0, old = 0;
    static bool start = true;

    if (start == true) {
        new1 = x;
        x = 0;
        old = x;
        start = false;
    }
    else {
        if (old != x) {
            old = new1;
            new1 = x;
        }
    }
    return old;
}
int main()
{
    int x;
    for (int i = 0; i < 10; i++) {
        cin >> x;
        cout<< f(x);
    }
    return 0;
}

//№5
/*Написать функцию с одним вещественным параметром x, 
возвращающую среднее арифметическое всех переданных этой функции параметров*/
#include <iostream>
#include <cmath> 

using namespace std;

double f(double a)
{
    static double sum = 0., num = 0.;
    double avg;
    num += 1;
    sum += a;
    avg = sum / num;
    return (avg);
}
int main()
{
    double x;
    for (int i = 0; i < 3; i++) 
    {
        cin >> x;
        cout << f(x);
    }
    return 0;
}

//№6
/*Написать функцию с целым параметром m, результат которой равен 
1+(параметр предыдущего вызова).*/

#include <iostream>
#include <cmath> 

using namespace std;

int f(int m)
{
    static int old = 0, num;
    num = 1 + old;
    old = m;
    return num;
}
int main()
{
    int x;
    for (int i = 0; i < 4; i++) {
        cin>>x;
        cout<<f(x);
    }
    return 0;
}

//№7
/*Написать функцию с целым параметром m, результат которой равен 
сумме параметров трех последних вызовов этой функции. */

#include <iostream>
#include <cmath> 

using namespace std;

int f(int m)
{
    static int old1 = 0, old2 = 0, old3 = 0, sum;
    sum = old1 + old2 + old3; 
    old3 = old2;
    old2 = old1;
    old1 = m;
    sum = old1 + old2 + old3; 
    return sum;
}
int main()
{
    int x;
    for (int i = 0; i < 4; i++) {
        cin>> x;
        cot<< f(x);
    }
    return 0;
}

//№8
/*Объявить два целочисленных массива с разными размерами и 
написать функцию, которая заполняет их элементы значениями и 
показывает на экран. Функция должна принимать два параметра – 
массив и его размер. */

#include <iostream>
#include <cmath> 
#include <ctime>

using namespace std;

template <typename T>
void f(T a[], int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 100;
        cout<< a[i];
        if ((i + 1) % 10 == 0) {
            cout<<"\n";
        }
    }
    cout<<"\n";
}
int main()
{
    const int sizea = 10, sizeb = 20;
    int a[sizea], b[sizeb];
    f(a, sizea);
    f(b, sizeb);
    return 0;
}

//№9
/*Необходимо создать двумерный массив 5 х 5. Далее написать 
функцию, которая заполнит его случайными числами от 30 до 60. 
Создать еще две функции, которые находят максимальный и 
минимальный элементы этого двумерного массива.*/

#include <iostream>
#include <cmath> 
#include <ctime>

using namespace std;

template <typename T>
void maxfunc(T a[])
{
    setlocale(LC_ALL, "ru");

    int max = a[0][0];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    cout << "Максимальный элемент : " << max << endl;
}

template <typename T>
void minfunc(T a[])
{
    setlocale(LC_ALL, "ru");

    int minn = 0, minm = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] < a[minn][minm]) {
                a[minn][minm] = a[i][j];
            }
        }
    }
    cout << "Минимальный элемент: " << a[minn][minm] << endl;
}

template <typename T>
void f(T a[])
{
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            a[i][j] = rand() % 30 + 30;
            cout << a[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    int a[5][5];
    f(a);
    minfunc(a);
    maxfunc(a);
    return 0;
}
