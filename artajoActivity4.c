#include <stdio.h>

#define NUM_INPUTS 10

int nums[NUM_INPUTS];
int even = 0;
int product_odd = 1;
int product_all = 1;
int sum = 0;

void GetNumbers();
int Addition();
int Even();
int ProductOdd();
int ProductAll();

int main() {
    GetNumbers(); 

    printf("\nThe sum of all numbers is %d", Addition());
    printf("\nThe sum of even numbers is %d", Even());
    printf("\nThe product of odd numbers is %d", ProductOdd());
    printf("\nThe product of all numbers is %d", ProductAll());

   
}

void GetNumbers() {
    for (int i = 0; i < NUM_INPUTS; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);

        
        sum += nums[i];
        product_all *= nums[i];

        if (nums[i] % 2 == 0) {
            even += nums[i];
        } else {
            product_odd *= nums[i];
        }
    }

}

int Addition() {
    return sum;
}

int Even() {
    return even;
}

int ProductOdd() {
    return product_odd;
}

int ProductAll() {
    return product_all;
}
