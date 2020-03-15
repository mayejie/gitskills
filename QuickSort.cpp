#include <iostream>

void QuickSort(int *array, int left, int right)
{
    int i = left;
    int j = right;
    int value = array[left + (right - left)/2];

    while(i <= j)
    {
        while(array[i] < value)
            i++;
        
        while(array[j] > value)
            j--;

        if(i <= j)
        {
 //           if(i != j)
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }

            i++;
            j--;
        }
    }

    if(j > left)
        QuickSort(array, left, j);

    if(i < right)
        QuickSort(array, j, right);
}

int main(void)
{
    int array[] = {3, 6, 1, 0, 2, 4, 7, 8, 5, 9};
    QuickSort(array, 0, 9);

    for(int i = 0; i < 10; i++)
        std::cout<<array[i]<<" ";

    std::cout<<std::endl;

    return 0;
}