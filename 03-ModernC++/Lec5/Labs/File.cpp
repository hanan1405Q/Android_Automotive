#include<iostream>
#include<fstream>
#include<vector>
#include <algorithm>
#include<iomanip>

int main ()
{
   std::vector<int> v;
   int x;
   int max =0, min=0 , sum=0 ;
   double avg=0;

   std::cout<<"Hello Here";

   std::ifstream infile("input.txt");
   if(! infile)
   {
      std::cout<<"Error in opening the Input File"<<std::endl;
      return 1;
   }
   std::ofstream outfile("output.txt");
   std::cout<<"Hello Here";
   if(! outfile)
   {
      std::cout<<"Error in opening the output File"<<std::endl;
      return 1;
   }

   
  while (infile>>x)
  { 
    v.push_back(x);

  }
 
 
  if(!v.empty())
  {  
     for(const auto &val : v)
    {
        std::cout<<val<<std::endl;
        sum+=val;
    }

     avg=static_cast<double>(sum/v.size());
     min = *std::min_element(v.begin(), v.end());
     max = *std::max_element(v.begin(), v.end());
  }
 
  
  outfile<<std::setw(40)<<std::setfill('-')<<" "<<std::endl;
  
  outfile<<"|"<<std::setw(5)<<"Max"<<std::setw(5)<<"|"<<std::setw(5)<<"Min"<<std::setw(5)<<"|"
  <<std::setw(5)<<"Sum"<<std::setw(5)<<"|"<<std::setw(5)<<"Avg"<<std::setw(5)<<"|"<<std::endl;
   
   outfile<<"|"<<std::setw(5)<<max<<std::setw(5)<<"|"<<std::setw(5)<<min<<std::setw(5)<<"|"
  <<std::setw(5)<<sum<<std::setw(5)<<"|"<<std::setw(5)<<std::setprecision(2)<<std::fixed<<avg<<std::setw(5)<<"|";
   
   infile.close();
   outfile.close();


   std::cout << "Output file 'output.txt' created successfully." << std::endl;

    return 0;
}