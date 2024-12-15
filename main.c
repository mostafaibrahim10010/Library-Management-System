#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num;
    int i = 0;
    int arr [] = {};
    while(true){
        printf("Please enter the nuumber: ");
        scanf("%d", &num);
        if (num == EOF){
            break;
        }
        arr[i] = num;
        ++i;
    }

    return 0;
}
