#include <iostream>

bool BinarySearch(int *array, int size, int value)
{
    int first = 0;
    int last  = size;
    while(first < last)
    {
        int mid = first + (last - first)/2;
        if(array[mid] == value)
            return true;
        
        if(array[mid] < value)
            first = mid + 1;
        else
            last = mid;
    
    }

    return false;
}

int main(void)
{
    int array[] = {0, 1};

    if(BinarySearch(array, 2, 0))
        std::cout<<"YES!"<<std::endl;
    else
        std::cout<<"NO！"<<std::endl;

    return 0;
}



#if 0
bool BinarySearch(int *array, int len, int value)
{
    int *first = array;
    int *last  = array + len;
    int *middle = NULL;

    while(len > 0)
    {
        int mid = len / 2;
        middle  = first + mid;
        if(*middle == value)
            return true;

        if(*middle < value)
        {
            first = middle;
            first++;
            len = len - mid - 1;
        }
        else
            len = mid;
    }

    return false;
}

#endif