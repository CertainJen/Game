#include <iostream>



void Menu(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);


void First(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);

void Second(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);


int Third(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);


void Fourht(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);


void Fifth(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);


void Six(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);


void Seven(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);
void Game(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);
void Eight(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);
void Ningt(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);
void Ten(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);
void Eleven(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);
void Sekret(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);

int main()
{
	setlocale(LC_ALL, "Rus");
	int Beda_Bashka = 0;
	int medal = 0;
	int fireresist = 0;
	int Bible = 0;
	int choose = 0;
	int Rezult_you = 0;
	int Rezult_Hit = 0;
	int krek = 0;
	Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	First(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Second(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Third(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	printf("%d ", Beda_Bashka);
	Fourht(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Fifth(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Six(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Game(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Eight(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Ningt(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Ten(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Eleven(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Sekret(Beda_Bashka, medal, fireresist, Bible, choose, krek);

}

void Menu(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	printf("�������� ������� �� ����\n 1-����� ����\n 2-��������� ����\n 3-����� �� ���� ");
	scanf_s("%d", &choose);
	
	switch (choose)
	{
	case 1:
	{
		printf("\n");
		int Beda_Bashka = 0;
		int medal = 0;
		int fireresist = 0;
		int Bible = 0;
		int choose = 0;
		First(Beda_Bashka, medal, fireresist, Bible, choose, krek);

	}
	break;
	case 2:
	{

	}
	break;
	case 3:
	{
		exit;
	}
	break;
	default:printf("No correct ");


	}
}

void First(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	/*������� ����� � ��������� � ��� �� ������ ������� ����. �� ���������� ����� ����� ���� ����������� � ��� ����� �������� �����.
 "����� ���������� �����?"
 ����������� ����� ������ �� ������ ����� , ������������ ������ ������������ � ��� ����.
 ������ ����� ������� , ��� �� ������� ������� , ���� � ���. ������ ���� � ���� ������� ������ �������, � ����� ��� ����� ������� ������� � ������ �������.
 �������� ��������� ������� � ������� ��� ������
 - ��, ������.
 - �� ���?
 ������� ����������� ������� �������.
 - �? � ������. �� � ���.*/
	printf("1 ");
	scanf_s("%d", &choose);
	
	switch (choose)
	{
	case 1:
	{
		printf("2 ");
		printf("/*���? ���? � �� ������� �� ������ �� ���� �����!!!!!������ ��������� ��������� ����� � ������ �� ��� �����. ��� ������� ��������� � ���������� �� ��������.*/");

		system("pause");
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	case 2:
	{
		printf("3 ");
		printf("/*���, ����� � ���� ����� ������� . ���� ������� ������, ����� ��� ����� � ������ ����� ������ ������.- � �� ������. �� ��� ��, ��� �����. ���� ����� ��� ��� ���- �� ������ ������-�� ��������� �������- ���� ����� ���� */");
		Second(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	default:printf("No correct ");


	}
}

void Second(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	printf("2 ");
	/*�������� ������� ���������� ������. ������� �������� �����-�� ����, �������� ����� ��� �������� �����, ����������� ����� � �����. �� ��� �������� ��������� ���� �����- ��� ��������� ���������, ������� �� ������� ����, ���������� ����������� ����.
������� � ����� ����� ������� ������ �������� ����� ��������, ������� ���������� ��� ������ ������ . �� ����� ������������ �� ���������, ������ �� ���� �����.
- �, ����� ������� � ����� ��������� ������� ! ������ �� ���� ������� �����. ��� ������ ������ ��� � ��������� ����? � ������.- �� �������� �������� ����*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{
		/*������ ���� � ���������� �� �����.*/
		Third(Beda_Bashka, medal, fireresist, Bible, choose, krek);


	}
	break;
	case 2:
	{
		/*����������� ����������� �� ����. */
		Third(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}

	break;
	default:printf("No correct ");
	}
}

 int Third(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	printf("3 ");
	/*- �� ��� ���- ��������� ����� �� - ������ ��� ����� ������. ��� ��� ���� � ����������� ����� ����� - ��� ����� ����� ��� ��������� ������! ��� ������� ��� ������ ?*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{
		/*����� ������ ������� � ���� � ����� ������� ������. ������� ������ �������� ������� � ������ ���������� ���� ����. ������ � ����� �� ���� �������! ����� ��� �� ����� , ��� ��� ��������.*/
		Beda_Bashka = Beda_Bashka + 1;
		printf("%d ", Beda_Bashka);
		/*- �� ��� ���- �������� ������- � ���� ������� ��� ���� ������ ������ ��� , � ���������� ����� �����-��! �� ������ ����� ������ ?????
�������, ������� , ��� ������ �������� ��� ��� �� �������� ��������� ����� �� ����� .*/
		Fourht(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	case 2:
	{
		medal = medal + 1;
		/*��������������� ���� � �������� ��������� ��������� ��� ��������� ������� � ������. ���������� ������ ���������� ������� �� ����� � ���������� ���� ������� ������ ��������� �������. ���������� �������� ��������� ������� �� ���������� ���������� ��� ��������� ��������. ����� �������� ������� � ������������� ���������� ��������� . */
	/*������ ��������� � ���-�� ��������� ��� ������� ������ ��������������� � ��������.
- � ���������� ��� , ������� ���������� ������ � ������ ��� ��� ��� ������ ! ������ ����� ��������� ������ ������� � ��� �������� !
� ������ ��� � ���� ���� ���� !
������� ������������ ������� �� ������� � ������������� �� �������� .*/
		Fourht(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	case 3:
	{

		Beda_Bashka = Beda_Bashka + 1;
		/*������� ������� !!!! ����������� ������� ������ ��������� ���� ��� ���� ���� �������� �� ������� � ���� ������ �� ��������. �������� ������ ������ ����� � ������ � �����.*/
	/*- �� ��� ���- �������� ������- � ���� ������� ��� ���� ������ ������ ��� , � ���������� ����� �����-��! �� ������ ����� ������ ?????
�������, ������� , ��� ������ �������� ��� ��� �� �������� ��������� ����� �� ����� .*/
		Fourht(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}

	default:printf("No correct ");
	}
	return (Beda_Bashka);
}

void Fourht(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	printf("4 ");
	/*����� ������������ �� ����� ������� ������ �������������� ��������. �� ����� ������� ������ � ������� ������ ������ �� ������ ����� , ��������� � ����� �������.
- ���� ������� ������ � ��������� ������ ���� !
���������� ������� ������� �� ������ ������� � ��� � ���.
- � ������ ! � �������� , ����������� , � ��... � �� ���� ���� ����� . � ��� �� ������� �� ��� . � ����� �� �� ���� ��������. ������ - �� ��������� ������� ����� - ��� ����� . ���� � ���� � �������� �� �����!*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{
		/*1) ������� � ���� ������� ������� ������ �� ���������, � ����� ��� �������� ������� ����. �� ��������� ���� ���������� � �������� .*/
		Beda_Bashka = Beda_Bashka + 1;
		printf("%d ", Beda_Bashka);
		Fifth(Beda_Bashka, medal, fireresist, Bible, choose, krek);


	}
	break;
	case 2:
	{
		/*��, �������, � ��������� ������ ���� ��� ��� ��� �� ����� ��� ��� ���� �����, ������, �����.*/
	/*�� ��� ��� ����� �� ������� - �� �������� �������� , ��������� ��������!*/
		Fifth(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;


	default:printf("No correct ");
	}
}

void Fifth(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	printf("5 ");
	/*��� � ������� �������� ��� �������? �������� �������! � ����� ����� �������� � ���� �������� ����������. ������� �� ���� � ������ ���� ���������� .
������ ���� ������ � ��� ������� ������ ������ , �������� �� ����������� �� ��������� ������ ������ . �� ����������� ������ �� ������� � ���� � �������� ��� �� - �������.*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{

		/*������� � �������� �������������� ����������� .*/
		Six(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	case 2:
	{
		/*���������� ����*/
		Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;


	default:printf("No correct ");
	}

}


void Six(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	printf("6 ");
	/*��������� ������� ����������� � �������� ������� �������
- ����������, � �����...- �� �����- ���� � ����� ������! ���� ��������� ���� �� � ���� ��� ... ������� ���. ������� �����������. �� ������ �� ���-�� ��������� ������*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{

		/*��������� ����������� ������*/
		if (medal == 1) printf(" �� ������� ������\n");
		else
		{
			printf(" �� �� ������� ��������� ������ ����� �� ����������\n");
			break;
		}
		/*������� ����� ������ �������� �� ���� ��������, �� ���������� ����� ��������� , ���� �������� ���� ��������� � ��������� ������� ����� �����, �������� ��� ������
����� ��� ��� �����-�� ���������� � ������ �� ����, ������� ����� �������.*/
		Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	case 2:
	{
		/*����������� ����.*/
		Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;


	default:printf("No correct ");
	}

}

void Seven(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	printf("7 ");
	/*������ ��������� �� �������� ��� � ������� ������� , �� ������.
- � ����� ������� � ����� ? ���� ��������, ����� ��� ����� !*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{

		/*�������*/
		

	}
	break;
	case 2:
	{
		/*�� �� ��� ������� ��� �����. �� ����� �� ������ ����� �� ?*/
	/*�����, �� ����� . ����� �� �����.*/
		

	}
	break;


	default:printf("No correct ");
	}
}

void Game(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{

	choose = rand() % 6;
	krek = rand() % 6;
	if (choose == krek)
	{
		printf(" % d", choose);
		printf(" % d", krek);
		krek = 0;
		(" �����\n");
		Game( Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	else
	{
		if (choose > krek)
		{
			
			printf(" % d", choose);
			printf(" % d", krek);
			krek = 0;
			(" ������! ����������.�� ���� ���������.���� ���� ������ ������ �������� ������ - �� ������ ������� � �� �����, ������� � ���������, �� ��� ���� ����� ������� �� ����������� ����� ����.����� ��� � ������� �� �� �����.\n");
			
			Eight(Beda_Bashka, medal, fireresist, Bible, choose, krek);

		}
		else
		{
			printf(" % d", choose);
			printf(" % d", krek);
			krek = 0;
			(" ���������\n");
			Beda_Bashka = Beda_Bashka + 1;
			Eight(Beda_Bashka, medal, fireresist, Bible, choose, krek);
		}
		
		
	}

}

void Eight(int Beda_Bashka, int medal, int fireresist, int Bible, int choose,int krek)
{
	printf("8 ");
	/*������ �� ������� � ����� ������������ �� �������� ���������� �� ��������� ��������, ������� �� ���� ����� ������� ���� ����� ������� ������, ���������� �� � ��������
- � �������! ������ ���! ��� ���� �� ���� ��� �������� �� ������� �������! ������� ��!*/

	/*1) ������� ���� ����������� ��������, ������� �������� ����� �� ����������� .
2) �������� �� ������� �������� ����� ����� � �������. */
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{
		if (medal == 1) 
		{ 
			printf(" �� ����������� ������\n");
			/*- ������� ���� ! ���� ��� ���� ���� , �� ���� ����������. � � ����� �� ������� �������, ������ ��� ������������ ��� ���������� .*/
			krek = 1;
	}
		else
		{
			printf(" �� �� ������� �������� ������\n");
			Eight(Beda_Bashka, medal, fireresist, Bible, choose, krek);
		}
		

	}
	break;
	case 2:
	{
		/*- ������� ���� ! ���� ��� ���� ���� , �� ���� ����������. � � ����� �� ������� �������, ������ ��� ������������ ��� ���������� .*/
		krek = 1;
	}
	break;


	default:printf("No correct ");
	}
}

void Ningt(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	/*1) ����� � �����.
	2) ��������� �� ���, ���������� ��� ����� .*/
	if (Beda_Bashka > 3)
	{
		printf(" ����������������������-������� �������- � ������ ������.\n");
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{
		/*��������� ��� ������� �������� �� ������ �� ����� �����, � ������� ����� .
�� ������ �������, ������� �������� � ������������ �� ������ ����� � ���������.
- �������� , �������, ����*/
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);

	}
	break;
	case 2:
	{
		Ten(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;


	default:printf("No correct ");
	}


}

void Ten(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	if (Beda_Bashka > 3)
	{
		printf(" ����������������������-������� �������- � ������ ������.\n");
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	/*��� �� ������� ������� ��������� �������, ������� ���������� ������ - �� ��������, ��� �� ��������� �� ��������.
		- ������, ������ !- ������ ��� - ��� ����� ���� ������!������� ��� ��� �� ��������� �� ��������!*/
	/*1) ��������� �� ��������- �� ����-�������� ��������
2) �������� � �������� , ��������� ������� ���������.
3) ������ ��� ������� �������� � �������
- ������, �� �� ���������, �� �������� , ��?*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{

		Beda_Bashka = Beda_Bashka + 1;
	}
	break;
	case 2:
	{
		Beda_Bashka = Beda_Bashka + 1;
	}
	break;
	case 3:
	{

	/*����������!- ������, ������������, ��� ��������, ����, ������� ����������� �������� ����� - ��� ������, ��� ������.����� ����������.*/
		Bible = Bible + 1;
	}
	break;
	default:printf("No correct ");
	}



}

void Eleven(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	if (Beda_Bashka > 3)
	{
		printf(" ����������������������-������� �������- � ������ ������.\n");
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	/*������ �� ������� �� ������ ��� ��� �� ����������� ������ ������� ���, ��� �� ������� ���������.
�� ������ ������� ������ , ��� ���� ����� ��� �����.
1)�������� ���� ������ .
2) ���� � �����.
3) ������ � ������� �������� �������.*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{

		/*�� ������ �������, ������� �������� � ������������ �� ������ ����� � ���������.
- �������� , �������, ����.*/
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	case 2:
	{

		/*�� ������ �������, ������� �������� � ������������ �� ������ ����� � ���������.
- �������� , �������, ����.*/
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	case 3:
	{

		
		/*�� ���������� � ������� � �������� ��� �� ���� . ����� �������-�� �������� ���� � ������������ ��� ����.
- �� ��� ������� ! ����� �� ���� ����� ����� ! ������ ���� �� ����� ������ , ���. � �� � ���� ��� ���� ������� �� ������ �������� � ��� ������� ���������� .
- ����� �����.
- � ����� �������� �� ������ .*/
		Sekret(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	default:printf("No correct ");
	}

}

void Sekret(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{

	/*������� ����� ������� � ������������� ���������.
- �������! -�������� �������� �����.-������� � ��� ����� ������� ����� ! � ������ ����� ����� ���������. ���� �� �������� !*/

}