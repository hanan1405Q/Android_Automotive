
#include<iostream>
#include<vector>
#include<random>

class Battleship
{
private:
     bool board=false;
     int  Numguess=0;
     int MaxGuess=5;
     int Locx=0;
     int LocY=0;
public:
    Battleship(int maxguess);
    bool guesses(int x , int y);
    bool gameOver ();
    int getGuess();
};

Battleship::Battleship(int maxguess)
{
    MaxGuess=maxguess;

    std::cout<<"Welcome to Battleship! \n";
    std::cout<<"You have 5 guess to find battleship in a 5*5 grid. \n";
    std::vector<std::vector<int>> v (5,std::vector<int>(5));

     // Initialize a random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0,5);

    // Generate random number in the range [min, max]
    Locx = distrib(gen);
    LocY= distrib(gen);
    v[Locx][LocY]=1;

    board=v.empty(); 
  
 
    for(auto &arr:v)
    {
        for(auto &val: arr)
        {
            std::cout<<val<<" ";
        }

        std::cout<<std::endl;
    }

}

bool Battleship::guesses(int x,int y)
{
   try
   {
      if( (x>=5)||(y>=5) )
      {
         throw std::string("Exceed the boundery of the input \n");
         return -1;
      }
     
     /*This mean that we have avalid input*/
      Numguess++;

      if(Numguess<=MaxGuess)
        {
            if(x==Locx&&y==LocY)
            {   
                std::cout<<"You Hit the Battleship!\n";
                std::cout<<"You won in the "<< Numguess <<" guess\n";
                return true;
            }

            else 
            {
                std::cout<<"You Missed ... You have "<<(MaxGuess-Numguess)<<" guesses.\n";
                if(x==Locx)
                {
                std::cout<<"You are in the Same Row.\n";
                }
                if(y==LocY)
                {
                std::cout<<"You are in the Same Column.\n";
                }
            }
        }

        else
            std::cout<<"GameOver !!\n";

        return false;
   }

    catch(const std::string& e)
    {
        std::cerr << e << '\n';
    }
   
}


bool Battleship::gameOver()
{
    return (MaxGuess==Numguess);
}

int Battleship::getGuess()
{
    return Numguess;
}
int main()
{
    Battleship b(5);
    int x,y;
    bool guess=false;

    while(!b.gameOver() && !guess )
    {
        std::cout<<"Enter your Geuss (row and column) : ";
        std::cin>>x >>y ;
       guess=  b.guesses(x,y);
    }

    std::cout<<"GameOver !!\n";


}

