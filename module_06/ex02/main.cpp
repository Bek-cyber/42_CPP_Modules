#include "Base.hpp"

int main() {
	cout << "=========FIRST=========" << endl;
	Base * first;
	first = generate();
	identify(first);
	identify(* first);

	cout << "=========SECOND=========" << endl;
	Base * second;
	second = generate();
	identify(second);
	identify(* second);

	cout << "=========THIRD=========" << endl;
	Base * third;
	third = generate();
	identify(third);
	identify(* third);

	cout << "=========THE_END=========" << endl;

	delete first;
	delete second;
	delete third;
	return 0;
}
