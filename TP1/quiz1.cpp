#include <iostream>
 
int main()
{
    int i = 4 ;
    int j = i++ ;   // Ligne (1)
    int k = ++i ;   // Ligne (2)
    int l = i ;     // Ligne (3)

    std::cout << i << " " << j << " " << k << " " << l << std::endl ;
 
    return 0 ;
}
