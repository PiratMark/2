#include < iostream >

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int number;
	int t_number;
	int digits[4];
	cin >> number;
	t_number = abs(number);
	if (t_number < 1000 || t_number > 9999)
		cout << "err";
	else {
		for (int i = 0; t_number != 0; t_number /= 10, i++)
			digits[i] = t_number % 10;
		t_number = digits[2] * 1000 + digits[3] * 100 + digits[0] * 10 + digits[1];
		cout << (number > 0 ? t_number : t_number * -1);
	}
	return 0;
}
