#ifndef SEQLINEARLIST_HPP
#define SEQLINEARLIST_HPP
#include <iostream>
#include <string.h>
using namespace std;

template <class Item>
class LinearList
{
private:
	int MaxSize;
	Item *element; // 1D dynamic array
	int len;

public:
	/* Default constructor.
	 * Should create an empty list that not contain any elements*/
	LinearList();

	/* This constructor should create a list containing MaxSize elements. You can intialize the elements with any values.*/
	LinearList(const int &MaxListSize);

	/* Destructor.
	 * Must free all the memory contained by the list */
	~LinearList();

	/* Indexing operator.
	 * It should behave the same way array indexing does. i.e,
	 * LinearList L;
	 * L[0] should refer to the first element;
	 * L[1] to the second element and so on.
	 * */
	Item &operator[](const int &i); // return i'th element of list

	/* Returns true if the list is empty, false otherwise.
	 * */
	bool isEmpty();

	/* Returns the actual length (number of elements) in the list.
	 * */
	int length();

	/* Returns the maximum size of the list.
	 * */
	int maxSize();

	/* Returns the k-th element of the list.
	 * */
	Item returnListElement(const int k);

	/* Set x to the k-th element and
	 * return true if k-th element is present otherwise return false.
	 * */
	bool find(const int k, Item &x);

	/* Search for x and
	 * return the position if found, else return 0.
	 * */
	int search(Item &x);

	/* Set x to the k-th element and delete that k-th element.
	 * */
	void deleteElement(const int k, Item &x);

	/* Insert x after k-th element.
	 * */
	void insert(const int k, Item &x);
};

template <class Item>
LinearList<Item>::LinearList()
{
	MaxSize = 0;
	len = 0;
}

template <class Item>
LinearList<Item>::LinearList(const int &MaxListSize)
{
	MaxSize = MaxListSize;
	element = new Item(MaxListSize);
	len = 0;
}

template <class Item>
LinearList<Item>::~LinearList()
{
	MaxSize = 0;
	len = 0;
	delete[] element;
}

template <class Item>
Item &LinearList<Item>::operator[](const int &i)
{
	return element[i];
}

template <class Item>
bool LinearList<Item>::isEmpty()
{
	return (len == 0) ? 1 : 0;
}

template <class Item>
int LinearList<Item>::length()
{
	return len;
}

template <class Item>
int LinearList<Item>::maxSize()
{
	return MaxSize;
}

template <class Item>
Item LinearList<Item>::returnListElement(const int k)
{
	if (k >= len)
		return -1;
	return element[k];
}

template <class Item>
bool LinearList<Item>::find(const int k, Item &x)
{
	if (k >= len)
		return false;
	x = element[k];
	return true;
}

template<class Item>
int LinearList<Item>::search(Item &x){
    for(int i=0;i < len;i++){
        if(element[i] == x) return i+1;
    }
    return 0;
}

template<class Item>
void LinearList<Item>::deleteElement(const int k,Item &x){
    if(k >= len) return;
	x=element[k];

    for(int i=k;i < len-1;i++){
        element[i] = element[i+1];
    }
    len--;
	return;
}

template<class Item>
void LinearList<Item>::insert(const int k,Item &x){
    if(len <  MaxSize){
        if(k >= len) return;
        for(int i=len;i > k+1;i--){
            element[i] = element[i-1];
        }
        element[k+1] = x;
        len++;
    } 
    return;
}

#endif