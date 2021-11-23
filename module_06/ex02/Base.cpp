#include "Base.hpp"
#include <time.h>
#include <unistd.h>

Base * generate() {
	srand(time(0));
	sleep(1);
	int rand = std::rand() % 3;
	if (rand == 0) { return (new B); }
	if (rand == 1) { return (new C); }
	return (new A);
}

void identify(Base * p) {
	if (p == NULL) { return; }

	try {
		A * ret1 = dynamic_cast<A *>(p);
		if (ret1 == NULL) {
//			cout << "Error in calling class * A!" << endl;
			throw std::exception();
		}
		cout << "Class * A has been called!" << endl;
	}
	catch (std::exception &e) {}

	try {
		B * ret2 = dynamic_cast<B *>(p);
		if (ret2 == NULL) {
//			cout << "Error in calling class * B!" << endl;
			throw std::exception();
		}
		cout << "Class * B has been called!" << endl;
	}
	catch (std::exception &e) {}

	try {
		C * ret = dynamic_cast<C *>(p);
		if (ret == NULL) {
//			cout << "Error in calling class * C!" << endl;
			throw std::exception();
		}
		cout << "Class * C has been called!" << endl;
	}
	catch (std::exception &e) {}
}

//void identify(Base * p) {
//	if (p == NULL) { return; }
//
//	try {
//		A * ret1 = dynamic_cast<A *>(p);
//		if (ret1 != NULL) { cout << "Class * A has been called!" << endl; }
//	}
//	catch (std::exception &e) {}
//
//	try {
//		B * ret2 = dynamic_cast<B *>(p);
//		if (ret2 != NULL) { cout << "Class * B has been called!" << endl; }
//	}
//	catch (std::exception &e) {}
//
//	try {
//		C * ret = dynamic_cast<C *>(p);
//		if (ret != NULL) { cout << "Class * C has been called!" << endl; }
//	}
//	catch (std::exception &e) {}
//}

void identify(Base & p) {
	try {
		A &ret1 = dynamic_cast<A &>(p);
		(void) ret1;
		cout << "Class & A has been called!" << endl;
	}
	catch (std::exception &e) {}

	try {
		B &ret2 = dynamic_cast<B &>(p);
		(void) ret2;
		cout << "Class & B has been called!" << endl;
	}
	catch (std::exception &e) {}

	try {
		C &ret = dynamic_cast<C &>(p);
		(void) ret;
		cout << "Class & C has been called!" << endl;
	}
	catch (std::exception &e) {}
}
