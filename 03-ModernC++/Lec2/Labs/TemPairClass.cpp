#include<iostream>

template<typename T1 , typename T2>

class Pair
{
private:

    T1 First;
    T2 Second;

   public:
      
      Pair(): First(0),Second(0) {};
      Pair( T1 x,T2 y):First(x),Second(y) {};
      
      T1 GetFirst(void)
      {
         return First;
      }
      T2 GetSecond(void)
      {
         return Second;
      }

      void SetFirst(T1 x)
      {
         First=x;
      }

     void SetSecond(T2 x)
      {
         Second=x;
      }


      void SetPair(T1 x , T2 y)

      {
        First=x;
        Second=y;
      }
    
    /*
     void Swap(void)
     {
        std::string temp = First;

        First=Second;
        Second=First;
        
     }
    */



};



int main (void)
{

    Pair <int,std::string>p(17,"Hanan");
   
    std::cout<<p.GetFirst()<<std::endl;
    std::cout<<p.GetSecond()<<std::endl;

return 0;
}