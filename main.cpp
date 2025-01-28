//
//  main.cpp
//  CTCI 2.1 Remove Dups
//
//  Created by daniel saghbine on 1/16/25.
//

#include "list.h"

void initializer(List<int> &l);

int main()
{
    cout<<"problem\n-------\n\tWrite code to remove duplicates from an unsorted linked list. How would you solve this problem if a temporary buffer is not allowed?\n\n";
    
    cout<<"input\n-----\n\t";
    List<int> l;
    srand(int(time(0)));
    initializer(l);
    l.show();
    
    l.Remove_Dups();
    
    cout<<"\n\noutput\n------\n\t";
    l.show();
    
    cout<<"\n\nsolution\n--------\n\tAuxiliary space complexity: O(1); time complexity: O(n^2).\n\n";
    
    return 0;
}

void initializer(List<int> &l)
{
    for(int i=1; i <= 10; i++)
        l.pull(rand()%10+1);
}
