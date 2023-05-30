#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Huffman.h"

using namespace System;
class Controller {

private: 
	HuffmanTree tree;

public:

	Controller(){
		tree = HuffmanTree();
	}

	~Controller() {
	}


	void setInput(string text) {
		tree.setInput(text);
	}

	void setCodeMap(map<char, string>& huffmanCodes) {
		tree.setCodeMap(huffmanCodes);
	}

	string getText() { 
		return tree.returnText(); 
	}

	string getCodes() { //retorna los códigos generados en un string
		return tree.getStringCodeMap();
	}

	string getTextEncoded() {
		return tree.encodeFullText();
	}

	void encode() {
		tree.createTreeFromText();
	}

	string getTextDecoded() {
		return tree.decodeFullText();
	}

};

