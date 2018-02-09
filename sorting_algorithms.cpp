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
void bubblesort(int* array,int size){
  int temp = 0;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      temp = array[i];
      array[i] = array[j];
      array[j] = temp;
    }
  }


}
void insertion_sort(int* number,int size){



}
