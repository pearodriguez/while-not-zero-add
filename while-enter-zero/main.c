//
//  main.c
//  while-enter-zero
//
//  Created by Peter Rodriguez.
//

#include <stdio.h>

int main() {

    int data = 0;
    int sum = 0;
    
    printf("Enter an integer to add (0 will stop): ");
    scanf("%d", &data);

    
    while (data != 0) {
        sum += data;
        printf("Enter an integer: ");
        scanf("%d", &data);
    }
    
    printf("The total is %d\n", sum);
    
    return 0;
}
