#include <iostream>
#include "foo.hpp"

#define PI 3.14


#define forever for (unsigned long long i = 0;;i++ )

#define begin {
#define end }

#define sum(a, b)( a + b)

#define var(name) std::cout << #name" = " << name << std::endl;

#define print_arr(arr, length)\
std::cout << "{ ";\
for (int i = 0; i < length; i++)\
	std::cout << arr[i] << ", ";\
std::cout << "\b\b }\n"


#define TEST 0

#if TEST == 1
void foo() {
	std::cout << "Tест №1\n";

}
#elif TEST == 2
void koo() {
	std::cout << "Тест №2\n";
}
#elif TEST == 0 
void poo() {
	std::cout << " НЕТ АКТИВНЫХ ТЕСТОВ!!!\n";
}
#else
#error Не верный код теста! Осел!
#endif



#define FLAG
#ifdef FLAG
void func() {
	std::cout << "Я есть func! \n";
}
#endif


#ifndef FLAG
#error FLAG не объявлен, Осел!
#endif



int main() {
	setlocale(LC_ALL, "russian");
	int n, m;

#if TEST == 0
	poo();
#endif

	//Константы и конструкции препроцессора
	
	std::cout << "PI = " << PI << std::endl;
	double radius = 3.;
	double area = PI * radius * radius;
	std::cout << "Area = " << area << std::endl;

	forever {
		std::cout << '.';
	if (i > 100)
		break;
	}
	std::cout << std::endl;

#undef PI
	//std::cout << "PI = " << PI << std::endl;

#define PI 3
	std::cout << "PI = " << PI  << std::endl;
	

	//Макросы препроцессора

	n = 7; m = 15;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;

	var(n);
	var(m);

	const int size = 3;
	int arr[size]{ 5, 7, 9 };
	print_arr(arr, size);


#if TEST == 1
	foo();
#elif TEST == 2
	koo();
#endif

















	return 0;
}


//Препроцессор - это программа, которая производит некоторые, а ингда очень значительные манипуляции с первоначальным текстом программы 
// перед тем, как он подвергается компиляции

//Директива препроцессора- команда препроцессору, указывающая на то, где и как необходимо выполнить изменения исходного текста программы.
//  Всегда начинается с "#"