#include "student.h"

/* [TODO]
   Implement function createStudents
*/
Student *createStudents(int n){
   Student* sptr = (Student*)malloc(sizeof(Student)* n);
   return sptr;
}



/* [TODO]
   Implement function newStudent
*/
Student newStudent(char *name, int id){
   Student a;
   a.name = strdup(name);
   a.id = id;
   return a;
}

/* [TODO]
   Implement function appendStudent
*/
void appendStudent(Student *students, int index, Student student){
   students[index] = student;
   
}


void printStudents(FILE *output, Student *students, int length) {
  for (int i = 0; i < length; i++) {
    fprintf(output, "name: %s id: %d\n", students[i].name, students[i].id);
  }
}

/* [TODO]
   Implement function freeStudents
*/
void freeStudents(Student *students, int length){
   for (int i = 0; i < length; i++){
      free(students[i].name);
   }
   free(students);
}
