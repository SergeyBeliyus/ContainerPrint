﻿#include <iostream>
#include <vector>
#include <set>
#include <list>

template <typename C>
void print_container(const C& data) {
	for (auto i = data.begin(); i != data.end(); i++) {
		std::cout << *i << " ";
	}
	std::cout << std::endl;
}


int main() {
	std::set<std::string> test_set = { "one", "two", "three", "four" };
	std::list<std::string> test_list = { "one", "two", "three", "four" };
	std::vector<std::string> test_vector = { "one", "two", "three", "four" };

	print_container(test_set);
	print_container(test_list);
	print_container(test_vector);

	return 0;
}