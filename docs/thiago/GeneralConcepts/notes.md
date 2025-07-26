

## General Concepts
> For the examples we are assuming that int has 2 bytes and float has 4 bytes
> Pointers will take 2 bytes (follow the integer size)


---

#### Primary Memory / Execution Memory
- When the program is open it is carried to the main memory and now it is executed by the CPU.
- If our program needs another file that is in storage, the program needs to get the data from
the permanent storage inside the main memory. All the data necessary to the program has to be
in the main memory.

##### Data Structures
- How we arrange this necessary data in the program. (e.g. Arrays, LinkedLists and so on)

---

#### Storage / HD
- Programs are stored here (e.g. VSCode)

---

### Stack vs Heap

#### Static vs Dynamic Allocation

-> Assuming that the size of the memory is 64 Kb

-> The three sections: Code Section, Heap, Stack (we'll interchange the order of Heap and Stack for learning purposes) 

#### Code Section
>

-> Whe we open a program from the permanent storage, it is inserted in this section.
-> 

#### Stack
> Activation Records creation works like a "stack" data structure that's the source of the name.


#### Heap
-> Non-organized memory.
-> Should be treated a resource (we use them and release after the use)
-> A program cannot access direct the Heap memory directly. It can be accessed through a **pointer**.
-> The memory of a pointer is allocated in the stack. The pointer holds the address for the
    first element of the array (taking array as example)

---

### Physical vs Logical Data Structures
-> Array:
    - Has static size.
    - Can be created in stack or heap.
    - Useful when we know the size of the array necessary to our problem.

-> Linked List:
    - Has dynamic size.
    - Always created in the heap.
    - Useful when we need to change the size in execution time.


### Logical Data Structures
> These logical data structures are implemented using the physical ones.

- Linear: Stack(LIFO), Queues(FIFO)

- Non-linear: Trees, Graph

- Tabular: Hash Table.



#### Notes

![notes](https://drive.google.com/drive/folders/1OdepiBQEBMKlm80-RpcHOXfn8a3dYzOP?hl=pt-br)
