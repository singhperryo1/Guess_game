//Header File for Class Bag
#ifndef _Bag
#define _Bag
#include<iostream>
using namespace std;

//Class Definition 
class Bag
{
private:
	int bagStorage[100];
	int size;
public:
	Bag(); //This is a default constructor
	int getSize();
	bool isEmpty();
	void add(int item);
	bool contains(int item);
	void remove(int item);
	void display();
	void clear();
	bool containsNeg();
	int getMax();
	int getFrequenceOf(int item);
};
//Definition of Constructors
Bag::Bag()
{
	size=0;
}
//Definition of Methods (Member Functions)
int Bag::getSize()
{
	return size;
}
bool Bag::isEmpty()
{
	if(size==0)
		return true;
	else
		return false;
}
void Bag::add(int item)
{
	if(size==100)
		cout<<"The bag is full!"<<endl;
	else{
		bagStorage[size]=item;
		size++;
	}
}
void Bag::display()
{
	cout<<"The bag contains following integers: "<<endl;
	for(int i=0;i<size;i++)
		cout<<bagStorage[i]<<endl;
}
bool Bag::contains(int item)
{
	if (isEmpty())
		return false;
	else {
		for (int i = 0; i < size; i++) {
			if (bagStorage[i] == item)
				return true;
		}
		return false;
	}
}
void Bag::remove(int item)
{
	if(isEmpty()){
		cout<<"Removal failed! The bag is empty."<<endl;
	}
	else if(!contains(item)){
		cout<<"Removal failed! The item is not in the bag."<<endl;
	}
	else{
		int index = 0;
		for(int i=0; i<size; i++){
			if (bagStorage[i]==item) {
				index=i;
				break;
			}
		}
		for (int i=index; i<size-1; i++){
			bagStorage[i] = bagStorage[i+1];
		}
		size--;
	}
}
void Bag::clear()
{
	size = 0;
}
//Add new class methods here:
bool Bag::containsNeg()
{
	for(int i=0; i<size; i++){
		if(bagStorage[i]<0){
			cout<<"This bag contains a negative integer."<<endl;
			return true;
		}
	cout << "This bag contains no negative integers." << endl;
	return false;
	}
}

int Bag::getMax()
{
	int Max=bagStorage[0];
	for(int i=0; i<size; i++){
		if(bagStorage[i]>Max){
			Max = bagStorage[i];
		}
	}
	return Max;
}
int Bag::getFrequenceOf(int item)
{
	int counter=0;
	for(int i=0; i<size; i++){
		if(bagStorage[i]==item){
			counter++;
		}
	}
	return counter;
}

#endif _Bag