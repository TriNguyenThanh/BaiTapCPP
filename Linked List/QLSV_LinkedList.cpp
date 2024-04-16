#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct sinhvien{
	string name;
	string id;
	string ology;
	float point;
};

struct node{
	sinhvien data;
	node *next;
};

struct linkedlist{
	node *head;
	node *tail;
};

node* creNode(sinhvien sv);
void creLinkedList(linkedlist &l);
void addtail(linkedlist &l);
void inputlinkedlist(linkedlist &l);
void outputlinkedlist(linkedlist l);
void input(sinhvien &sv);
void output(sinhvien sv);
void sort(linkedlist &l);
node* find(linkedlist l, string ID);

int main(){
	linkedlist l;
	creLinkedList(l);

	inputlinkedlist(l);

	sort(l);
	
	outputlinkedlist(l);
	
	string ID;
	cin.ignore();
	getline(cin, ID);
	cout << "Result:";
	output(find(l, ID)->data);
	
	return 0;
}

node* creNode(sinhvien sv){
	node *ptr = new node;
	ptr->data = sv;
	ptr->next = NULL;
	return ptr;
}
void creLinkedList(linkedlist &l){
	l.head = NULL;
	l.tail = NULL;
}

void addtail(linkedlist &l, node *Node){
	if(l.head == NULL){
		l.head = Node;
		l.tail = Node;
	}else{
		l.tail->next = Node;
		l.tail = Node;
	}

}
void input(sinhvien &sv){
	cin.ignore();
	getline(cin, sv.name); 
	getline(cin, sv.id);
	getline(cin, sv.ology);
	cin >> sv.point;
}

void output(sinhvien sv){
	cout << "\nName: " << sv.name;
	cout << "\nID: " << sv.id;
	cout << "\nClass: " << sv.ology;
	cout << "\nPoint: " << fixed << setprecision(2) << sv.point;
}
void inputlinkedlist(linkedlist &l){
	int n; cin >> n;
	sinhvien sv;
	for(int i = 0; i < n; i++){
		input(sv);
		node *ptr = creNode(sv);
		addtail(l, ptr);
	}
}

void outputlinkedlist(linkedlist l){
	int i = 1;
	for(node *ptr = l.head; ptr != NULL; ptr = ptr->next){
		cout << "\nStt: " << i++;
		output(ptr->data);
		cout << "\n--";
	}
}
void sort(linkedlist &l){
	node *tmp = new node;
	for(node *ptr1 = l.head; ptr1 != NULL; ptr1 = ptr1->next){
		for(node *ptr2 = ptr1->next; ptr2 != NULL; ptr2 = ptr2->next){
			if(ptr1->data.point > ptr2->data.point){
				tmp->data  = ptr1->data;
				ptr1->data = ptr2->data;
				ptr2->data = tmp->data;
			}
		}
	}
}
node* find(linkedlist l, string ID){
	for(node *ptr = l.head; ptr != NULL; ptr = ptr->next){
		if (ptr->data.id == ID)
			return ptr;
	}
	return NULL;
}