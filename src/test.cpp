#include <vector>
#include <iostream>
#include <utility>
#include <string>
#include <map>

std::pair<std::string, int> test(){
	std::pair<std::string, int> ret;
	ret = {"aiueo", 3};

	return ret;
}

int main()
{
	auto [str, num] = test();

	std::cout << str << ", " << num << std::endl;

	std::map<double, int> tmp = {{22.1,3}, {10.3,2}, {15.223, 10}};
	//std::map<int, int> tmp = {{22,3}, {10,2}, {15, 10}};

	//for(auto i = tmp.begin();i != tmp.end();i++){
	for(auto i : tmp.begin()){
		std::cout << i->first << " " << i->second << std::endl;
	}
	auto tmp_itr = tmp.begin();
	std::cout << tmp_itr->first << std::endl;



	std::vector<int> vec{0, 1, 2, 3, 4, 5};

	for(const auto &i : vec){
		std::cout << i << std::endl;
	}

	auto itr = vec.begin();

	std::cout << *itr << std::endl;
	itr += 1;
	std::cout << *itr << std::endl;
	itr += 1;
	std::cout << *itr << std::endl;

	return 0;
}
