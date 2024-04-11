#include "sort.h"

/* [TODO]
   Implement function compareByName
*/

int compareByName(Student a, Student b){
   int p = strcmp(a.name,b.name);
   return p;
}

/* [TODO]
   Implement function compareById
*/

int compareById(Student a , Student b){
   if( a.id > b.id){
      return 1;
   } else if( a.id < b.id){
      return -1;
   } else {
      return 0;
   }
}

/* [TODO]
   Implement function quickSort
*/
/*void quickSort(Student *students, int length, int (*compare)(Student, Student)){
   for (int i = 0; i < length; i ++){
      for (int t = 1; t < length; t++){
         if (compare(students[i], students[t]) == -1){
            swap(&students[i], &students[t]);
         }
      }
   }
}*/
void quickSort(Student *students, int length, int (*compare)(Student, Student)){
    for (int i = 0; i < length - 1; i++){
        for (int t = 0; t < length - i - 1; t++){
            if (compare(students[t], students[t + 1]) > 0){
                swap(&students[t], &students[t + 1]);
            }
        }
    }
}

