//
//  main.cpp
//  CTCI 2.1 Remove Dups
//
//  Created by daniel saghbine on 1/16/25.
//

#include "list.h"
#include <cstdlib>

int main()
{
    cout<<"problem\n-------\n\tWrite code to remove duplicates from an unsorted linked list. How would you solve this problem if a temporary buffer is not allowed?\n\n";
    
    cout<<"input\n-----\n\t";
    List<int> l;
    srand(int(time(0)));
    
    for(int i=1; i <= 10; i++)
        l.push(rand()%10+1);
    
    l.show();
    
    l.Remove_Dups();
    
    cout<<"\noutput\n------\n\t";
    l.show();
    
    cout<<"\nsolution\n--------\n\tAuxiliary space complexity: O(1); time complexity: O(n^2).\n\n";
    
    return 0;
}
