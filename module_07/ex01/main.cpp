#include "iter.hpp"

class Awesome{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template <typename T>
void print(const T & x) { cout << x << endl; }

int main() {
	{
		cout << "================TEST_1================" << endl;
		int arr[] = { 0, 1, 2, 3, 4 };
		iter(arr, 5, print);
		cout << "================TEST_1_END================" << endl;
	}

	{
		cout << endl << "================TEST_2================" << endl;
		Awesome arr[5];
		iter(arr, 5, print);
		cout << "================TEST_2_END================" << endl;
	}

}