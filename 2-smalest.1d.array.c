#include <stdio.h>    
     
int main()    
{    
      
    int a[] = {25, 11, 7, 75, 56}; 
	     
        
    int length = sizeof(a)/sizeof(a[0]);    
          
    int min = a[0];    
        
    for (int i = 0; i < length; i++) {     
      
       if(a[i] < min)    
           min = a[i];    
    }      
    printf("Smallest element present in given array: %d\n", min);    
    return 0;    
}    