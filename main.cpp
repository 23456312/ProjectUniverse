#include "Contestants.h"
#include "Player.h"
#include <iostream>
#include <list>
#include <vector>

using namespace std;

// Both of the functions are currently not working due to missing aspects of the
// code.

// void elimination(Player p1, int Judge){
//     cout<<"Womp womp"<< endl;
// }

// void elimination(class Contestants ){
//     cout<< name << "Has been eliminated" << endl;
// }

void intro() {
  std::cout << "𓆩𝓦𝓮𝓵𝓬𝓸𝓶𝓮 𝓽𝓸 𝓽𝓱𝓮 𝓯𝓲𝓻𝓼𝓽 𝓼𝓮𝓪𝓼𝓸𝓷";
  std::cout << "\n";
  std::cout << "┌── ⋆⋅☆⋅⋆ ──┐\n";
  std::cout << "   ⪩Rules⪨ \n";
  std::cout << "❀유니버스 티켓\n";
  std::cout << "❀ Have fun! \n";
  std::cout << "└── ⋆⋅☆⋅⋆ ──┘\n";
  std::cout << "\n";
  std::cout << "☆From all people all over the world, you've been chosen as one "
               "of the lucky contestants to participate in the show"
            << endl;

  std::cout << "\n";
}

void printRank(vector<int> &rankList) {
  for (int x : rankList)
    cout << x << " ";
}

vector<Contestants> createContestants(vector<int> &rankList) {
  return vector<Contestants>{
      {"Elisia", 15, "Filipina", rankList},
      {"Bang Yun-ha", 15, "Korean", rankList},
      {"Nana", 16, "Japanese", rankList},
      {"Gehlee", 16, "Filipina", rankList},
      {"Lim Seo-won", 13, "Korean", rankList},
  };
}

void doTop(vector<Contestants> &contestants, int topLimit, Player p1) {
  std::cout << "\n";
  cout << "✧༺ WOW! You've been chosen to be part of the top " << topLimit << " ༻∞";
  std::cout << "\n";
  std::cout << "✧Choose your opponent✧";
  cout << "\n";

  int x = 0;
  int choice1 = 0;


  vector<Contestants> bottom = {};
  for (Contestants c : contestants) {
    if (c.initialRank > topLimit && c.isEliminated == false) {
      cout << "\n";
      cout << "【 ★ 】" << x << "【 ★ 】"; // ss
      c.info();
      bottom.push_back(c);
      x += 1;
    }
  }

  std::cout << "\n";
  cout << ".⋅ ۵ Write the number at the top of your opponent ۵ ⋅." << endl;
  cin >> choice1;
  cout << "\n";
  cout << "♥* You've chosen! *♥" << endl; 
  cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗";
  bottom[choice1].info();
  cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝";
  cout << "\n";
  cout << "\n";

  vector <string> loadingscreen{ "    𝐍𝐨𝐰 𝐥𝐨𝐚𝐝𝐢𝐧𝐠. . .    "
    "    █▒▒▒▒▒▒▒▒▒ 1%    ", "    ███▒▒▒▒▒▒▒ 15%    ", "    █████▒▒▒▒▒ 30%    ","    ███████▒▒▒ 70%    ", "    ██████████ 100%    "
  };
  
 for(const string& loadingscreen: loadingscreen){
   cout << loadingscreen <<endl;
 }

  cout << "\n";
  cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
  bottom[choice1].info();
  cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n";
  cout << "\n";
  cout << "\n";
  cout << "    ♥♡ VS ♥♡    \n";
  cout << "\n";
  cout << "\n";
  cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
  p1.info();
  cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n";
  
}

void RandomSong(){
  vector <string> vvSongs{ "✧*̥˚ Hurt ┊ New Jeans ┊  *̥˚✧ ","✧*̥˚ Pop ┊ Nayeon ┊  *̥˚✧ ", "✧*̥˚ Gashinma ┊ Sunmi ┊  *̥˚✧ ", "✧*̥˚ Selfish ┊ YooA ┊  *̥˚✧ ", "✧*̥˚ Bbibbi ┊ IU ┊  *̥˚✧ "
  };
  int chosenSong = rand() % 5;
    cout << "\n";
    cout << "\n";
    cout << "★The chosen song is... ★\n";
    cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
    cout << vvSongs[chosenSong] << "\n";
    cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n"; 
}

void WinnerDecider(vector<Contestants> &contestants, Player p1 ){
  //rand
}


void bottom50(vector<Contestants> &contestants) {
  std::cout << "\n";
  cout << "Oh no! Due to your rank being in the low 50% you've been chosen "
          "by... \n";
  cout << "   ╭─〔❨✧✧❩〕─╮    \n";

  int i = rand() % contestants.size();
  while (contestants[i].initialRank > 51) {
    i = rand() % contestants.size();
  };
  contestants[i].info();
  cout << "   ╰─〔❨✧✧❩〕─╯    \n";
}

int main() {
  intro();

  vector<int> RankList(81, 0);

  srand(time(NULL));
  string name;
  int age;
  string nationality;
  int initialRank;

  initialRank = rand() % RankList.size();

  std::cout << "❥Enter your name:\n";
  cin >> name;
  std::cout << "❥Enter your age:\n";
  cin >> age;
  std::cout << "❥Enter your nationality:\n";
  cin >> nationality;

  Player p1{name, age, nationality, initialRank};

  p1.info();

  RankList[initialRank - 1] = 1;
  printRank(RankList);
  vector<Contestants> contestants = createContestants(RankList);
  // for (Contestants c : contestants) {
  //   c.info();
  // }

  printRank(RankList);

  if (p1.initialRank < 51) {
    doTop(contestants, 51, p1);
    RandomSong();

  } else if (p1.initialRank >= 51) {
    bottom50(contestants);
    // Player gets chosen by a ranom member of a higher rank
  }

  // 1v1 starts
}
