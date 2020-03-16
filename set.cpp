/*************************************************************************
	> File Name: set.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 六  2/29 17:35:46 2020
 ************************************************************************/


#include<iostream>
#include<set>
#include<utility>
using namespace std;


int main(void)
{
    char a, b, c, d;
    std::pair<int, char*> p0(1, &a);
    std::pair<int, char*> p1(2, &b);
    std::pair<int, char*> p2(1, &c);
    std::pair<int, char*> p3(2, &d);

    std::set<std::pair<int, char*> > s;

    s.insert(p0);
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);


    std::set<std::pair<int, char*> >::iterator it;
    std::set<std::pair<int, char*> >::iterator ed = s.end();

    for(it = s.begin(); it != ed; it++)
    {
       std::cout<<it->first<<" "<<*it->second<<" ";
    }

    std::cout<<std::endl;

    return 0;
}
