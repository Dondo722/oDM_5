#include <iostream>
#include <vector>
#include <limits>

using namespace std;

void show(vector<int> m, vector<int> mm)
{
	for (int i = 0; i < m.size(); i++)
	{
		cout << "<" << m[i] << "," << mm[i] << ">";
		if (i + 1 != m.size())
			cout << ",";
	}
}
void peresech(vector<int> X, vector<int> Y, vector<int> U, vector<int> V);
void obed(vector<int> X, vector<int> Y, vector<int> U, vector<int> V);
void raznost(vector<int> X, vector<int> Y, vector<int> U, vector<int> V);
void simraz(vector<int> X, vector<int> Y, vector<int> U, vector<int> V);
void sout(vector<int> one, vector<int> two, vector<int> three, vector<int> threen2);
void invers(vector<int> one, vector<int> two);
void compoz(vector<int> X, vector<int> Y, vector<int> U, vector<int> V);
void graf_help(vector<int> X, vector<int> Y, vector<int> U, vector<int> V);
vector<int> hhelp(vector<int> one);
void obraz(vector<int> one, vector<int> two, int val);
void proobraz(vector<int> one, vector<int> two, int val);
void suzhen(vector<int> X, vector<int> Y, vector<int> temp);

int main()
{
	vector<int> temp;
	int s, ss;
	int t, tt;

	setlocale(LC_ALL, "ru");

	cout << "Введите мощность A графика первого соответствия A (mA < 15)\n";
	cin >> s;
	vector<int> X(s);
	vector<int> Y(s);
	cout << "Введите мощность B графика второго соответствия B (mB < 15)\n";
	cin >> ss;
	vector<int> U(ss);
	vector<int> V(ss);
	cout << "Последовательно введите " << s << " пар графика соответствия A";
	for (int i = 0; i < s; i++)
	{
		cout << "\nВведите " << i + 1 << " соответствие:  ";
		cin >> t;
		X[i] = t;
		cin >> t;
		Y[i] = t;
	}
	cout << "\nПоследовательно введите " << ss << " пар графика соответствия B";
	for (int i = 0; i < ss; i++)
	{
		cout << "\nВведите " << i + 1 << " соответствие:  ";
		cin >> t;
		U[i] = t;
		cin >> t;
		V[i] = t;
	}
	system("cls");
	while (true)
	{
		cout << "Выберите действие :\n1-операция пересечения соответствий A и B\n2-операция объединения соответствий A и B\n3-операция разности соответствий A и B\n";
		cout << "4-операция разности соответствий B и A\n5-операция симметрической разности соответствий A и B\n6-операция инверсии соответствия A\n7-операция инверсии соответствия B\n";
		cout << "8-операция композиции соответствий A и B\n9-операция композиции соответствий B и A\n10-операция нахождения образа соответствия A\n";
		cout << "11-операция нахождения прообраза соответствия A\n12-операция нахождения образа соответствия B\n13-операция нахождения прообраза соответствия B\n";
		cout << "14-операция сужения соответствия A\n15-операция продолжения соответствия A\n16-операция сужения соответствия B\n17-операция продолжения соответствия B\n";
		cout << "0-выход из программы\n";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> t;
		switch (t)
		{
		case 0:
			return 0;
			break;
		case 1:
			system("cls");
			cout << "\nоперация пересечения соответствий A и B\n";
			peresech(X, Y, U, V);
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			cout << "\nоперация объединения соответствий A и B\n";
			obed(X, Y, U, V);
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			cout << "\nоперация разности соответствий A и B\n";
			raznost(X, Y, U, V);
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			cout << "\nоперация разности соответствий B и A\n";
			raznost(U, V, X, Y);
			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");
			cout << "\nоперация симметрической разности соответствий A и B\n";
			simraz(X, Y, U, V);
			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");
			cout << "\nоперация инверсии соответствия A\n";
			invers(X, Y);
			system("pause");
			system("cls");
			break;
		case 7:
			system("cls");
			cout << "\nоперация инверсии соответствия B\n";
			invers(U, V);
			system("pause");
			system("cls");
			break;
		case 8:
			system("cls");
			cout << "\nоперация композиции соответствий A и B\n";
			compoz(X, Y, U, V);
			system("pause");
			system("cls");
			break;
		case 9:
			system("cls");
			cout << "\nоперация композиции соответствий B и A\n";
			compoz(U, V, X, Y);
			system("pause");
			system("cls");
			break;
		case 10:
			system("cls");
			cout << "Введите значение элемента соответствия для нахожденя его образа\n";
			cin >> t;
			obraz(X, Y, t);
			system("pause");
			system("cls");
			break;
		case 11:
			system("cls");
			cout << "Введите значение элемента соответствия для нахожденя его прообраза\n";
			cin >> t;
			proobraz(Y, X, t);
			system("pause");
			system("cls");
			break;
		case 12:
			system("cls");
			cout << "Введите значение элемента соответствия для нахожденя его образа\n";
			cin >> t;
			obraz(U, V, t);
			system("pause");
			system("cls");
			break;
		case 13:
			system("cls");
			cout << "Введите значение элемента соответствия для нахожденя его прообраза\n";
			cin >> t;
			proobraz(V, U, t);
			system("pause");
			system("cls");
			break;
		case 14:
			system("cls");
			cout << "Введите мощность множества для определения сужения\n";
			cin >> t;
			cout << "Введите множество для определения сужения\n";
			for (int i = 0; i < t; i++)
			{
				cout << endl << i + 1 << " элемент множества ";
				cin >> tt;
				temp.push_back(tt);
			}
			cout << "Cужение соответствия :";
			suzhen(X, Y, temp);
			system("pause");
			system("cls");
			break;
		case 15:
			system("cls");
			cout << "\nоперация продолжения соответствия A\n";
			show(X, Y);
			cout << endl;
			system("pause");
			system("cls");
			break;
		case 16:
			system("cls");
			cout << "Введите мощность множества для определения сужения\n";
			cin >> t;
			cout << "Введите множество для определения сужения\n";
			for (int i = 0; i < t; i++)
			{
				cout << endl << i + 1 << " элемент множества ";
				cin >> tt;
				temp.push_back(tt);
			}
			cout << "Cужение соответствия :";
			suzhen(U, V, temp);
			system("pause");
			system("cls");
			break;
		case 17:
			system("cls");
			cout << "\nоперация сужения соответствия B\n";
			show(X, Y);
			cout << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}

void sout(vector<int> one, vector<int> two, vector<int> three, vector<int> threen2)
{
	cout << "<{";
	if (one.size() != NULL)
	{
		for (int i = 0; i < one.size(); i++)
		{
			cout << one[i];
			if (i + 1 != one.size())
				cout << ",";
		}
		cout << "}";
	}
	if (two.size() != NULL)
	{
		cout << "{";
		for (int i = 0; i < two.size(); i++)
		{
			cout << two[i];
			if (i + 1 != two.size())
				cout << ",";
		}
		cout << "}";
	}
	if (three.size() != NULL)
	{
		cout << "{";
		show(three, threen2);
		cout << "}";
	}
	cout << ">\n";
}
void peresech(vector<int> X, vector<int> Y, vector<int> U, vector<int> V)
{
	vector<int> one;
	vector<int> two;
	vector<int> three;
	vector<int> threen2;

	for (int i = 0; i < X.size(); i++)
		for (int j = 0; j < U.size(); j++)
		{
			if (X[i] == U[j])
			{
				one.push_back(X[i]);
			}
			if (Y[i] == V[j])
			{
				two.push_back(Y[i]);
			}
			if (X[i] == U[j] && Y[i] == V[j])
			{
				three.push_back(X[i]);
				threen2.push_back(Y[i]);
			}
		}

	if (one.size() == NULL && two.size() == NULL && three.size() == NULL)
	{
		cout << "\nсоответствия не пересекаются \n";
	}
	else
	{
		sout(one, two, three, threen2);
	}

}
void obed(vector<int> X, vector<int> Y, vector<int> U, vector<int> V)
{
	vector<int> one = X;
	vector<int> two = Y;
	vector<int> three = X;
	vector<int> threen2 = Y;
	int buff;
	for (int i = 0; i < U.size(); i++)
	{
		one.push_back(U[i]);
		two.push_back(V[i]);
		three.push_back(U[i]);
		threen2.push_back(V[i]);
	}


	for (int i = 0; i < one.size() - 1; i++)
	{
		for (int k = 1; k < one.size(); k++)
		{
			if (one[i] == one[k] && i != k)
			{
				buff = i;
				while (i < one.size() - 1)
				{
					one[i] = one[i + 1];
					i++;
				}
				i = buff;
				one.pop_back();
			}
		}
	}
	for (int i = 0; i < two.size() - 1; i++)
	{
		for (int k = 1; k < two.size(); k++)
		{
			if (two[i] == two[k] && i != k)
			{
				buff = i;
				while (i < two.size() - 1)
				{
					two[i] = two[i + 1];
					i++;
				}
				i = buff;
				two.pop_back();
			}
		}
	}
	for (int i = 0; i < three.size() - 1; i++)
	{
		for (int k = 1; k < three.size(); k++)
		{
			if (three[i] == three[k] && threen2[i] == threen2[k] && i != k)
			{
				buff = i;
				while (i < three.size() - 1)
				{
					three[i] = three[i + 1];
					threen2[i] = threen2[i + 1];
					i++;
				}
				i = buff;
				three.pop_back();
				threen2.pop_back();
			}
		}
	}

	sout(one, two, three, threen2);
}
void raznost(vector<int> X, vector<int> Y, vector<int> U, vector<int> V)
{
	vector<int> one;
	vector<int> two;
	vector<int> three;
	vector<int> threen2;
	vector<int> oneX = hhelp(X);
	vector<int> twoX = hhelp(Y);
	vector<int> threeX = X;
	vector<int> threen2X = Y;

	for (int i = 0; i < X.size(); i++)
		for (int j = 0; j < U.size(); j++)
		{
			if (X[i] == U[j])
			{
				one.push_back(X[i]);
			}
			if (Y[i] == V[j])
			{
				two.push_back(Y[i]);
			}
			if (X[i] == U[j] && Y[i] == V[j])
			{
				three.push_back(X[i]);
				threen2.push_back(Y[i]);
			}
		}

	int buff;
	for (int i = 0; i < oneX.size(); i++)
		for (int j = 0; j < one.size(); j++)
		{
			if (oneX[i] == one[j])
			{
				buff = i;
				while (i < oneX.size() - 1)
				{
					oneX[i] = oneX[i + 1];
					i++;
				}
				oneX.pop_back();
				i = buff;
				if (oneX.size() == 0)
				{
					oneX.push_back(0);
					break;
				}
			}
		}
	for (int i = 0; i < twoX.size(); i++)
		for (int j = 0; j < two.size(); j++)
		{
			if (twoX[i] == two[j])
			{
				buff = i;
				while (i < twoX.size() - 1)
				{
					twoX[i] = twoX[i + 1];
					i++;
				}
				twoX.pop_back();
				i = buff;
				if (twoX.size() == 0)
				{
					twoX.push_back(0);
					break;
				}
			}
		}
	for (int i = 0; i < threeX.size(); i++)
		for (int j = 0; j < three.size(); j++)
		{
			if (threeX[i] == three[j] && threen2X[i] == threen2[j])
			{
				buff = i;
				while (i < threeX.size() - 1)
				{
					threeX[i] = threeX[i + 1];
					threen2X[i] = threen2X[i + 1];
					i++;
				}
				threeX.pop_back();
				threen2X.pop_back();
				i = buff;
				if (threeX.size() == 0)
				{
					threeX.push_back(0);
					threen2X.push_back(0);
					break;
				}
			}
		}

	sout(oneX, twoX, threeX, threen2X);
}
void simraz(vector<int> X, vector<int> Y, vector<int> U, vector<int> V)
{
	vector<int> one;
	vector<int> two;
	vector<int> three;
	vector<int> threen2;
	vector<int> oneX = hhelp(X);
	vector<int> twoX = hhelp(Y);
	vector<int> threeX = X;
	vector<int> threen2X = Y;
	int buff;//объединение
	for (int i = 0; i < U.size(); i++)
	{
		oneX.push_back(U[i]);
		twoX.push_back(V[i]);
		threeX.push_back(U[i]);
		threen2X.push_back(V[i]);
	}


	for (int i = 0; i < oneX.size() - 1; i++)
	{
		for (int k = 1; k < oneX.size(); k++)
		{
			if (oneX[i] == oneX[k] && i != k)
			{
				buff = i;
				while (i < oneX.size() - 1)
				{
					oneX[i] = oneX[i + 1];
					i++;
				}
				i = buff;
				oneX.pop_back();
			}
		}
	}
	for (int i = 0; i < twoX.size() - 1; i++)
	{
		for (int k = 1; k < twoX.size(); k++)
		{
			if (twoX[i] == twoX[k] && i != k)
			{
				buff = i;
				while (i < twoX.size() - 1)
				{
					twoX[i] = twoX[i + 1];
					i++;
				}
				i = buff;
				twoX.pop_back();
			}
		}
	}
	for (int i = 0; i < threeX.size() - 1; i++)
	{
		for (int k = 1; k < threeX.size(); k++)
		{
			if (threeX[i] == threeX[k] && threen2X[i] == threen2X[k] && i != k)
			{
				buff = i;
				while (i < threeX.size() - 1)
				{
					threeX[i] = threeX[i + 1];
					threen2X[i] = threen2X[i + 1];
					i++;
				}
				i = buff;
				threeX.pop_back();
				threen2X.pop_back();
			}
		}
	}

	//разность
	for (int i = 0; i < X.size(); i++)
		for (int j = 0; j < U.size(); j++)
		{
			if (X[i] == U[j])
			{
				one.push_back(X[i]);
			}
			if (Y[i] == V[j])
			{
				two.push_back(Y[i]);
			}
			if (X[i] == U[j] && Y[i] == V[j])
			{
				three.push_back(X[i]);
				threen2.push_back(Y[i]);
			}
		}

	for (int i = 0; i < oneX.size(); i++)
		for (int j = 0; j < one.size(); j++)
		{
			if (oneX[i] == one[j])
			{
				buff = i;
				while (i < oneX.size() - 1)
				{
					oneX[i] = oneX[i + 1];
					i++;
				}
				oneX.pop_back();
				i = buff;
				j = -1;
				if (oneX.size() == 0)
				{
					oneX.push_back(0);
					break;
				}
			}
		}
	for (int i = 0; i < twoX.size(); i++)
		for (int j = 0; j < two.size(); j++)
		{
			if (twoX[i] == two[j])
			{
				buff = i;
				while (i < twoX.size() - 1)
				{
					twoX[i] = twoX[i + 1];
					i++;
				}
				twoX.pop_back();
				i = buff;
				j = -1;
				if (twoX.size() == 0)
				{
					twoX.push_back(0);
					break;
				}
			}
		}
	for (int i = 0; i < threeX.size(); i++)
		for (int j = 0; j < three.size(); j++)
		{
			if (threeX[i] == three[j] && threen2X[i] == threen2[j])
			{
				buff = i;
				while (i < threeX.size() - 1)
				{
					threeX[i] = threeX[i + 1];
					threen2X[i] = threen2X[i + 1];
					i++;
				}
				threeX.pop_back();
				threen2X.pop_back();
				i = buff;
				j = -1;
				if (threeX.size() == 0)
				{
					threeX.push_back(0);
					threen2X.push_back(0);
					break;
				}
			}
		}

	sout(oneX, twoX, threeX, threen2X);
}
void invers(vector<int> one, vector<int> two)
{
	cout << "Старая область отправления: {";
	for (int i = 0; i < one.size(); i++)
	{
		cout << one[i];
		if (i + 1 != one.size())
			cout << ",";
	}
	cout << "}\n";
	cout << "Старая область прибытия: {";
	for (int i = 0; i < two.size(); i++)
	{
		cout << two[i];
		if (i + 1 != two.size())
			cout << ",";
	}
	cout << "}\n";
	cout << "Старый график соответствия: {";
	show(one, two);
	cout << "}\n";
	cout << "После инверсии: \n";
	cout << "Новая область отправления: {";
	for (int i = 0; i < two.size(); i++)
	{
		cout << two[i];
		if (i + 1 != two.size())
			cout << ",";
	}
	cout << "}\n";
	cout << "Новая область прибытия: {";
	for (int i = 0; i < one.size(); i++)
	{
		cout << one[i];
		if (i + 1 != one.size())
			cout << ",";
	}
	cout << "}\n";
	cout << "Новый график соответствия: {";
	show(two, one);
	cout << "}\n";
}
void compoz(vector<int> X, vector<int> Y, vector<int> U, vector<int> V)
{
	cout << "Входные данные :\n\n";
	cout << "Cоответситвие 1 :\nобласть отправления: {";
	for (int i = 0; i < X.size(); i++)
	{
		cout << X[i];
		if (i + 1 != X.size())
			cout << ",";
	}
	cout << "}\nобласть прибытия: {";
	for (int i = 0; i < Y.size(); i++)
	{
		cout << Y[i];
		if (i + 1 != Y.size())
			cout << ",";
	}
	cout << "}\nграфик:";
	cout << "}\n";
	show(X, Y);
	cout << "\n\nCоответситвие 2 :\nобласть отправления: {";
	for (int i = 0; i < U.size(); i++)
	{
		cout << U[i];
		if (i + 1 != U.size())
			cout << ",";
	}
	cout << "}\nобласть прибытия: {";
	for (int i = 0; i < V.size(); i++)
	{
		cout << V[i];
		if (i + 1 != V.size())
			cout << ",";
	}
	cout << "}\nграфик:";
	show(U, V);
	cout << "}\n";
	cout << "\nКомпозиция соответствий 1 и 2:\nобласть отправления: {";
	for (int i = 0; i < X.size(); i++)
	{
		cout << X[i];
		if (i + 1 != X.size())
			cout << ",";
	}
	cout << "}\nобласть прибытия: {";
	for (int i = 0; i < V.size(); i++)
	{
		cout << V[i];
		if (i + 1 != V.size())
			cout << ",";
	}
	cout << "}\nграфик:";
	graf_help(X, Y, U, V);
	cout << endl;
}
void graf_help(vector<int> X, vector<int> Y, vector<int> U, vector<int> V)
{
	vector<int> temp;
	vector<int> temp2;
	int t;
	for (int i = 0; i < X.size(); i++)
		for (int j = 0; j < U.size(); j++)
		{
			t = X[i] * U[j]; temp.push_back(t);
			t = Y[i] * V[j]; temp2.push_back(t);
		}
	show(temp, temp2);
}
void obraz(vector<int> one, vector<int> two, int val)
{
	vector<int> obr;

	for (int i = 0; i < one.size(); i++)
	{
		if (val == one[i])
		{
			obr.push_back(two[i]);
		}
	}
	if (obr.size() == 0)
	{
		cout << "\nУ введённого вами элемента нет образа, возможно вы ввели не то значение\n";
	}
	else if (obr.size() == 1)
	{
		cout << "\n" << obr.front() << "-образ эллемента " << val << endl;
	}
	else
	{
		cout << "\nБыло найдено несколько образов элемента" << val << ": ";
		for (int i = 0; i < obr.size(); i++)
		{
			cout << obr[i];
			if (i + 1 != obr.size())
			{
				cout << ",";
			}
		}
	}

}
void proobraz(vector<int> one, vector<int> two, int val)
{
	vector<int> obr;

	for (int i = 0; i < one.size(); i++)
	{
		if (val == one[i])
		{
			obr.push_back(two[i]);
		}
	}
	if (obr.size() == 0)
	{
		cout << "\nУ введённого вами элемента нет пробраза, возможно вы ввели не то значение\n";
	}
	else if (obr.size() == 1)
	{
		cout << "\n" << obr.front() << "-пробраз эллемента " << val << endl;
	}
	else
	{
		cout << "\nБыло найдено несколько пробразов элемента" << val << ": ";
		for (int i = 0; i < obr.size(); i++)
		{
			cout << obr[i];
			if (i + 1 != obr.size())
			{
				cout << ",";
			}
		}
	}


}
void suzhen(vector<int> X, vector<int> Y, vector<int> temp)
{
	vector<int> tempious;
	vector<int> tempiousn2;
	for (int i = 0; i < X.size(); i++)
		for (int j = 0; j < temp.size(); j++)
		{
			if (X[i] == temp[j])
			{
				tempious.push_back(X[i]);
				tempiousn2.push_back(Y[i]);
				i++; if (X.size() <= i)break;
				j = -1;
			}
		}

	show(tempious, tempiousn2);
	cout << endl;
}
vector<int> hhelp(vector<int> one)
{
	vector<int> temp = one;
	int buff;
	for (int i = 0; i < temp.size() - 1; i++)
	{
		for (int k = 1; k < temp.size(); k++)
		{
			if (temp[i] == temp[k] && i != k)
			{
				buff = i;
				while (i < temp.size() - 1)
				{
					temp[i] = temp[i + 1];
					i++;
				}
				i = buff;
				temp.pop_back();
			}
		}
	}
	return temp;
}