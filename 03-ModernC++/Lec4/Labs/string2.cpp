#include<iostream>

void Get(std::string &str, std::string_view &search ,std::string_view &replace)
{
   while(str.find(search)!= std::string::npos)
   {
      int pos=str.find(search);
      str.replace(pos,search.length(),replace);
   }

}

int main()
{
    std::string s="Hello Hanan Atef";
    std::string_view f="Hanan";
    std::string_view r="Sara";
    Get(s,f,r);

    std::cout<<s<<std::endl;
    return 0;
}