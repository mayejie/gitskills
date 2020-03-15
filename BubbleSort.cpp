#include <iostream>

void BubbleSort(int *array, int len)
{
    for(int i = 0; i < len - 1; i++)
    {
        bool isChange = false;
        for(int j = 0; j < len - i - 1; j++)
        {
            if(array[j] < array[j+1])
            {
                int value = array[j];
                array[j]  = array[j+1];
                array[j+1]  = value;
                isChange = true;
            }
        }

        if(!isChange)
            break;
    }
}

int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    BubbleSort(array, 10);

    for(int i = 0; i < 10; i++)
    {
        std::cout<<array[i]<<" ";
    }

    std::cout<<std::endl;

    return 0;
}