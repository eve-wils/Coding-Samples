#include <iostream>
#include <math.h>

//Assignment: Create a program to generate n sorted numbers that are multiples of 2, 3, and 5 with no duplicates by creating 5 linked lists: 
//a final list, a temp list, and a list for each multiple (2, 3, 5). Multiply the final list by each constant and 
//set the corresponding lists to all of those values. Thus, the numbers generated will increase greatly in size each time.

//Note: This is obviously not the most efficient method of generating n sorted numbers that are multiples of 2, 3, and 5. I was told to do this specific method anyway.
using namespace std;
class Node{
    public:
        int value;
        Node* next;
  
    // Default constructor
    Node()
    {
        value = 0;
        next = NULL;
    }
  
    // Constructor with Paramters
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }

};

//defines what a linked list is
class Linkedlist {
    Node* head;

public:
    Linkedlist() { head = NULL; }
  
	//defines the functions on linked lists
	
    void insertNode(int); //inserts a new node into the linked list
	
    void printList(int); //prints a certain number of nodes in the linked list
	
    void printList(); //prints the whole linked list
	
    int findLength(); //finds the length of the linked list
	
    Linkedlist multList(int); //multiplies the list by the input constant
	
	//merges four lists together (list 2, list 3, list 5, temp list)
    Linkedlist mergeList(Linkedlist, Linkedlist, Linkedlist, Linkedlist);
	
    void selectionSort(); //selection sort algorithm
	
    void unduplicate(); //removes duplicates from the linked list

};
 

void Linkedlist::insertNode(int data){ //O(n)
    Node* newNode = new Node(data);
    if (head == NULL) { 
        head = newNode;
        return;
    }
  
    Node* temp = head;
    while (temp->next != NULL) {
  
        temp = temp->next;
    }
	//when the next node is empty, it assigns that node with the input value
    temp->next = newNode;
}
  
void Linkedlist::printList(int n){
    Node* temp = head;
    int count = 0;
    while (temp != NULL && count < n) {
        cout << temp->value << " ";
        temp = temp->next;
        count++;
    }
    cout << endl;
}

void Linkedlist::printList(){
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int Linkedlist::findLength(){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
Linkedlist Linkedlist::multList(int multnum){
    //multiplies a list by a constant
    Linkedlist inputList;
    Node* temp = head;
    int tempNum; //the data value
    int num; //the result of multiplication
    while (temp != NULL) {
        tempNum = temp->value;
        num = multnum * tempNum;
        inputList.insertNode(num); //the number of iterations increases until it gets to length
        temp = temp->next;
    }
    return inputList;
}

Linkedlist Linkedlist::mergeList(Linkedlist l1, Linkedlist l2, Linkedlist l3, Linkedlist l4){
    Linkedlist mergedList; //initializes the end result
    
    Node* temp1 = l1.head; //finds starting places for all of the input lists
    Node* temp2 = l2.head;
    Node* temp3 = l3.head;
    Node* temp4 = l4.head;
    
    //4*number of previous final list
    while(temp1 != NULL){
        mergedList.insertNode(temp1->value);
        temp1 = temp1->next;
    }
    while(temp2 != NULL){
        mergedList.insertNode(temp2->value);
        temp2 = temp2->next;
    }
    while(temp3 != NULL){
        mergedList.insertNode(temp3->value);
        temp3 = temp3->next;
    }
    while(temp4 != NULL){
        mergedList.insertNode(temp4->value);
        temp4 = temp4->next;
    }
    
    return mergedList;
}

void Linkedlist::selectionSort() {
    Node* tempNode = head;
    int temp;
    Node* minNode;
	
	
    for (Node* i = tempNode; i != NULL; i = i->next) {
        minNode = i; //the minimum value is assigned i
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (j->value < minNode->value) { //if j < the minimum, j becomes the minimum
                minNode = j;
            }
        }
        if (minNode != i) { //assigns i with the minimum value again, and switches the places
            temp = i->value;
            i->value = minNode->value;
            minNode->value = temp;
        }
    }
}

void Linkedlist::unduplicate() {
        Node *current = head;
        Node *temp;
 
        if (current == NULL) {
            return;
        }
		//if the current value and the next value are equal
		//make the next pointer point to the next value 
        while (current->next != NULL) {
            if (current->value == current->next->value) {
                temp = current->next->next;
                delete current->next;
                current->next = temp;
            } else {
                current = current->next;
            }
        }
    }

int main()
{
    //initializing the 5 lists
    // O(1)
    Linkedlist lfinal; 
    Linkedlist ltemp;
    Linkedlist list2;
    Linkedlist list3;
    Linkedlist list5;
  
    //defining length n
    int n;
    cout << "Please enter the desired prefix-length n\n" << endl;
    cin >> n;
	
    //putting initial values into temp linked list
    //Time complexity: 3 * O(n)
    ltemp.insertNode(2); 
    ltemp.insertNode(3);
    ltemp.insertNode(5);
    
    int count = 1; //initializing number of merging cycles
    int i = 0; //initializing number of elements in lfinal
    
	//algorithm to continue generating values until  
	//the length of the final linked list is greater than n.
    while(i <= n){ 
    
        list2 = ltemp.multList(2);
        list3 = ltemp.multList(3); 
        list5 = ltemp.multList(5);
        lfinal = ltemp.mergeList(list2, list3, list5, ltemp); 
        lfinal.selectionSort(); 
        lfinal.unduplicate();
    
        i = lfinal.findLength(); 
        count++;
    
        ltemp = lfinal.multList(1); //gives ltemp all of lfinal's elements
    }
    //prints out n values from the sorted lfinal linked list
    lfinal.printList(n); //O(n)
    
  
    return 0;
}