#include <iostream>
void SelectSort(int *array, int len)
{
    for(int i = 0; i < len; i++)
    {
        int mid = i;
        for(int j = i; j < len; j++)
        {
            if(array[mid] < array[j])
                mid = j;
        }

        int value = array[i];
        array[i]  = array[mid];
        array[mid] = value;
    }
}

int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    SelectSort(array, 10);

    for(int i = 0; i < 10; i++)
    {
        std::cout<<array[i]<<" ";
    }

    std::cout<<std::endl;

    return 0;
}