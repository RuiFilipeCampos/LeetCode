# Data Structure
nav: [[Data Structure]]

Definition from wikipidedia:

> In [computer science](https://en.wikipedia.org/wiki/Computer_science "Computer science"), a **data structure** is a data 
> - organization,   `how it is organized in memory`
> - management,   
> - and storage      
> 
> format that enables efficient *access* and *modification*.


>   More precisely, a data structure is a collection of data values, the relationships among them, and the functions or operations that can be applied to the data,[ [4] ](https://en.wikipedia.org/wiki/Data_structure#cite_note-4) i.e., it is an [algebraic structure](https://en.wikipedia.org/wiki/Algebraic_structure "Algebraic structure") about [data](https://en.wikipedia.org/wiki/Data "Data").

(that last phrase is pretty cool)

## Examples

### Array
> In [computer science](https://en.wikipedia.org/wiki/Computer_science "Computer science"), an **array data structure**, or simply an **array**, is a [data structure](https://en.wikipedia.org/wiki/Data_structure "Data structure") consisting of a collection of _elements_ ([values](https://en.wikipedia.org/wiki/Value_(computer_science) "Value (computer science)") or [variables](https://en.wikipedia.org/wiki/Variable_(programming) "Variable (programming)")), each identified by at least one _array index_ or _key_. 
> 
> An array is stored such that the position of each element can be computed from its index [tuple](https://en.wikipedia.org/wiki/Tuple "Tuple") by a mathematical formula.[ [1] ](https://en.wikipedia.org/wiki/Array_data_structure#cite_note-1)[ [2] ](https://en.wikipedia.org/wiki/Array_data_structure#cite_note-andres-2)[ [3] ](https://en.wikipedia.org/wiki/Array_data_structure#cite_note-garcia-3)

A practical example is the simple 1D array, accessed from a 1D tuple, (index,):

```C
int *arr = [1, 5, 9, 199];
int index = 3;

// the value associated with the "key" index is given by
int value = *(arr + index) 
```

`arr` is C-contiguous, meaning that all its elements are stored in adjacent memory locations. Simple pointer arithmetics is applied to an initial pointer to find the other elements via their index value.

Accessing an array consisties in:

- calculating a memory address
- dereferencing that address

Both are costless operations in most scenarios, and both are independent of the number of items on the array, that is, accessing an array has a time complexity of $O(1)$.

### Linked List

Concept is quite simple:

```cpp
template <typename T>
struct Node{
	T val;
	Node<T> *next;
};
```

node1 -> node2 -> node3


### Hash Map

Consider a map $h$ of the form:

$$
h: K -> H 
$$

where $K$ is a set of "key" values and $H$ is a set of 

There is a chain of maps that take a key to an integer value:

key -> hash -> integer




