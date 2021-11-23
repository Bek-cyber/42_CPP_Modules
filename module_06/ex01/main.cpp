#include <iostream>
#include <string>

using std::cout;
using std::endl;

typedef struct	Data {
	int num;
}				Data;

uintptr_t serialize(Data* ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data* deserialize(uintptr_t raw) { return reinterpret_cast<Data *>(raw); }

int main() {
	Data str_1, *str_2;
	str_1.num = 21;
	uintptr_t ptr = serialize(&str_1);
	str_2 = deserialize(ptr);
	cout << "str_2: num = " << str_2->num << endl;
	cout << "str_2: path =" << str_2 << endl;
	cout << "str_1: path =" << &str_1 << endl;
	
	return 0;
}
