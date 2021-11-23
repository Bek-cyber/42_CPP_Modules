#include <iostream>
#include <fstream>
#include <stdbool.h>

void replace_function(std::ifstream& fd, std::ofstream& rep_fd, std::string rep_str, std::string to_str) {
	std::string new_str;
	int pos, len_rep_str, len_to_str;

	len_rep_str = rep_str.length();
	len_to_str = to_str.length();
	while (fd.eof() != 1) {
		std::getline(fd, new_str);
		pos = new_str.find(rep_str, 0);
		while (pos != -1) {
			new_str.erase(pos, len_rep_str);
			new_str.insert(pos, to_str, 0, len_to_str);
			pos = new_str.find(rep_str, pos);
		}
		rep_fd << new_str << std::endl;
	}
}

int main(int ac, char **av)
{
	std::ifstream fd;
	std::ofstream rep_fd;
	std::string filename, rep_filename, rep_str, to_str;

	if (ac != 4) {
		std::cout << "Hey bro! There is wrong number of arguments >:(" << std::endl;
		return -1;
	}
	filename = std::string(av[1]);
	fd.open(filename);
	if (fd.is_open() == false) {
		std::cout << "Can't open file!" << std::endl;
		return -1;
	}
	rep_filename = std::string(av[1]).append(".replace");
	rep_fd.open(rep_filename);
	if (rep_fd.is_open() == false){
		fd.close();
		std::cout << "Can't open rep_file!" << std::endl;
		return -1;
	}
	rep_str = std::string(av[2]);
	to_str = std::string(av[3]);
	replace_function(fd, rep_fd, rep_str, to_str);
	fd.close();
	rep_fd.close();
	return 0;
}