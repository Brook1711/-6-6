#include<iostream>
#include<string>
using namespace std;

int main()
{
	string sky[10] = { "��","��","��","��","��","��","��","��","��","��" };
	string earth[12] ={ "��","��","��","��","��","��","��","î","��","��","��","δ"};
	int s, e;
	int total;
	cin >> total;
	if (total >= 2016)
	{
		total = total - 2016;
		s = total % 10;
		e = total % 12;
	}
	else
	{
		total -= 2016;
		s = total;
		e = total;
		while (s < 0)
		{
			s += 10;
		}
		while (e < 0)
		{
			e += 12;
		}
	}
	cout << sky[s] + earth[e];
	//system("pause");
	return 0;
}