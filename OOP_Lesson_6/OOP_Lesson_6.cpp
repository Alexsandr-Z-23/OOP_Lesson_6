//#include <iostream>
//using namespace std;
//
//class Counter
//{
//public:
//	int value;
//	Counter(int num) :value{ num } {}
//	Counter() {}
//	void print()
//	{
//		cout << "Value = " << value << endl;
//	}
//	//Counter operator +(const Counter& count)const   // перегрузка оператора "+" с обьектами
//	//{
//	//	return Counter{ value + count.value };
//	//}
//
//	//int operator +(int number) const   // перегрузка оператора "+" с значением
//	//{
//	//	return number+ value + number;
//	//}
//
//	 //operator int()const { return value; }  оператор неявного преобразования типа в int 
//	 //explicit operator int()const { return value; }  оператор явного преобразования типа в int
//
//	bool operator == (const Counter& num)const = default;
//	/*{
//		return value == num.value;
//	}*/
//	bool operator !=(const Counter& num)const
//	{
//		return value != num.value;
//	}
//	bool operator >(const Counter& num)const
//	{
//		return value > num.value;
//	}
//	bool operator <(const Counter& num)const
//	{
//		return value < num.value;
//	}
//	friend ostream& operator<<(ostream& output, const Counter& num)
//	{
//		output << "Значение поля обьекта :" << num.value << endl;
//		return output;
//	}
//	friend istream& operator>>(istream& input,  Counter& num)
//	{
//		input >> num.value;
//	
//		return input;
//	}
//};
//
//Counter operator + (const Counter& n1, const Counter& n2)  // перегрузка оператора "+" с обьектами
//{
//	return Counter{ n1.value + n2.value };
//}
//
//
//int main()
//{
//	//Counter count{20};
//	//int n= static_cast<int>( count);// преобразование от класса Counter в int
//	////cout << " INT = " << n << endl;
//	////int m = count;// не пройзойдет явное преобразование 
//	////cout << " INT = " << m<< endl;
//
//	/*Counter num1{20};
//	Counter num2{15};
//	Counter num3  { num1 + num2 };
//	int b = 100+num3+100 ;
//	num3.print();
//	cout << b;*/
//	setlocale(LC_ALL, "rus");
//	Counter num1{20};
//	Counter num2{15};
//	bool n1 = num1 == num2;
//	bool n2 = num1 > num2;
//
//	cout << " num1 == num2  = " << boolalpha << n1 << endl;
//	cout << " num1 > num2  = " << boolalpha << n2 << endl;
//
//	cout << num1;
//
//	Counter num3{0};
//	cin >> num3;
//	cout << num3;
//}
//
////Операторы: 
////
////= присвоение
////([]) индексирование						// внутри класса обьявление
////(()) вызова
////->  доступ к члену класса по указателю
////по ситуации 
////++i
////--i
////----------------------------------------------------------------
////за пределами класса
////new
////new[]
////delete
////delete[]
//
