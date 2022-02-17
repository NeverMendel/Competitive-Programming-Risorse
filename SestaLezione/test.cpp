#include <iostream>
#include <vector>

using namespace std;

struct Node{
	int val;
	Node* next;
	Node(int val, Node* next) : val(val), next(next){};
};

Node* vecToList(const vector<int>& vec){
	if(vec.empty()) return nullptr;
	Node* head = new Node(vec[0], nullptr);
	Node* current = head;
	for(unsigned int i = 1; i < vec.size(); i++){
		current->next = new Node(vec[i], nullptr);
		current = current->next;
	}
	return head;
}

int getPreviousEl(Node* head, int el){
	Node* current = head;
	while(current && current->next && current->next->val != el){
		current = current->next;
	}
	return current->next ? current->val : -1;
}

void printList(Node* head){
	Node* current = head;
	while(current){
		cout << current->val << ' ';
		current = current->next;
	}
	cout << endl;
}

void deleteList(Node* head){
	Node* current = head;
	while(current){
		Node* temp = current;
		current = current->next;
		delete temp;
	}
}

int main(){
	vector<int> vec = {5,6,7,8,9};
	Node* head = vecToList(vec);
	printList(head);
	cout << getPreviousEl(head, 7) << endl;
	cout << getPreviousEl(head, 8) << endl;
	cout << getPreviousEl(head, 9) << endl;
	cout << getPreviousEl(head, 10) << endl;
	deleteList(head);
}