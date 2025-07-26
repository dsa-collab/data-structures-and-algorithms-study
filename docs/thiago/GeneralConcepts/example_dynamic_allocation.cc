


void main() {
  int *p;  
  p = new int[5]; // Alocating memory in the Heap

  delete [] p; // We have to release the memory after use, otherwise, at the end of
               // the function, the `p` pointer will die and the memory will still
               // be allocated without any pointer pointing in it (this problem is called
               // memory leak)
}
