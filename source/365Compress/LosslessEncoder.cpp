#include "LosslessEncoder.h";

namespace Huffman {

	std::list<std::pair<std::string, std::string>> traverse_for_codes(NODE* p, std::string c) {
		if (p->left == NULL && p->right == NULL) {				// If leaf node...
			std::list<std::pair<std::string, std::string>> k;
			std::pair<std::string, std::string> r;

			r.first = c;
			r.second = p->pair.first;
			k.push_front(r);

			return k;

		}
		else {													// If not leaf node...
			std::list<std::pair<std::string, std::string>> l;
			std::list<std::pair<std::string, std::string>> r;

			if (p->left != NULL) {
				l = traverse_for_codes(p->left, c + "0");
			}
			if (p->right != NULL) {
				r = traverse_for_codes(p->right, c + "1");
			}

			r.merge(l);

			return r;
		}
	}

	std::string Encode(std::string input) {
		std::map<std::string, int> dictionary;

		input = Converter::hex2bin(input);

		// DICTIONARY CREATION

		for (int i = 0; i < input.length(); i += MULTIPLIER) {
			dictionary[input.substr(i, MULTIPLIER)]++;
		}

		// QUEUE CREATION

		std::list<std::pair<std::string, int>> queue;
		std::pair<std::string, int> min;
		int dictionary_size = dictionary.size();

		for (int i = 0; i < dictionary_size; i++) {
			min.second = INT_MAX;
			for (const auto &d : dictionary) {
				if (d.second < min.second) min = d;
			}
			queue.push_back(min);
			dictionary.erase(min.first);
		}

		// NODE CREATION

		std::list<NODE*> nodes;

		for (const auto &q : queue) {
			nodes.push_back(new NODE(q, NULL, NULL));
		}


		// TREE CREATION

		NODE* node1;
		NODE* node2;
		NODE* new_node;
		std::pair<std::string, int> new_pair;
		std::list<NODE*>::iterator t;
		int flag = 0;


		for (int i = 0; i < dictionary_size - 1; i++) {
			node1 = nodes.front();
			nodes.pop_front();
			node2 = nodes.front();
			nodes.pop_front();


			new_pair.first = "P" + std::to_string(i);
			new_pair.second = node1->pair.second + node2->pair.second;

			if (node1->pair.second < node2->pair.second) {
				new_node = new NODE(new_pair, node1, node2);
			}
			else {
				new_node = new NODE(new_pair, node2, node1);
			}


			if (nodes.size() == 0) {
				nodes.push_front(new_node);

			}
			else if (nodes.front()->pair.second >= new_pair.second) {
				nodes.push_front(new_node);

			}
			else if (nodes.back()->pair.second <= new_pair.second) {
				nodes.push_back(new_node);

			}
			else {
				t = nodes.begin();
				flag = 0;
				while (t != nodes.end() && flag == 0) {
					if ((*t)->pair.second >= new_pair.second) {
						nodes.insert(t, new_node);
						flag = 1;
					}
					t++;
				}
			}
		}

		// CODE WRITING

		std::list<std::pair<std::string, std::string>> codelist = traverse_for_codes(nodes.front(), "");


		// CREATE CODE DICTIONARY

		std::map<std::string, std::string> codes;
		for (const auto &c : codelist) {
			codes[c.second] = c.first;
		}


		//  CREATE OUTPUT

		std::string output;

		for (const auto &c : codelist) {
			output += c.first + c.second;
		}

		for (int i = 0; i < input.length(); i += MULTIPLIER) {
			output += codes[input.substr(i, MULTIPLIER)];
		}

		output = Converter::bin2hex(output);
		return output;
	}
}
















namespace LZW {

	std::string Encode(std::string input) {
		input = Converter::hex2bin(input);
		std::string output = "";


		std::queue<unsigned int> code;
		


		std::map<std::string, unsigned int> dictionary;
		std::map<unsigned int, std::string> dictionary_reverse;
		std::string selection, pointer;
		unsigned int s, p;
		unsigned int z;

		s = 0;
		p = 0;

		// ADD STRINGS TO INITIAL DICTIONARY

		std::string b;
		for (unsigned int j = 0; j < pow(2, MULTIPLIER); j++) {
			b = std::bitset<MULTIPLIER>(j).to_string();
			dictionary_reverse[j] = b;
			dictionary[b] = j;
		}


		
		// LZW ENCODING

		selection = input.substr(s, MULTIPLIER);

		while (p < input.length()) {
			p += MULTIPLIER;
			pointer = input.substr(p, MULTIPLIER);

			if (dictionary.find(selection + pointer) != dictionary.end()) {
				selection += pointer;
			}
			else {
				z = dictionary.size();
				code.push(dictionary[selection]);

				if (z <= pow(2, MAXCODELENGTH)) {
					dictionary_reverse[z] = selection + pointer;
					dictionary[selection + pointer] = z;
				}
				selection = pointer;
				s = p;
			}
		}
		code.push(dictionary[selection]);



		// ITERATING THROUGH CODE

		while (!code.empty()) {
			output += std::bitset<MAXCODELENGTH>(code.front()).to_string();
			code.pop();
		}

		
		output = Converter::bin2hex(output);
		return output;
	}

}
















namespace Converter {
	std::string hex2bin(std::string in) {
		std::map<char, std::string> d;
		d['0'] = "0000";
		d['1'] = "0001";
		d['2'] = "0010";
		d['3'] = "0011";
		d['4'] = "0100";
		d['5'] = "0101";
		d['6'] = "0110";
		d['7'] = "0111";
		d['8'] = "1000";
		d['9'] = "1001";
		d['a'] = "1010";
		d['b'] = "1011";
		d['c'] = "1100";
		d['d'] = "1101";
		d['e'] = "1110";
		d['f'] = "1111";

		std::string o;
		for (int c = 0; c < in.length(); c++) {
			o += d[in[c]];
		}

		return o;
	}

	std::string bin2hex(std::string in) {
		std::map<std::string, char> d;
		d["0000"] = '0';
		d["0001"] = '1';
		d["0010"] = '2';
		d["0011"] = '3';
		d["0100"] = '4';
		d["0101"] = '5';
		d["0110"] = '6';
		d["0111"] = '7';
		d["1000"] = '8';
		d["1001"] = '9';
		d["1010"] = 'a';
		d["1011"] = 'b';
		d["1100"] = 'c';
		d["1101"] = 'd';
		d["1110"] = 'e';
		d["1111"] = 'f';

		std::string o;
		for (int c = 0; c < in.length(); c += 4) {
			o += d[in.substr(c, 4)];
		}

		return o;
	}
}