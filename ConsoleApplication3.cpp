#include <iostream>
#include <string>
using namespace std;

template<typename T>
void podmina(T*, T,int);

template<> void podmina<char>(char*, char, int);

template<typename T>
void out(T*, int);

template<typename T>
T input() {
	T i;
	bool fail = true;
	cout << "\nInput:";
	do
	{
		cin >> i;
		if (cin.fail() || cin.rdbuf()->in_avail() > 1)
			cout << "\nError" << endl;
		else
			fail = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (fail);
	return i;
}

int main()
{
	int mint[] = { 1,2,3,4,5,6,7,8 };
	char chairman[] = { 'a','b','c','o','o','y','e','w' };
	double dogma[] = { 1.7,76.5,7.4,9.08,-4.56,2.4544 };
	char k_c;
	int k_i = input<int>();
	cout << "\nInput: ";
	cin >> k_c;
	double k_d = input<double>();
	podmina(mint, k_i, 8);
	out(mint, 8);
	podmina(chairman, k_c, 8);
	out(chairman, 8);
	podmina(dogma, k_d, 6);
	out(dogma, 6);
	return 0;
}

template <typename T>
void podmina(T* mass, T key,int size)
{
	int temp;
	for (int i = 0; i < size; i++) {
		temp = i;
		for(int j = temp + 1; j < size; j++)
			if (mass[j] == mass[temp]) {
				mass[j] = key;
				mass[i] = key;
			}
	}
}

template <typename T>
void out(T* ar, int size)
{
	int i;
	for (i = 0; i < size; i++)
		std::cout << ar[i] << " ";
	cout << endl;
}

template<> void podmina<char>(char* mass, char key, int size)
{
	int temp;
	for (int i = 0; i < size; i++) {
		temp = i;
		for (int j = temp + 1; j < size; j++)
			if (mass[j] == mass[temp]) {
				mass[j] = key;
				mass[i] = key;
			}
	}
}