#include "Array.hpp"

int main() {
	{
		cout << BOLDMAGENTA << "===============TEST_1===============" << RESET << endl;
		Array<int> arr;
		cout << arr << endl;
		cout << BOLDMAGENTA << "===============TEST_1_END===============" << RESET << endl;
	}

	{
		cout << endl << BOLDMAGENTA << "===============TEST_2===============" << RESET << endl;
		Array<int> arr(5);
		cout << arr << endl;
		cout << BOLDMAGENTA << "===============TEST_2_END===============" << RESET << endl;
	}

	{
		cout << endl << BOLDMAGENTA << "===============TEST_3===============" << RESET << endl;
		Array<int> arr(5);
		Array<int> arr2(arr);
		cout << arr << endl;
		cout << BOLDMAGENTA << "===============TEST_3_END===============" << RESET << endl;
	}

	{
		cout << endl << BOLDMAGENTA << "===============TEST_4===============" << RESET << endl;
		Array<int> arr(2);
		Array<int> arr2;
		arr2 = arr;
		try {
			arr[0] = 1;
			arr[1] = 2;
			arr[2] = 42;
		}
		catch (std::exception & e) { std::cerr << BOLDRED << e.what() << RESET << endl; }
		cout << BOLDMAGENTA << "===============TEST_4_END===============" << RESET << endl;
	}

	{
		cout << endl << BOLDMAGENTA << "===============TEST_5===============" << RESET << endl;
		const Array<int> arr(2);
		try { cout << arr[3] << endl; }
		catch (std::exception & e) { std::cerr << BOLDRED << e.what() << RESET << endl; }
		cout << BOLDMAGENTA << "===============TEST_5_END===============" << RESET << endl;
	}

	return 0;
}