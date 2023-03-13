#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char *argv[]) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < argc; i++) {
		std::string arg = argv[i];
		for (int j = 0; j < (int) arg.length(); j++)
			std::cout << (char) std::toupper(arg[j]);
		if (i < argc - 1)
			std::cout << " ";
	}
	std::cout << "\n";
	return (0);
}
