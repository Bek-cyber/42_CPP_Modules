#include <iostream>

using std::cout;
using std::endl;

void converse_to_char(std::string const str) {
	if (str.length() == 1 && isdigit(static_cast<int>(str.c_str()[0])) == false) { cout << "char: " << static_cast<char>(str.c_str()[0]) << endl; }
	else {
		try {
			int num = static_cast<int>(std::stoi(str));
			if (isprint(num)) { cout << "char: '" << static_cast<char>(num) << "'" << endl; }
			else { cout << "char: Non displayable" << endl; }
		}
		catch (std::invalid_argument &) { cout << "char: impossible" << endl; }
	}
}

void converse_to_int(std::string const str) {
	try { cout << "int: " << static_cast<int>(std::stoi(str)) << endl; }
	catch (std::invalid_argument &) { cout << "impossilble" << endl; }
}

void converse_to_float(std::string const str) {
	try {
		cout << "float: " << static_cast<float>(std::stof(str));
		if (static_cast<int>(std::stof(str)) == static_cast<float>(std::stof(str))) { cout << ".0"; }


		cout << "f" << endl;
	}
	catch (std::invalid_argument &) { cout << "impossible" << endl; }
}

void converse_to_double(std::string const str) {
	try {
		cout << "double: " << static_cast<double>(std::stod(str));
		if (static_cast<int>(std::stod(str)) == static_cast<double>(std::stod(str))) { cout << ".0" << endl; }
		else { cout << endl; }
	}
	catch (std::invalid_argument &) { cout << "impossible" << endl; }
}

int main(int ac, char ** av) {
	if (ac != 2) {
		cout << "Wrong srguments!" << endl;
		return 0;
	}
	std::string const str = static_cast<std::string const>(av[1]);
	converse_to_char(str);
	converse_to_int(str);
	converse_to_float(str);
	converse_to_double(str);

	return 0;
}
