      #include "lab1.h"
     const int MAX_SIZE = 100000;

     int readData(int[], int);
     void sortData(int[],int);
     void printData(int[],int);

     int main(void) 
     {
     int data[MAX_SIZE],nItems;

     nItems = readData(data,MAX_SIZE);
     sortData(data,nItems);
     printData(data,nItems);

     return 0;
     }
     /*
     5 things that are shared in a header file
     1. Other Includes 
     2. Constants 
     3. Data Structures and Classes
     4. Global Variables 
     5. Prototypes 
     */ 
