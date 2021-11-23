#include "whatever.hpp"

class Awesome {
public:
	Awesome( int n = 3) : _n( n ) {}

	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

	int getValue() const { return (this->_n); }
private:
	int _n;
};

std::ostream	&operator<<(std::ostream &out, const Awesome &obj)
{
	out << obj.getValue();
	return (out);
}

int main() {
	{
		cout << "================TEST_1================" << endl;
		int a = 4, b = 9;
		cout << "a = " << a << "; b = " << b << endl;
		cout << "testing min function: " << ::min(a, b) << endl;
		cout << "testing max function: " << ::max(a, b) << endl;
		::swap(a, b);
		cout << "testing swap function: a = " << a << "; b = " << b << endl;
		cout << "================TEST_1_END================" << endl;
	}

	{
		cout << endl << "================TEST_2================" << endl;
		string a = "chaine1", b = "chaine2";
		cout << "a = " << a << "; b = " << b << endl;
		cout << "testing min function: " << ::min(a, b) << endl;
		cout << "testing max function: " << ::max(a, b) << endl;
		::swap(a, b);
		cout << "testing swap function: a = " << a << "; b = " << b << endl;
		cout << "================TEST_2_END================" << endl;
	}

	{
		cout << endl << "================TEST_3_AWESOME================" << endl;
		Awesome a(4), b(9);
		cout << "a = " << a << "; b = " << b << endl;
		cout << "testing min function: " << ::min(a, b) << endl;
		cout << "testing max function: " << ::max(a, b) << endl;
		::swap(a, b);
		cout << "testing swap function: a = " << a << "; b = " << b << endl;
		cout << "================TEST_3_AWESOME_END================" << endl;
	}
}