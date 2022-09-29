#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int isJollyJumper(const int seq[], int size)
{
    bool diffs_found[size - 1]; //Bool array to check if lengths up to size-1 has been found

    for(int i = 1 ; i < size ; i++)
    {
        int diff;

        diff = abs(seq[i] - seq[i - 1]);
        diffs_found[diff] = true;
    } //loop finds all the differences and sets value to true in diffs_found if its found

    for(int i = 1 ; i < size ; i++)
    {
        if(diffs_found[i] != true)
        {
            printf("Sequence is not Jolly");
            return 0;
        }   
    } //This section checks if all differences up to size-1 has been found, if not the loop ends prematurely, if true the line below is printed
    printf("Sequence is Jolly");
}

int main(void)
{
    int size;
    printf("Write the size of the sequence: ");
    scanf("%d", &size);
    int seq[size];

    printf("Write the sequence one number at a time: ");
    for(int i = 0 ; i < size ; i++)
        scanf("%d", &seq[i]);
    
    isJollyJumper(seq, size);
}
