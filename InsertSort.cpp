#include <iostream>

void InsertSort(int *array, int len)
{
    for(int i = 1; i < len; i++)
    {
        for(int j = i - 1; j >= 0 && array[j+1] > array[j]; j--)
        {
            int value  = array[j];
            array[j]   = array[j+1];
            array[j+1] = value;
        }
    }
}

int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    InsertSort(array, 10);

    for(int i = 0; i < 10; i++)
        std::cout<<array[i]<<" ";

    std::cout<<std::endl;

    return 0;
}