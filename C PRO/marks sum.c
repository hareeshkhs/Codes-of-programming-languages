#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int marks_summation(int*, int, char);


int marks_summation(int* marks, int number_of_students, char gender) {

  int result = 0;
  if(gender == 'b') {
      for(int i = 0; i < number_of_students; i++) {
          if(i % 2 == 0)
            result += *(marks + i);
      }
  }

  if (gender == 'g') {
    for (int i = 0; i < number_of_students; i++) {
      if (i % 2 == 1)
        result += *(marks + i);
    }
  }

  return result;
}
int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
***************************************************************************************************
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int marks_summation(int*, int, char);

int marks_summation(int* marks, int number_of_students, char gender) {
    int boy_total = 0,girl_total=0,i,result;
  if(gender == 'b')
  {
      for(i = 0; i<= number_of_students;)
      {
          boy_total += *(marks + i);
          i += 2;
      }
      result = boy_total;
  }
    else
    {
        for(i = 1;i<= number_of_students;)
        {
            girl_total += *(marks +i);
            i += 2;
        }
        result = girl_total;
    }
    return result;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
