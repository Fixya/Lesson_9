#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*For1. Даны целые числа K и N (N > 0). Вывести N раз число K.*/
	/*int K, N;
	cin >> K >> N;
	for (int i = 0; N > i; i++) {
		cout << K << endl;
	}*/

	/*For2. Даны два целых числа A и B (A < B). Вывести в порядке возрастания все
целые числа, расположенные между A и B (включая сами числа A и B), а
также количество N этих чисел.
*/
	/*int a, b;
	cin >> a >> b;
	int n = 0;
	for (int i = a; i <= b; i++) {
		n++;
		cout << i << endl;
	}
	cout << n << " чисел" << endl;*/

	/*Составьте программу, выводящую на экран квадраты чисел от 10 до 20.*/
	/*int s = 3;
	for (int i = 10; i <= 20; i++) {
		s = i * i;
		cout << i << " * " << i << " = " << s << endl;
	}*/

	/* Составьте программу, котораЯ вычисляет сумму чисел от 1 до n.значение n вводится с клавиатуры.*/
	/*int n;
	cin >> n;
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s = s + i;
	}
	cout << s << endl;*/

	/*Составьте программу, составьте программу,
	которая вычисляет произведение чисел от 1 до n.n вводится с клавиатуры.*/
	/*int n;
	cin >> n;
	int s = 1;
	for (int i = 1; i <= n; i++) {
		s = s * i;
	}
	cout << s << endl;*/

	/* С клавиатуры вводятся n чисел. Составьте программу, которая определяет кол-во отрицательных,
	кол-во положительных и кол-во нулей среди введеных чисел.Значение n вводится с клавиатуры.*/
	/*int n;
	cin >> n;
	int kp = 0;
	int ko = 0;
	int kn = 0;
	for (int i = 1; i <= n; i++) {
		int s;
		cin >> s;
		if (s > 0) {
			kp++;
		}
		else {
			if (s < 0) {
				ko++;
			}
			else {
				kn++;
			}
		}
	}
	cout << " кол-во положительных  " << kp << " кол-во отрицательных  " << ko << "  кол-во нулей  " << kn << endl;*/

	/*Составьте программы перевода старинных русских мер длины, торгового и аптекарского веса(счетчик цикла от 1 до 10)
	* из дюймов в сантиметры(1 дюйм равен 2,5 см)*/
	/*double s = 0;
	for (int i = 1; i <= 10; i++) {
		s = 2.5 * i;
	cout << i << " дюймов" << " = " << s << " сантиметров" << endl;
	}*/

	/* В сберкассу на трёхпроцентный вклад положили S рублей.Какой станет сумма вклада через N лет.*/
/*int s, n;
double y;
cin >> s >> n;
for (int i = 1; i <= n; i++) {
	double pr = 0.03 * s + s;
	y = pr * i;
}
cout << y;*/
}