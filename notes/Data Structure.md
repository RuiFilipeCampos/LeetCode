# Data Structure
nav: [[Data Structure]]

Definition from wikipidedia:

> In [computer science](https://en.wikipedia.org/wiki/Computer_science "Computer science"), a **data structure** is a data organization, management, and storage format that enables efficient access and modification. More precisely, a data structure is a collection of data values, the relationships among them, and the functions or operations that can be applied to the data,[ [4] ](https://en.wikipedia.org/wiki/Data_structure#cite_note-4) i.e., it is an [algebraic structure](https://en.wikipedia.org/wiki/Algebraic_structure "Algebraic structure") about [data](https://en.wikipedia.org/wiki/Data "Data").

(that last phrase is pretty cool)

## Examples

### Array

### Linked List

```cpp
template <typename T>
struct Node{
	T val;
	Node<T> *next;
};
```

### Hash Map

Consider a map $h$ of the form:

$$
h: K -> H 
$$

where $K$ is a set of "key" values and $H$ is a set of 

There is a chain of maps that take a key to an integer value:

key -> hash -> integer




