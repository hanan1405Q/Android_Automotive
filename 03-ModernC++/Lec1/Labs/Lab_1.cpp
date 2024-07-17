
#include <iostream>
#include<cmath>
#include<cstring>

namespace  MathFunctions
{

   void print(int x)
   {
      std::cout<<sqrt(x)<<std::endl;
   }
}


namespace StringFunctions
{
   void print(char str[] , int flag)
   {
       if(flag)
       {
          for (int i = 0; i < strlen(str); i++)
          {
            putchar(toupper(str[i]));
          }
          std::cout<<std::endl;
          
       }
       else
       {
         for (int i = 0; i < strlen(str); i++)
          {
            std::cout<<(char)(tolower(str[i]));
          }

          std::cout<<std::endl;
       }
        

   }  
} 


namespace ArrayFunction
{
   void print(int arr[] , int size) 
   {
      //int size=sizeof(arr)/sizeof(arr[0]);
      for (int i=size-1 ; i>=0;i--)
      {
         std::cout<<arr[i] ;
      }

      std::cout<<std::endl;
   }
}

int main (void)
{
    char arr[]="Hello Hanan";
    MathFunctions::print(25);
    int arr1[]={1,2,3,4,5};

    StringFunctions::print(arr,0);
    StringFunctions::print(arr,1);
    ArrayFunction::print(arr1,5);
}
