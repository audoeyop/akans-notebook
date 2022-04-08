#include<stdio.h>

void quicksort(int number[25],int first,int last){

  int i, j, pivot, temp;

  if(first<last){

    pivot=first;

    i=first;

    j=last;

    while(i<j){

      while(number[i]<=number[pivot]&&i<last){

        i++;
      }

      while(number[j]>number[pivot]){

        j--;
      }

      if(i<j){

        temp=number[i];

        number[i]=number[j];

        number[j]=temp;
      }
    }

    temp = number[pivot];

    number[pivot]=number[j];

    number[j]=temp;

    quicksort(number,first,j-1);

    quicksort(number,j+1,last);
  }
}

int main(){

   int count = 5;

   int number[5] = {14, 2, 33, 7, 5};

   printf("\nNumber Array: 14, 2, 7, 5\n");

   quicksort(number,0,count-1);

   printf("Sorted Array: ");

   for(int i=0;i<count;i++){

      if(i != 0)  printf(", ");

      printf("%d",number[i]);
    }

    printf("\n");

   return 0;
}
