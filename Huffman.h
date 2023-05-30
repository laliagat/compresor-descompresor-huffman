#pragma once

#include <iostream>
#include <queue>
#include <map>

using namespace std;

class HuffmanTree {
private:

    struct Node {
        char c; //caracter
        int frequency; //frecuencia con que aparece el caracter
        Node* left;
        Node* right;

        Node(char c, int frequency, Node* left = nullptr, Node* right = nullptr) 
            :c(c), frequency(frequency), left(left), right(right) {
        }
    };

    Node* root= nullptr;
    map<char, string> codeMap;
    string inputText = "";
    string textEncoded = "";
    string textDecoded = "";
    string information = "";

    struct NodeCompare { // Comparar nodos
        bool operator()(Node* ln, Node* rn) {
            return (ln->frequency > rn->frequency);
        }
    };

    void createCodeMap(Node* node, string code = "") {
        if (node->left == nullptr && node->right == nullptr) {
            codeMap[node->c] = code; // Ubica el caracter en el mapa y genera el código 
        }
        else {
            createCodeMap(node->left, code + "0");
            createCodeMap(node->right, code + "1");
        }
    }

  void deleteTree(Node* node) {
        if (node != nullptr) {
            deleteTree(node->left);
            deleteTree(node->right);
            delete node;
        }
    }

public:

    HuffmanTree(){}

    void createTreeFromText() {

        map<char, int> frequencyMap;
        priority_queue<Node*, vector<Node*>, NodeCompare> pqueue;

        codeMap.clear();

        for (char c : inputText) { //para cada caracter en el texto input
            frequencyMap[c]++; //suma las frecuencias del caracter  
        }

        for (auto& pair : frequencyMap) {
            //agrega un nodo para cada caracter del mapa y su frecuencia
            pqueue.push(new Node(pair.first, pair.second));
        }

        while (pqueue.size() > 1) {
            Node* left = pqueue.top();
            pqueue.pop();  
            Node* right = pqueue.top();
            pqueue.pop();
            pqueue.push(new Node('\0', left->frequency + right->frequency, left, right));
        }

        root = pqueue.top();
        createCodeMap(root); 
    }

    void setCodeMap(map<char, string>& huffmanCodes) {
        this->codeMap = huffmanCodes;
    }

    void setInput(string& input) {
        inputText = input;
    }

    map<char, string> getCodeMap() {
        return codeMap; 
    }

    string getStringCodeMap() {
        string map; 
        for (auto pair : codeMap) {
            map += pair.first;
            map += " -> ";
            map += pair.second;
            map += "\n";
        }
        return map; 
    }

    string encodeFullText() {
        textEncoded = "";
        for (auto character : inputText) {
            if (codeMap[character] != "") {
                textEncoded += codeMap[character];
            }
        }
        return textEncoded;
    }

    string decodeFullText() {
        textDecoded = "";
        string character = "";
        for (auto aux : inputText) {
            character += aux;
            for (auto& pair : codeMap) {
                if (pair.second == character+"\r") {
                    textDecoded += pair.first;
                    character = "";
                }
            }
        }
        return textDecoded;
    }

    string returnText() {
        return inputText;
    }


   ~HuffmanTree() {
        deleteTree(root);
    }
    
};