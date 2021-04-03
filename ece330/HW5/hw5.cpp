#include <iostream> 
#include <iomanip>
using namespace std;

void selectionSort( int * const, const int ); // prototype
void swap( int * const, int * const ); // prototype

int main()
{
   const int arraySize = 10;
   int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
   float b[ arraySize ] = {2.1, 6.2, 4.3, 8.4, 10.5, 12.6, 89.9, 68.7, 45.8, 37.0 };
   cout << "Data items in int original order\n";

   for ( int i = 0; i < arraySize; ++i )
      cout << setw( 4 ) << a[ i ];

   selectionSort( a, arraySize ); // sort the array
   

   cout << "\nData items in integer array ascending order\n";

   for ( int j = 0; j < arraySize; ++j )
      cout << setw( 4 ) << a[ j ];
   cout << endl;
   cout << "Data items in float original order\n";

   for ( int i = 0; i < arraySize; ++i )
      cout << setw( 4 ) << a[ i ];
   selectionSort(b, arraySize);
   cout << "\nData items in float array ascending order\n";
   for ( int j = 0; j < arraySize; ++j )
      cout << setw( 4 ) << a[ j ];
   coud << endl;
   
} // end main

// function to sort an array
template <class T>
void selectionSort( T * const array, const int size )
{
   int smallest; // index of smallest element

   // loop over size - 1 elements
   for ( int i = 0; i < size - 1; ++i )
   {
      smallest = i; // first index of remaining array

      // loop to find index of smallest element
      for ( int index = i + 1; index < size; ++index )

         if ( array[ index ] < array[ smallest ] )
            smallest = index;

      swap( &array[ i ], &array[ smallest ] );
   } // end if
} // end function selectionSort

// swap values at memory locations to which
// element1Ptr and element2Ptr point
void swap( T * const element1Ptr, T * const element2Ptr )
{
   int hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
} // end function swap