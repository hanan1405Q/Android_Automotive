#include <iostream>

using pair_t = std::pair<int,int>;
namespace ArrayPair
{
     /*
     void CreatPair(int size,pair_t* ptr)
    {
        ptr = new pair_t[size];
    }
    */

    pair_t* CreatPair(int size)
    {
        pair_t* ptr = new pair_t[size];
        return ptr;
    }


    void  DeleteArray(pair_t* ptr)
    {
        delete [] ptr;
    }

    void SetPair( pair_t* arr, pair_t pair,int index)
    {
        arr[index]=pair;
        std::cout<<arr[index].first<<std::endl;
        std::cout<<arr[index].second<<std::endl;
    
    }

    pair_t GetPair(pair_t* arr , int index)
    {
        return arr[index];
    }
}


int main (void)
{
   pair_t* ptr=ArrayPair::CreatPair(3);
   ArrayPair::SetPair(ptr,{7,2},0);
   pair_t p=ArrayPair::GetPair(ptr,1);

   std::cout<<p.first<<std::endl;

}