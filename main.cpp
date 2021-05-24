//1.1 
#include<iostream> 
using namespace std;


void main()
{
	setlocale(LC_ALL, "Russian");

	int Var1;
	cout << "Ââåäèòå ÷èñëî: ";
	cin >> Var1;

	char Var2;
	cout << "Ââåäèòå áóêâó: ";
	cin >> Var2;

	float Var3;
	cout << "Ââåäèòå íåöåëîå ÷èñëî: ";
	cin >> Var3;

	double Var4;
	cout << "Ââåäèòå íåöåëîå ÷èñëî¹2: ";
	cin >> Var4;

	cout << "×èñëî = " << Var1 << endl << "Áóêâà = " << Var2 << endl << "Íåöåëîå ÷èñëî = " << Var3 << endl << "Íåöåëîå ÷èñëî ¹2 = " << Var4 << endl;
}
	//1.2
#include<iostream> 
		using namespace std;


	void main()
	{
		setlocale(LC_ALL, "Russian");

		char Var1, Var2, Var3, Var4, Var5;

		cout << "Ââåäèòå ñëîâî èç 5 áóêâ: ";

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
		cout << "Ââåäèòå ÷èñëî ¹1: ";
		cin >> Var1;

		int Var2;
		cout << "Ââåäèòå ÷èñëî ¹2: ";
		cin >> Var2;

		cout << "Ñóììà = " << Var1 + Var2 << endl << "Ðàçíèöà = " << Var1 - Var2 << endl << "Ïðîèçâåäåíèå = " << Var1 * Var2 << endl;
	}
	//1.4
#include<iostream> 
		using namespace std;


	void main()
	{
		setlocale(LC_ALL, "Russian");

		int n; // Êëåòêè
		int m; // Çàéöû

		cout << "Ââåäèòå êîëè÷åñòâî çàéöåâ: ";
		cin >> m;
		cout << "Ââåäèòå êîëè÷åñòâî êëåòîê: ";
		cin >> n;
		cout << "Ìàêñèìàëüíîå êîëè÷åñòâî çàéöåâ, êîòîðîå ãàðàíòèðîâàííî îêàæåòñÿ â 1 êëåòêå = " << (m + n - 1) / n << endl;
	}
	//1.5
#include<iostream> 
		using namespace std;


	void main()
	{
		setlocale(LC_ALL, "Russian");

		int a; // ñòîðîíà êâàäðàòà

		cout << "Ââåäèòå ñòîðîíó êâàäðàòà: ";
		cin >> a;
		cout << "Ïåðèìåòð êâàäðàòà = " << a * 4 << endl << "Ïëîùàäü êâàäðàòà = " << a * a << endl;
	}
	//1.6
#include<iostream> 
#include<cmath>
		using namespace std;


		void main()
		{
			setlocale(LC_ALL, "Russian");

			int a; // 1é êàòåò
			int b; // 2é êàòåò

			cout << "Ââåäèòå 1é êàòåò: ";
			cin >> a;
			cout << "Ââåäèòå 2é êàòåò: ";
			cin >> b;

			cout << "Ãèïîòåíóçà = " << sqrt((a * a) + (b * b)) << endl;
		}
		//1.7
#include<iostream> 
#include<cmath>
			using namespace std;


			void main()
			{
				setlocale(LC_ALL, "Russian");

				int N; // Êîë-âî øêîëüíèêîâ
				int K; // Êîë-âî ÿáëîê

				cout << "Ââåäèòå êîë-âî øêîëüíèêîâ: ";
				cin >> N;
				cout << "Ââåäèòå êîë-âî ÿáëîê: ";
				cin >> K;

				cout << "Êàæäîìó øêîëüíèêó äîñòàíåòñÿ ÿáëîê  " << K / N << endl;
			}
			//1.8
#include<iostream> 
#include<cmath>
				using namespace std;


			void main()
			{
				setlocale(LC_ALL, "Russian");

				float x;


				cout << "Ââåäèòå x: ";
				cin >> x;

				cout << "Çíà÷åíèå ôóíêöèè = " << x * x + 3 * x - 100 << endl;
			}
			//1.9
#include<iostream> 
				using namespace std;


			void main()
			{
				setlocale(LC_ALL, "Russian");

				cout << "Çàõàðîâ Àëåêñàíäð ÁÔÁÎ-01-20";
			}
			//1.10
				//Ïðîãðàììà äëÿ ðåøåíèÿ êâàäðàòíîãî óðàâíåíèÿ
#include<iostream> 
#include<cmath>
				using namespace std;


			void main()
			{
				setlocale(LC_ALL, "Russian");

				float a, b, c, D;

				cout << "Ââåäèòå êîýô-òû a, b, c ";
				cin >> a;
				cin >> b;
				cin >> c;
				D = b * b - 4 * a * c; // Îïðåäåëÿåì äèñêðèìèíàíò

				cout << "D = " << b * b - 4 * a * c << endl << "x1 = " << -b + sqrt(D) << endl << "x2 = " << -b - sqrt(D);
			}
			//1.11
#include<iostream> 
#include<cmath>
				using namespace std;


			void main()
			{
				setlocale(LC_ALL, "Russian");
				int ch = 10000; // ×àøêè
				int bl = ch; // Áëþäöà
				int l = ch; // Ëîæêè
				cout << "×àøêè = " << ch << endl << "Áëþäöà = " << bl << endl << "Ëîæêè = " << l << endl;


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
