//
//  main.cpp
//  Code Machine
//
//  Created by Chris Jarvis on 2016-02-07.
//  Copyright © 2016 Chris Jarvis. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"
int main(){
    
    Sales_item book;
    // read ISBN, number of copies sold, and sales price
    std::cin >> book;
    // write ISBN, number of copies sold, total revenue, and average price
    std::cout << book << std::endl;
    
    return 0;
    
    
}


