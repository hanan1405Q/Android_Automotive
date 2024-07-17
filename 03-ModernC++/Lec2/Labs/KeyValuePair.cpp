#include<iostream>
template<typename T1 ,typename T2>


class KeyValPair
{
private:

   T1 key;
   T2 val;

public:
   
   KeyValPair():key(0),val(0) {};
   KeyValPair(T1 x, T2 y):key(x),val(y) {};
  
   T1 GetKey(void)
   {
      return key;
   }
   T2 GetVal(void)
   {
      return val;
   }

  void SetPair(T1 x,T2 y)
  {
    key=x;
    val=y;
  }

  

};


int main(void)
{

   
   KeyValPair <int ,std::string> p[3]={(0,'Hanan'), (1,"Aya"), (2,"Sara")};
   for(int i=0;i<3;i++)
   {
     std::cout<<p[i].GetKey<<std::endl;
   }
   

}


