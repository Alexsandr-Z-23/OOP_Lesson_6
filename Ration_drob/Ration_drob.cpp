//Cсоздайте класс Ration который представляет дробь. Определить в нем переменные 
//которые представляют числитель и знаменатель. также определить для этого класса операторы сложения и умножения 
//а также операроры вода/вывода.

#include <iostream>
using namespace std;

class Ration
{
	int numerator;
	int denominator;

public:
	Ration(int num, int dnum)
	{
		numerator = num;
		if (dnum == 0)
		{
			cout << "Знаменатель не может быть [ 0 ] !!! " << endl;
			dnum = 1;
		}
		denominator = dnum;
	};
	Ration operator +(const Ration& drob)const
	{

		int dnum{ denominator };
		int num{ numerator + drob.numerator };
		if (denominator != drob.denominator)
		{
			num = numerator * drob.denominator + drob.numerator * denominator;
			dnum = denominator * drob.denominator;
		}
		return Ration{ num,dnum };
	}
	Ration operator*(const Ration& drob)const
	{
		int dnum{ denominator * drob.denominator };
		int num{ numerator * drob.numerator };
		return Ration{ num,dnum };
	}

	int getNumerator()const { return numerator; }
	int getDenominator() const { return denominator; }
	//~Ration();
};

inline ostream& operator<<(ostream& stream, const Ration& drob)
{
	stream << drob.getNumerator() << " / " << drob.getDenominator() << endl;
	return stream;
}



int main()
{
	Ration r1{ 2,3 };
	Ration r2{ 5,8 };
	Ration r3{ r1 * r2 };
	cout << r3;
}


