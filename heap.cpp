#include <iostream>

void push_heap(int *first, int *last)
{
    if(last == first)
    return;

    int index  = last - first - 1;
    int parent = (index - 1) / 2;
    int value  = *(last - 1); 
    while(parent > 0 && value > *(first + parent))
    {
        *(first + index) = *(first + parent);
        index  = parent;
        parent = (index - 1)/2;
    }

    *(first + index) = value;
}

void AdjustHeap(int *first, int *last)
{
    int top = 0;
    int len = last - first;
    int SecondChild = 2*top + 2;
    *first    = *(last - 1);
    while(SecondChild < len)
    {
        if(*(first + SecondChild) < *(first + SecondChild - 1))
            SecondChild -= 1;

        if(*(first + SecondChild) > *(first + (SecondChild - 1)/2))
        {
            *(first + (SecondChild - 1)/2) = *(first + SecondChild);
            SecondChild = 2*SecondChild + 2;
        }
        else
        {
            break;
        }
            
    }
}

void pop_heap(int *first, int *last, int &value)
{
    value = *(last - 1);
    AdjustHeap(first, last);
}