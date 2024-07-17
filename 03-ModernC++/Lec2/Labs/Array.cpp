#include <iostream>

enum Type
{
    INT ,
    DOUBLE,
    CHAR
    
};
class Array
{ 
    private:
     
       void** ptr;
    
    public:

    Array(int size)
    {
        /*create array of void pointer*/
        ptr= new void*[size];
    }

    void SetValue(int index , Type T , int val)
    {
        switch (T)
        {
            case 0:
               ptr[index]=new int;
              *static_cast<int*>(ptr[index])=val;
              std::cout<<*static_cast<int*>(ptr[index]);
            
            break;
            
            default:
                break;
        }
    }
};

int main (void)
{
    Array a(3);
    a.SetValue(0,INT, 5);
    return 0;
}