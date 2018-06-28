#include <stdlib.h>
#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int task;
	cin >> task;
	if (task == 1)
	{
		int n,option;
		int sum = 0;
		int k = 0;
		int k_z = 0;
		double avg;
		switch (option)
		{
		case 1:
			cout << "sum=" << sum << endl;
			break;
		case 2:
			cout << "N=" << k << endl;
			break;
		case 3:
			cout << "N_0" << k_z << endl;
			break;
		case 4:
			cout << "Avg=" << avg << endl;
			break;
		}
		
		while (true)
		{
			cout << "ENTER NUMBER:" << endl;
			cin >> n;
			cout << "enter 1 to sum" << endl;
			cout << "entre 2 for number of digits" << endl;
			cout << "enter 3 for number of 0" << endl;
			cout << "enter 4 for average number" << endl;
		}
		while(n)
		{
			sum += n % 10; //kol. nulei
			if (n % 10 == 0)
			k_z++;
			k++;
			n=n/10;
		}
		avg = double(sum) / k;
		cout << sum << "\t" << k << "\t" << k_z << "\t" << avg << endl;

	}
	if (task == 2)
	{
		int x, y,z;
		cin >> x;
		cin >> y>>z;
		char a,b;
		cin >> a;
		cin >> b;
		for (int i = 0; i < x; i++)
		{
			swap(a, b);
			for (int ii = 0; ii < z; ii++) {
				for (int z = 0; z <= y; z++) {
					for (int jj = 0; jj < z; jj++)
						cout << a;
					for (int jj = 0; jj < z; jj++)
						cout << b;
				}
				cout << endl;

			}
		}
			}
	if (task == 3)
	{
		/*char a;
		cin >> a;*/
		int x;
		cin >> x;
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < x; j++)
			{
				if (i <= j)
					cout << '+';
				else
					cout << ' ';
			}
			cout << endl;
		}

		
	}
		
}
