﻿// project.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//alice

#include <iostream>

int main()
{
	std::cout << "Enter A and B: ";
	int a, b;
	std::cin >> a >> b;
	std::cout << "A + B = " << a + b << '\n'
		<< "A - B = " << a - b << '\n'
	    << "A * B = " << a * b << '\n'
	    << "A / B = " << a / b << '\n';
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
