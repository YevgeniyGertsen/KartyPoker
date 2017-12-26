#include <stdio.h>
#include <iostream>
#include <math.h>
#include <locale>
#include <time.h>
using namespace std;

enum mastiEnum
{
	piki = 100,
	kresti = 200,
	bubny = 300,
	chervi = 400
};

enum kartyEnum
{
	two = 2,
	three,
	four,
	five,
	six,
	seven,
	eight,
	nine,
	ten,
	valet,
	dama,
	karol,
	tuz
};
void printmast(mastiEnum n)
{
	switch (n)
	{
	case piki:
		cout << "piki" << endl;
		break;
	case kresti:
		cout << "kresti" << endl;
		break;
	case bubny:
		cout << "bubny" << endl;
		break;
	case chervi:
		cout << "chervi" << endl;
		break;
	}
}
void main()
{
	setlocale(LC_ALL, "Rus");
	int z;
	cout << "Kakoe zadanie?";
	cin >> z;
	srand(time(NULL));
	do
	{
		switch (z)
		{
		case 1:
		{
			/*1.	�������� ������ ���� ��������
				�� ������� ���������.����������
				����� ������ ������� �������*/
			int ocenki, sum = 0;
			for (int i = 1; i <= 2; i++)
			{
				cout << "Vvedite ocenki uchenika nomer " << i << "!\n";
				sum = 0;
				for (int u = 1; u <= 4; u++)
				{
					cin >> ocenki;
					sum += ocenki;
				}
				cout << sum << endl;
			}
		}
		break;

		case 2:
		{
			/*2.	�������� �������(� ����� � ���� 14, 5 ��� � �.�.)
				������� ������� ���� �������.����������
				������� ������� �������� ������� ������.
				� ������ ������ ������ 20 �������*/
			int vozrast = 5 + rand() % 13;
			int sum = 0, sum1 = 0;
			for (int kl = 1; kl <= 2; kl++)
			{
				sum = 0;
				srand(time(NULL));
				for (int i = 1; i <= 20; i++)
				{
					vozrast = 5 + rand() % 13;
					sum += vozrast;
					cout << vozrast << endl;
				}
				cout << endl;
				sum1 = sum / 20;
				cout << "Srednii vozrast " << sum1 << endl;

			}
		}
		break;

		case 3:
		{
			/*����������� ��������� �������� ���������� � �����.
				, � ������� �� ���������� ��������� �� �
				���������� B �����.� �����.���� ��� ����������
				����������� ������� �� 3 % .����������,
				����� ����� ����� ����� �����, ����� �������
				������� ���(10 �������), ��������� ������ ���
				������ � ��������� .*/
			int stipendiya;
			float rashody, rashody1;

			cout << "----------------\n";
			cout << "Stipendiyu: ";
			cin >> stipendiya;

			cout << "Rashody: ";
			cin >> rashody;
			cout << "----------------\n";

			for (int i = 1; i <= 10; i++)
			{

				rashody1 = rashody*0.03;
				//cout << rashody1 << endl;

				rashody += rashody1;
				cout << i << ". " << rashody << endl;
				cout << endl;
			}
			rashody = rashody + rashody * 9;
			cout << "Za 10 mesyacev rashody = " << rashody << endl;




		}
		break;

		case 4:
		{
			/*8.	������ ��������� ��� ���������� �����������
				�� $24 � 1826 �.������ ���� �� � ���������
				����� ��������� �� �����, ���� �� ��� 24 �������
				���� �������� ����� � ���� ��� 6 %
				�������� ������ ?*/
			float c = 24;
			float procent;
			for (int i = 1826; i <= 2017; i++)
			{
				procent = c * 0.06;//1.44
				c += procent;
				cout << i << "  =  " << procent << endl;
			}
			cout << "--------------------------" << endl;
			cout.precision(20);
			cout << c << endl;
		}
		break;

		case 5:
		{
			/*
			��������� ��������������� ������� �������� �� ������ � 52 ����� (2�10, �����, ����, ������, ��� � ������
			����, ������, �����, ����� ) ���� ���� � ���������� ���� �����.
			����� ����� ������������, ���� �� � ������� ������ ���� �� ����������:
			(a) ����: ��� ����� ������ ��������;
			(b) ���: ��� ����� ������ ��������;
			(c) ����: ���� ���� ����� �����
			*/

			enum mastiEnum masti;

			enum kartyEnum karty;

			int karta0, karta, karta1, karta2, karta3, karta4, karta5;
			int mast;
			for (int i = 1; i <= 5; i++)
			{
				karta = 2 + rand() % 12;//2.4.8.3.12.14
				mast = (1 + rand() % 4) * 100;//100.200.300.400

				cout << karta << " ";
				printmast((mastiEnum)mast);
				cout << endl;

				switch (i)
				{
				case 1:
					karta1 = mast + karta;//108.413
					break;
				case 2:
					karta2 = mast + karta;
					break;
				case 3:
					karta3 = mast + karta;
					break;
				case 4:
					karta4 = mast + karta;
					break;
				case 5:
					karta5 = mast + karta;
					break;
				}
			}
			//(a) ����: ��� ����� ������ ��������;
			int para = 0, res0, res1;
			for (int i = 1; i <= 5; i++)
			{
				switch (i)
				{
				case 1:
					karta = karta1;
					break;
				case 2:
					karta = karta2;
					break;
				case 3:
					karta = karta3;
					break;
				case 4:
					karta = karta4;
					break;
				case 5:
					karta = karta5;
					break;
				}

				for (int j = i + 1; j <= 5; j++)
				{
					switch (j)
					{
					case 2:
						karta0 = karta2;
						break;
					case 3:
						karta0 = karta3;
						break;
					case 4:
						karta0 = karta4;
						break;
					case 5:
						karta0 = karta5;
						break;
					}
					
					res0 = (karta0 - ((karta0 / 100) * 100));
					res1 = (karta - ((karta / 100) * 100));

					cout << karta0 << " = " << res0 << endl;
					cout << karta  << " = " << res1 << endl;
					cout << endl;
					if (res0 == res1)
					{
						para++;
						cout << "PARA" << endl;
						break;
					}
					
				}

				if (para > 0) break;
			}

		}
		}
	} while (z <= 0);

}



