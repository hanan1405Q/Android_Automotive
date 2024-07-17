#include<iostream>


enum class Error
{
   BadRequest=400,
   NotFound=404,
   ServerError=500,
   GetwayTimeout=504

};

void printError(Error x)
{
   switch(x)
   {
      case Error::BadRequest:
           std::cout<<"BadRequest"<<std::endl;
      break;
      case Error::NotFound:
           std::cout<<"NotFounf"<<std::endl;
      break;
      case Error::ServerError:
           std::cout<<"ServerError"<<std::endl;
      break;
       case Error::GetwayTimeout:
           std::cout<<"Getwayinteger"<<std::endl;
      break;

      default:
           std::cout<<"NotSuportedCode"<<std::endl;
            

   }

}

int main (void)
{
  Error err = {Error::BadRequest};

    printError(err);

}