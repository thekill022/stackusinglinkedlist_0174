#include <iostream>
using namespace std;

//1. inisialisasi class node
class Node {
public:
	//2. inisialisasi variabel data dan Node next sebagai member class Node
	int data;
	Node* next;

	Node() {
		//3. pemberian value next sabagai NULL
		next = NULL;
	}
};

//4. inisialisasi class Stact
class Stack {

private:
	//5. inisilisasi Node top sebagai private untuk mengecek ujung dari Stact
	Node* top;

public:
	Stack() {
		//6. inisilisasi nilai awal top sebagai NULL
		top = NULL;
	
	}
	//7. pembuatan method push
	int push(int value) {
		Node* newNode = new Node();
		newNode->data = value;
		newNode->next = top;
		top = newNode;
		cout << "Push Value: " << value << endl;
		return value;
	}

};

int main()
{
	
}
