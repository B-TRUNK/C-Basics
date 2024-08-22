#include <stdio.h>
#include <stdlib.h>

//ptr function prototype
//void swap(int*, int*);

int main()
{
    //int a = 10, b = 20;
    printf("Please Enter Your Array Size!");
    const int arr_size;


    int arr_value;
    scanf("%i" ,&arr_size);


    int arr[arr_size];

    for(int i = 0 ;i < arr_size ;i++) {

        printf("\n Please Enter a Value to push into Array!");
        scanf("%i" ,&arr_value);
        arr[i] = arr_value;
    }

    printf("Your Array Elements Are :");
    for(int i = 0 ;i < arr_size ;i++) {
        printf("\n%i" ,arr[i]);
    }



    /*
    //swap a, b by reference
    swap(&a, &b);

    printf("a=%i, b=%i" ,a ,b);
    //end of swap a,b
    */

    return 0;
}

/*
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/
