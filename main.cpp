//1.1
#include<iostream> 
using namespace std;


void main()
{
	setlocale(LC_ALL, "Russian");

	int Var1;
	cout << "������� �����: ";
	cin >> Var1;

	char Var2;
	cout << "������� �����: ";
	cin >> Var2;

	float Var3;
	cout << "������� ������� �����: ";
	cin >> Var3;

	double Var4;
	cout << "������� ������� �����2: ";
	cin >> Var4;

	cout << "����� = " << Var1 << endl << "����� = " << Var2 << endl << "������� ����� = " << Var3 << endl << "������� ����� �2 = " << Var4 << endl;
}
	//1.2
#include<iostream> 
		using namespace std;


	void main()
	{
		setlocale(LC_ALL, "Russian");

		char Var1, Var2, Var3, Var4, Var5;

		cout << "������� ����� �� 5 ����: ";

		cin >> Var1 >> Var2 >> Var3 >> Var4 >> Var5;

		cout << Var1 << Var2 << Var3 << Var4 << Var5;
	}
	//1.3
#include<iostream> 
		using namespace std;


	void main()
	{
		setlocale(LC_ALL, "Russian");

		int Var1;
		cout << "������� ����� �1: ";
		cin >> Var1;

		int Var2;
		cout << "������� ����� �2: ";
		cin >> Var2;

		cout << "����� = " << Var1 + Var2 << endl << "������� = " << Var1 - Var2 << endl << "������������ = " << Var1 * Var2 << endl;
	}
	//1.4
#include<iostream> 
		using namespace std;


	void main()
	{
		setlocale(LC_ALL, "Russian");

		int n; // ������
		int m; // �����

		cout << "������� ���������� ������: ";
		cin >> m;
		cout << "������� ���������� ������: ";
		cin >> n;
		cout << "������������ ���������� ������, ������� �������������� �������� � 1 ������ = " << (m + n - 1) / n << endl;
	}
	//1.5
#include<iostream> 
		using namespace std;


	void main()
	{
		setlocale(LC_ALL, "Russian");

		int a; // ������� ��������

		cout << "������� ������� ��������: ";
		cin >> a;
		cout << "�������� �������� = " << a * 4 << endl << "������� �������� = " << a * a << endl;
	}
	//1.6
#include<iostream> 
#include<cmath>
		using namespace std;


		void main()
		{
			setlocale(LC_ALL, "Russian");

			int a; // 1� �����
			int b; // 2� �����

			cout << "������� 1� �����: ";
			cin >> a;
			cout << "������� 2� �����: ";
			cin >> b;

			cout << "���������� = " << sqrt((a * a) + (b * b)) << endl;
		}
		//1.7
#include<iostream> 
#include<cmath>
			using namespace std;


			void main()
			{
				setlocale(LC_ALL, "Russian");

				int N; // ���-�� ����������
				int K; // ���-�� �����

				cout << "������� ���-�� ����������: ";
				cin >> N;
				cout << "������� ���-�� �����: ";
				cin >> K;

				cout << "������� ��������� ���������� �����  " << K / N << endl;
			}
			//1.8
#include<iostream> 
#include<cmath>
				using namespace std;


			void main()
			{
				setlocale(LC_ALL, "Russian");

				float x;


				cout << "������� x: ";
				cin >> x;

				cout << "�������� ������� = " << x * x + 3 * x - 100 << endl;
			}
			//1.9
#include<iostream> 
				using namespace std;


			void main()
			{
				setlocale(LC_ALL, "Russian");

				cout << "������� ��������� ����-01-20";
			}
			//1.10
				//��������� ��� ������� ����������� ���������
#include<iostream> 
#include<cmath>
				using namespace std;


			void main()
			{
				setlocale(LC_ALL, "Russian");

				float a, b, c, D;

				cout << "������� ����-�� a, b, c ";
				cin >> a;
				cin >> b;
				cin >> c;
				D = b * b - 4 * a * c; // ���������� ������������

				cout << "D = " << b * b - 4 * a * c << endl << "x1 = " << -b + sqrt(D) << endl << "x2 = " << -b - sqrt(D);
			}
			//1.11
#include<iostream> 
#include<cmath>
				using namespace std;


			void main()
			{
				setlocale(LC_ALL, "Russian");
				int ch = 10000; // �����
				int bl = ch; // ������
				int l = ch; // �����
				cout << "����� = " << ch << endl << "������ = " << bl << endl << "����� = " << l << endl;


			}
			//1.12
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