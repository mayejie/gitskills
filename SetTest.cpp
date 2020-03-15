/*************************************************************************
	> File Name: SetTest.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 四  2/ 6 21:46:05 2020
 ************************************************************************/

#include<iostream>
#include<set>
using namespace std;


int main(void)
{
    std::set<int>s;
    s.insert(3);
    s.insert(2);
    s.insert(1);

    std::set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++)
        std::cout<<*it<<" ";

    std::cout<<std::endl;

    return 0;

}

