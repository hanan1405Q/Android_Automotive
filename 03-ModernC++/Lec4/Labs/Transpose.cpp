#include<iostream>
#include<vector>

void Transpose (std::vector<std::vector<int>> &v , std::vector<std::vector<int>> &d)
{
   


}

int main()
{
   std::vector<std::vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
   std::vector<std::vector<int>> d(v[0].size(), std::vector<int>(v.size())) ;
   int m=v.size();
   int n=v[0].size();
   
/*
   //there is a problem in this implementation !!!!
   for(int i=0;i<m;i++)
   {
      for (int j=0;j<n;j++)
      {
         d[i].push_back(v[j][i]);
         std::cout<<d[i][j];
      }
   }
*/

for(int i=0;i<m;i++)
   {
      for (int j=0;j<n;j++)
      {
         d[i][j]=v[j][i];
      }
   }
   for(auto &arr:d)
   {
     for(auto &value:arr)
     {
        std::cout<<value  ;

     }
     
      std::cout<<std::endl;
   }

    return 0;
}



