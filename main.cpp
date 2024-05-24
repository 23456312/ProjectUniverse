#include <iostream>
#include "Player.h"
#include "Contestants.h"
#include<vector>
#include <list>
using namespace std;

//Both of the functions are currently not working due to missing aspects of the code. 

void elimination(Player p1, int Judge){
    cout<<"Womp womp"<< endl;
}

void elimination(class Contestants ){
    cout<< "Eliminatedd" << endl;
}

int main() {
  std::cout << "𓆩𝓦𝓮𝓵𝓬𝓸𝓶𝓮 𝓽𝓸 𝓽𝓱𝓮 𝓯𝓲𝓻𝓼𝓽 𝓼𝓮𝓪𝓼𝓸𝓷 𝓸𝓯 𝓤𝓷𝓲𝓿𝓮𝓻𝓼𝓮 𝓣𝓲𝓬𝓴𝓮𝓽𓆪\n";
  std::cout<<"\n";
  std::cout << "┌── ⋆⋅☆⋅⋆ ──┐\n";
  std::cout << "   ⪩Rules⪨ \n";
  std::cout<< "❀유니버스 티켓\n";
  std::cout<< "❀ Have fun! \n";
  std::cout <<"└── ⋆⋅☆⋅⋆ ──┘\n";
  std::cout<<"\n";
  std::cout<<"☆From all people all over the world, you've been chosen as one of the lucky contestants to participate in the show"<<endl;

  std::cout<<"\n";
    
vector<int> Rank ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82};
    
  srand(time(NULL));
  string name;
  int age;
  string nationality;
  int initialRank;
  initialRank = rand() % Rank.size();


    
  std::cout<< "❥Enter your name:\n"; 
  cin>> name;
  std::cout<<"❥Enter your age:\n";
  cin>> age;
  std::cout<<"❥Enter your nationality:\n";
  cin>> nationality;
  
  std::cout<<"\n";
  std::cout<<"★・・・STATS・・・★\n";
  std::cout<<"● NAME ●\n "; 
  std::cout<<"⟡ "<< name << endl;
  std::cout<<"○ AGE ○\n "; 
  std::cout<<"⟡ "<< age << endl;
  std::cout<<"● NATIONALITY ●\n "; 
  std::cout<<"⟡ "<< nationality<< endl; 
  std::cout<<"○ INITIAL RANK ○\n "; 
  std::cout<<"⟡ "<< initialRank << endl;

Rank.erase(Rank.begin()+ initialRank);
    
vector<Contestants> Contestants = {
    {"Elisia", 15, "Filipina",0},
    {"Bang Yun-ha", 15, "Korean",0},
    {"Nana", 16, "Japanese",0},
    {"Gehlee", 16, "Filipina",0},
    {"Lim Seo-won", 13, "Korean",0},
};

for (int i =0; i < Contestants.size();i++){
    initialRank = rand() % Rank.size();
    Contestants[i].initialRank = Rank[initialRank];
    Rank.erase(Rank.begin()+ initialRank);
}

  Player p1{name, age, nationality, initialRank};

    if (p1.initialRank < 51){
        std::cout<<"\n";
        std::cout<< "✧Choose your opponent✧";
        std::cout<<"\n";
         for (const auto& contestant : Contestants) {
             if (contestant.initialRank > 51){
                 std::cout<<"\n";
                 cout << "☾ Name: " << contestant.name 
                 << ",\n ☾ Age: " << contestant.age 
                 << ",\n ☾ Nationality: " << contestant.nationality 
                 << ",\n ☾ Rank: " << contestant.initialRank << endl;
                 std::cout<<"\n";
             }
         }
    }else if (p1.initialRank > 51){
        cout << "You don't get to choose \n";
        //Player gets chosen by a ranom member of a higher rank
    }


    
    //1v1 function starts
    

    
}

