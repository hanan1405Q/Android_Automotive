#include <iostream>


int main()
{
    std::string text ="the cycle of life is a cycle of cycles";
 
    while(text.find("cycle")!=std::string::npos)
    {
        int pos=text.find("cycle");
        text.replace(pos,5,"circle");
    }
    
    std::cout<<text<<std::endl;

    int pos=text.find("circle");
    text.insert(pos,"great ");
     
    std::cout<<text<<std::endl;;
    
    int pos1=text.find("circle");
    int pos2=text.find("circle",pos1+6);
    text.insert(pos2,"never-ending ");

    std::cout<<text<<std::endl;;

    return 0;
}


