#pragma once
#include <iostream>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <bitset>

namespace Huffman {
	const int MULTIPLIER = 8;

	class NODE {
	public:
		NODE();
		~NODE();

		NODE(std::pair<std::string, int> p, NODE* l, NODE* r) {
			pair = p;
			left = l;
			right = r;
		}

		std::pair<std::string, int> pair;
		NODE* left;
		NODE* right;
	};

	std::list<std::pair<std::string, std::string>> traverse_for_codes(NODE* p, std::string c);

	std::string Encode(std::string);
}

namespace LZW {
	const int MULTIPLIER = 8;
	const int MAXCODELENGTH = 16;


	std::string Encode(std::string);
}

namespace Converter {
	std::string hex2bin(std::string);
	std::string bin2hex(std::string);
}