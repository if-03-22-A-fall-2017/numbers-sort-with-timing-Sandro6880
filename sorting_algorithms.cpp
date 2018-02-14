/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"
void init_random(int* array,int size){
  for (int i = 0; i < size; i++) {
    array[i] = rand();
   }
}
void bubble_sort(int* array,int size){
  int temp = 0;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if(array[i] < array[j])
      {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }


}
void insertion_sort(int* array,int size){
for (int i = 0; i < size; i++) {
  int number = array[i];
  int j = i-1;
  while (j >= 0 && array[j] > number) {
    array[j+1] = array[j];
    j = j -1;
  }
  array[j+1] = number;
}


}
