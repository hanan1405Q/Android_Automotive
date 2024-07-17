#include<iostream>



class Pair
{
private:

    std::string  First;
    std::string Second;

   public:
      
      Pair(): First("Hi"),Second("Sara") {}
      Pair( std::string x,std::string y):First(x),Second(y) {};
      
      std::string  GetFirst(void)
      {
         return First;
      }
     std::string GetSecond(void)
      {
         return Second;
      }

      void SetFirst(std::string x)
      {
         First=x;
      }

     void SetSecond(std::string x)
      {
         Second=x;
      }


      void SetPair(std::string x ,  std::string y)

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

    Pair p("Hello","Hanan");
   
    std::cout<<p.GetFirst()<<std::endl;
    std::cout<<p.GetSecond()<<std::endl;

return 0;
}