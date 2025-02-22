#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int key;
    int value;
} HashNode;

#define TABLE_SIZE 1000

HashNode hashTable[TABLE_SIZE];


int hash(int key) {
    return abs(key) % TABLE_SIZE;
}


void insert(int key, int value) {
    int index = hash(key);
    while (hashTable[index].key != 0) {  
        index = (index + 1) % TABLE_SIZE;
    }
    hashTable[index].key = key;
    hashTable[index].value = value;
}


int search(int key) {
    int index = hash(key);
    while (hashTable[index].key != 0) {
        if (hashTable[index].key == key) {
            return hashTable[index].value;
        }
        index = (index + 1) % TABLE_SIZE;
    }
    return -1; 
}


void twoSum(int nums[], int n, int target) {
    
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i].key = 0;
    }

    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];

        int index = search(complement);
        if (index != -1) {
            printf("[%d, %d]\n", index, i);
            return;
        }

        insert(nums[i], i);
    }

    printf("Not found\n");
}

int main() {
    int nums[] = {2, 6, 18, 19};
    int target = 8;
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("elements that sum  %d:\n", target);
    twoSum(nums, n, target);

    return 0;
}
