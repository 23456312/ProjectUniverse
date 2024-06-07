#include "Contestants.h"
#include "Player.h"
#include <iostream>
#include <list>
#include <vector>

using namespace std;

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
      {"Jin Hyeon-ju", 23, "Korean", rankList},
      {"Oh Yoon-a", 15, "Korean", rankList},
      {"Kotoko", 16, "Japanese", rankList},
      {"Hwang Si-eun", 15, "Korean", rankList},
      {"Lee Sun-woo", 21, "Korean", rankList},
      {"Bae Ha-ram", 18, "Korean/American", rankList},
      {"Kim Su-min", 19, "Korean", rankList},
      {"Jeon Jin-yeong", 19, "Korean", rankList},
      {"Narumi", 19, "Japanese", rankList},
      {"Gabi", 15, "Canadian", rankList},
      {"Yuri", 19, "Japanese", rankList},
      {"Nizi", 14, "Japanese", rankList},
      {"Kim Su-jin", 14, "Korean", rankList},
      {"Goo Gyo-ryeon", 18, "Korean", rankList},
      {"Bae Yeram", 16, "American/ Korean", rankList},
      {"Lee Huran", 18, "Korean", rankList},
      {"Jayla", 18, "American", rankList},
      {"Yona", 25, "Chinese", rankList},
      {"Kwon Eun-hyung", 17, "Korean", rankList},
      {"Heo Sun-bin", 19, "Korean", rankList},
      {"Lee Eun-chae", 13, "Korean", rankList},
      {"Jang Su-a", 15, "Chinese", rankList},
      {"Minari", 15, "Japanese", rankList},
      {"Idota Yui", 16, "Chinese", rankList},
      {"Kim Soo-bin", 18, "Korean", rankList},
      {"Oh Da-eun", 22, "Korean", rankList},
      {"Lee Soo-vin", 20, "Korean", rankList},
      {"Choi Hye-rin", 21, "Korean", rankList},
      {"Kwon Chae-won", 25, "Korean", rankList},
      {"Nako", 15, "Japanese", rankList},
      {"Vanesya", 16, "Indonesian", rankList},
      {"Riel", 24, "Myanma", rankList},
      {"Park Ye-won", 20, "Korean", rankList},
      {"Aya Natsumi", 19, "Korean", rankList},
      {"Alyssa", 18, "Malaysian", rankList},
      {"Vu Linh Dan", 17, "Vietnamese", rankList},
      {"Ahn Seung-bi", 14, "Korean", rankList},
      {"Kim Seo-yeon", 17, "Korean", rankList},
      {"Yoon Soo-in", 19, "Korean", rankList},
      {"Kim Hyo-Jin", 17, "Korean", rankList},
      {"Enny", 20, "Russian", rankList},
      {"Choi Sung-eun", 19, "Korean", rankList},
      {"Kim So-Yul", 18, "Korean", rankList},
      {"Choi Yeo-Jin", 13, "Korean", rankList},
      {"Anxin", 14, "Chinese", rankList},
      {"Jeon Ji-eun", 19, "Korean", rankList},
      {"Kim Chae-a", 13, "Korean", rankList},
      {"Lee Su-an", 16, "Korean", rankList},
      {"Ouikikk", 18, "Korean", rankList},
      {"Yukino", 17, "Japanese", rankList},
      {"Xiaoyu", 23, "Chinese", rankList},
      {"Pia", 18, "Japanese", rankList},
      {"Yuriko", 18, "Japanese", rankList},
      {"Kim Hye-mi", 21, "Korean", rankList},
      {"Kim Yu-ri", 16, "Korean", rankList},
      {"Laura", 18, "Australian", rankList},
      {"Jessica", 15, "Italian", rankList},
      {"May", 22, "Thai", rankList},
      {"Jung Ji-won", 18, "Korean", rankList},
      {"Yuriko Honma", 17, "Japanese", rankList},
      {"Yang Eugene", 15, "Korean", rankList},
      {"Lee Jin-e", 20, "Korean", rankList},
      {"Min-ju", 23, "Korean", rankList},
      {"Kim Chae-won", 17, "Korean", rankList},
      {"Cho Min-seo", 15, "Korean", rankList},
      {"Zhou Jiaqi", 18, "Chinese", rankList},
      {"Kwon Yejin", 18, "Korean", rankList},
      {"Jeong Huigyeong", 18, "Korean", rankList},
      {"Cho Chae-Young", 18, "Korean", rankList},
      {"Mila", 14, "Japanese/ French", rankList},
      {"Yu", 16, "Japanese", rankList},
      {"Noh Yeon-Woo", 18, "Korean", rankList},
      {"Park Ye-hyeon", 15, "Korean", rankList},
      {"Yoo Ye-na", 15, "Korean", rankList},
      {"Izumi", 16, "Japanese", rankList},
      {"Jang Su-bin", 18, "Korean", rankList},

  };
}

void teammates(vector<Contestants> &contestants) {
  cout << "⋆ ⋆ Teammates ⋆ ⋆ \n";
  vector<Contestants> team = {};
  for (int i = 0; i < 7; i++) {
    int a = rand() % contestants.size();
    Contestants c = contestants[a];
    cout << "\n";
    c.info();
    team.push_back(c);
    contestants.erase(contestants.begin() + a);
  }
}

void tfinalteamates(vector<Contestants> &contestants) {
  cout << "︵‿︵‿୨♡ Teammates ♡୧‿︵‿︵ \n";
  vector<Contestants> team = {};
  for (int i = 0; i < 4; i++) {
    int a = rand() % contestants.size();
    Contestants c = contestants[a];
    cout << "\n";
    c.info();
    team.push_back(c);
    contestants.erase(contestants.begin() + a);
  }
}

void screenFinal() {
  cout << "\n";
  cout << "╔══ஓ๑‧̍̊·̊‧̥°̩̥˚̩̩̥͙°̩̥‧̥·̊‧̍̊ ♡ °̩̥˚̩̩̥͙°̩̥ ·͙*̩̩͙˚̩̥̩̥*̩̩̥͙·̩̩̥͙*̩̩̥͙˚̩̥̩̥*̩̩͙‧͙ °̩̥˚̩̩̥͙°̩̥ ♡ ‧̍̊·̊‧̥°̩̥˚̩̩̥͙°̩̥‧̥·̊‧̍̊๑ஓ══╗\n";
  cout << "✧⋄⋆⋅⋆⋄✧⋄⋆⋅⋆⋄✧ Universe  ✧⋄⋆⋅⋆⋄✧⋄⋆⋅⋆⋄✧\n";
  cout << "╚══ஓ๑♡‧̍̊·̊‧̥°̩̥˚̩̩̥͙°̩̥‧̥·̊‧̍̊ ♡ °̩̥˚̩̩̥͙°̩̥ ·͙*̩̩͙˚̩̥̩̥*̩̩̥͙·̩̩̥͙*̩̩̥͙˚̩̥̩̥*̩̩͙‧͙ °̩̥˚̩̩̥͙°̩̥ ♡ ‧̍̊·̊‧̥°̩̥˚̩̩̥͙°̩̥‧̥·̊‧̍̊๑ஓ══╝\n";
  cout << "\n";
  cout << "\n";
  cout << "    ♥♡ VS ♥♡    \n";
  cout << "\n";
  cout << "\n";
  cout << "┏━✦❘༻.·:*¨ ✘♚✘ ¨*:·.༺❘✦━━┓\n";
  cout << "─── ･ ｡ﾟ☆: *.Ticket to you .* :☆ﾟ. ───  \n";
  cout << "┗━✦❘༻.·:*¨ ✘♚✘ ¨*:·.༺❘✦━━┛ \n";
}

void screenVSNewSong() {
  cout << "\n";
  cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
  cout << "✦✧ Dreamers ✧✦\n";
  cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n";
  cout << "\n";
  cout << "\n";
  cout << "    ♥♡ VS ♥♡    \n";
  cout << "\n";
  cout << "\n";
  cout << "╔════════⋆★⋆════════╗\n";
  cout << "◄◄ Yummers ►► \n";
  cout << "╚════════⋆★⋆════════╝ \n";
}

void final(vector<Contestants> &contestants) {
  cout << "\n";
  cout << "\n";
  cout << "╔⏤⏤⏤╝•❅───✧❅✧⋄⋆⋅⋆⋄✧⋄⋆⋅⋆⋄✧❅✧───❅•╚⏤⏤⏤╗\n";
  cout << "THE FINAL OF UNIVERSE TICKET IS HERE \n";
  cout << "╔⏤⏤⏤╝•❅───✧❅✧⋄⋆⋅⋆⋄✧⋄⋆⋅⋆⋄✧❅✧───❅•╚⏤⏤⏤╗\n";
  cout << "\n";
  cout << "\n";
  cout << "☆ You'll be choosing one of the two final songs to perform  ☆ \n";
  cout << "\n";
  cout << "1 for: \n";
  cout << "•┈••✦ ❤ Dopamine ❤ ✦••┈•\n";
  cout << "\n";
  cout << "2 for: \n";
  cout << "════ ⋆★ Camera ★ ⋆ ════\n";
  cout << "\n";

  int choice = 0;

  cin >> choice;
  if (choice == 1) {
    cout << "GREAT! You've chosen Dopamine \n";
    cout << "Team Name: \n";
    cout << "══✿══╡°˖✧ Universe ✧˖°╞══✿══ \n";
    tfinalteamates(contestants);
    screenFinal();
    cout << "*.·:·.✧ ✦ Votes ✦ ✧.·:·.*\n";
    cout << "\n";
    cout << "\n";
    cout << "Votes been casted by the judges and the audience \n";
    cout << "With an 80% of votes\n";
    cout << "\n";
    cout << "\n";
    cout << "The Winner of Universe Ticket and the team debuting is...\n";
    cout << " ✦ The team Universe! ✦ \n";
    cout << "They will be debuting with the name PRISM! \n";
    cout << "\n";
    cout << "\n";
    cout << "₊˚ʚ ᗢThe end₊˚✧ ﾟ.";

  } else if (choice == 2) {
    cout << "Nice! You've chosen Camera \n";
    cout << "Team Name: \n";
    cout << "══✿══╡°˖✧ Universe ✧˖°╞══✿══ \n";
    tfinalteamates(contestants);
    screenFinal();
    cout << "*.·:·.✧ ✦ Votes ✦ ✧.·:·.*\n";
    cout << "Votes been casted by the judges and the audience \n";
    cout << "With an 80% of votes\n";
    cout << "The Winner of Universe Ticket and the team debuting is...\n";
    cout << " ✦ The team universe!  \n";
    cout << "*everything goes black*\n";
    cout << "*You can't hear anything*\n";
    cout << "\n";
    cout << "\n";
    cout << "Y̸̿̄͑͆̍̈ͅo̵̡̨̱͚͖̝͍̭̥̽ư̸̛̫̮̝̹̙͈̜̘͚̈́̓͗͌͗͋̌͘ ̷̦̯͉̖͑͒͂͆͋̓̃̐̌͘͜ḟ̴̢̻̟̓̒́̈̕̚a̶̙̣̹̻̰̗̩̠̱̔͌́͘i̵̛̲̮̦̔̈́͑͑̐͊l̵̘̤̹̙͇̇̆́̾̃̓̈́e̷̻͇̺͇̠̜̭͛͐͆́͒̂̂̀̈d̵̰̤̲̯̯͔͓͖̺̈́͋̒͋̄ͅ";
    cout << "\n";
    cout << "\n";
    cout << "You were eliminated, should've listened to the producer \n";
    cout << "The end.";
  }
}

void future() {
  cout << "╧╧╧╧Pstt╧╧╧╧\n";
  cout << "Listen to me, the final song is very important \n";
  cout << "The producer like a specific song \n";
  cout << "I can't tell you much \n";
  cout << "But be very careful on your choice \n";
  cout << "Since one would lead into the debut and the other one...\n";
  cout << "To your demise \n";
}

void newSongUnitIntro(vector<Contestants> &contestants) {
  cout << "In this part of the competition you'll be split into two teams and "
          "battle \n";
  cout << "✧ Choose your song ✧\n";
  cout << "Press 1 for: \n";
  cout << "❀Dream of Girls\n";
  cout << "Press 2 for: \n";
  cout << "❀Yummy Yum \n";
  int number = 0;
  cin >> number;
  if (number == 1) {
    cout << "Team Name: ";
    cout << "˚ ༘♡ ⋆｡˚ ꕥ Dreamers ˚ ༘♡ ⋆｡˚ ꕥ";
    cout << "-ˋ Song chosen ˊ-";
    cout << "✧Dream of Girls ✧";
    teammates(contestants);
    screenVSNewSong();

    int judge = 5;
    int team1 = 50;
    int team2 = 50;
    int teams[2] = {0, 0};
    int RankTotal = team1 + team2;

    for (int y = 0; y < judge; y++) {
      int votes = rand() % RankTotal;
      if (votes < team1) {
        teams[0]++;
      } else {
        teams[1]++;
      }
    }
    cout << "˚₊· ͟͟͞͞➳❥ Votes have been casted by our 5 judges...\n";
    cout << "♡ The results are the following ♡ \n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Yummers *✧･ﾟ\n";
    cout << "୨୧  " << teams[0] << "  ୨୧\n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Dreamers *✧･ﾟ\n";
    cout << "୨୧  " << teams[1] << "  ୨୧\n";

    if (teams[0] > teams[1]) {
      cout << "≪Im sorry, but you've been eliminated≫ \n";

    } else {
      cout << "•❅───✧❅✦❅✧───❅••❅───✧❅✦❅✧───❅••❅───✧❅✦❅✧───❅• \n";
      cout << "•┈••✦ Congrats! You've made it to the finals! ✦••┈•\n";
      cout << "✬ You are one of the last seven contestants ✬\n";
      cout << "\n";
      cout << "\n";
      cout << "╭── ⋅ ⋅ ── ─── ･ ｡ﾟ☆: *.☽ .* :☆ﾟ. ─── ── ⋅ ⋅ ──╮\n";
      cout << "─── ･ ｡ﾟ☆: *. Welcome to Final Station .* :☆ﾟ. ───\n";
      cout << "╰── ⋅ ⋅ ── ─── ･ ｡ﾟ☆: *.☽ .* :☆ﾟ. ─── ── ⋅ ⋅ ──╯\n";
      cout << "\n";
      cout << "\n";
      for (int i = 0; i < contestants.size(); i++) {
        if (contestants[i].getInitialRank() < 7) {
          contestants[i].elimination();
          contestants.erase(contestants.begin() + i);
        }
      }
      future();
      final(contestants);
    }

  } else if (number == 2) {
    cout << "Team Name: ";
    cout << "˚ ༘♡ ⋆｡˚ ꕥ Yummers ˚ ༘♡ ⋆｡˚ ꕥ";
    cout << "-ˋ Song chosen ˊ-";
    cout << "✧ Yummy Yum ✧";
    teammates(contestants);
    screenVSNewSong();

    int judge = 5;
    int team1 = 50;
    int team2 = 50;
    int teams[2] = {0, 0};
    int RankTotal = team1 + team2;

    for (int y = 0; y < judge; y++) {
      int votes = rand() % RankTotal;
      if (votes < team1) {
        teams[0]++;
      } else {
        teams[1]++;
      }
    }
    cout << "˚₊· ͟͟͞͞➳❥ Votes have been casted by our 5 judges...\n";
    cout << "♡ The results are the following ♡ \n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Dreamers *✧･ﾟ\n";
    cout << "୨୧  " << teams[0] << "  ୨୧\n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Yummers *✧･ﾟ\n";
    cout << "୨୧  " << teams[1] << "  ୨୧\n";

    if (teams[0] > teams[1]) {
      cout << "≪Im sorry, but you've been eliminated≫ \n";

    } else {
      cout << "•❅───✧❅✦❅✧───❅••❅───✧❅✦❅✧───❅••❅───✧❅✦❅✧───❅• \n";
      cout << "•┈••✦ Congrats! You've made it to the finals! ✦••┈•\n";
      cout << "✬ You are one of the last seven contestants ✬\n";
      cout << "\n";
      cout << "\n";
      cout << "╭── ⋅ ⋅ ── ─── ･ ｡ﾟ☆: *.☽ .* :☆ﾟ. ─── ── ⋅ ⋅ ──╮\n";
      cout << "─── ･ ｡ﾟ☆: *. Welcome to Final Station .* :☆ﾟ. ───\n";
      cout << "╰── ⋅ ⋅ ── ─── ･ ｡ﾟ☆: *.☽ .* :☆ﾟ. ─── ── ⋅ ⋅ ──╯\n";
      cout << "\n";
      cout << "\n";
      for (int i = 0; i < contestants.size(); i++) {
        if (contestants[i].getInitialRank() < 7) {
          contestants[i].elimination();
          contestants.erase(contestants.begin() + i);
        }
      }
      future();
      final(contestants);
    }
  }
}

void screenvsUnit() {
  cout << "\n";
  cout << "★・・・・・・★・・・・・・★・・・・・・★\n";
  cout << "☆ Visual Team ☆\n";
  cout << "★・・・・・・★・・・・・・★・・・・・・★\n";
  cout << "\n";
  cout << "\n";
  cout << "    ♥♡ VS ♥♡    \n";
  cout << "\n";
  cout << "\n";
  cout << "★・・・・・・★・・・・・・★・・・・・・★\n";
  cout << "☆ Vocal Team ☆\n";
  cout << "★・・・・・・★・・・・・・★・・・・・・★\n";
  cout << "\n";
  cout << "\n";
  cout << "    ♥♡ VS ♥♡    \n";
  cout << "\n";
  cout << "\n";
  cout << "★・・・・・・★・・・・・・★・・・・・・★\n";
  cout << "☆ Performance Team ☆\n";
  cout << "★・・・・・・★・・・・・・★・・・・・・★\n";
}

void unitStation(vector<Contestants> &contestants) {
  int number = 0;
  cout << "For Visual Team press 1, For Vocal Team press 2, For Performance "
          "Team press 3\n";
  cin >> number;
  if (number == 1) {

    cout << "\n";
    cout << "\n";
    cout << "。°。°。°。°。°  Visual Station  。°。°。°。°。°\n";
    cout << "Team Name: \n";
    cout << "𓆩 Visual Unit 𓆪\n";
    cout << "｜Song performing｜: \n";
    cout << "╔══ ❀•°❀°•❀ ══╗\n";
    cout << "Catallena, Orange Caramel\n";
    cout << "╚══ ❀•°❀°•❀ ══╝\n";

    teammates(contestants);
    screenvsUnit();

    int judge = 5;
    int team1 = 50;
    int team2 = 50;
    int team3 = 50;
    int teams[3] = {0, 0, 0};
    int RankTotal = team1 + team2 + team3;

    for (int y = 0; y < judge; y++) {
      int votes = rand() % RankTotal;
      if (votes < team1) {
        teams[0]++;
      } else if (votes < team1 + team2) {
        teams[1]++;
      } else {
        teams[2]++;
      }
    }
    cout << "˚₊· ͟͟͞͞➳❥ Votes have been casted by our 5 judges...\n";
    cout << "♡ The results are the following ♡ \n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Performance *✧･ﾟ\n";
    cout << "୨୧  " << teams[0] << "  ୨୧\n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Visual *✧･ﾟ\n";
    cout << "୨୧  " << teams[1] << "  ୨୧\n"; // Player's team
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Vocal *✧･ﾟ\n";
    cout << "୨୧  " << teams[2] << "  ୨୧\n";

    if (teams[0] > teams[1]) {
      cout << "≪Im sorry, but you've been eliminated≫ \n";
    } else if (teams[2] > teams[1]) {
      cout << "≪Im sorry, but you've been eliminated≫ \n";
    } else {
      cout << "˗✩‧ You've passed the second elimination round. The public is "
              "proud of you!! 14 out of the 82 contestants remain ‧✩˗ \n";
      cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
      cout << "─── ･ ｡ﾟ☆ Welcome to NEW SONG UNIT! ☆ﾟ. ───\n";
      cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
      
      for (int i = 0; i < contestants.size(); i++) {
        if (contestants[i].getInitialRank() < 14) {
          contestants[i].elimination();
          contestants.erase(contestants.begin() + i);
        }
      }
      newSongUnitIntro(contestants);
    }

  } else if (number == 2) {

    cout << "\n";
    cout << "\n";
    cout << "。°。°。°。°。°  Vocal Station  。°。°。°。°。°\n";
    cout << "Team Name: \n";
    cout << "𓆩 Vocal Unit 𓆪\n";
    cout << "｜Song performing｜: \n";
    cout << "╔══ ❀•°❀°•❀ ══╗\n";
    cout << "Beautiful, Wanna One\n";
    cout << "╚══ ❀•°❀°•❀ ══╝\n";

    teammates(contestants);
    screenvsUnit();

    int judge = 5;
    int team1 = 50;
    int team2 = 50;
    int team3 = 50;
    int teams[3] = {0, 0, 0};
    int RankTotal = team1 + team2 + team3;

    for (int y = 0; y < judge; y++) {
      int votes = rand() % RankTotal;
      if (votes < team1) {
        teams[0]++;
      } else if (votes < team1 + team2) {
        teams[1]++;
      } else {
        teams[2]++;
      }
    }
    cout << "˚₊· ͟͟͞͞➳❥ Votes have been casted by our 5 judges...\n";
    cout << "♡ The results are the following ♡ \n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Performance *✧･ﾟ\n";
    cout << "୨୧  " << teams[0] << "  ୨୧\n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Vocal *✧･ﾟ\n";
    cout << "୨୧  " << teams[1] << "  ୨୧\n"; // Player's team
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Visual *✧･ﾟ\n";
    cout << "୨୧  " << teams[2] << "  ୨୧\n";

    if (teams[0] > teams[1]) {
      cout << "≪Im sorry, but you've been eliminated≫ \n";
    } else if (teams[2] > teams[1]) {
      cout << "≪Im sorry, but you've been eliminated≫ \n";
    } else {
      cout << "˗✩‧ You've passed the second elimination round. The public is "
              "proud of you!! 14 out of the 82 contestants remain ‧✩˗ \n";
      cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
      cout << "─── ･ ｡ﾟ☆ Welcome to NEW SONG UNIT! ☆ﾟ. ───\n";
      cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
      for (int i = 0; i < contestants.size(); i++) {
        if (contestants[i].getInitialRank() < 14) {
          contestants[i].elimination();
          contestants.erase(contestants.begin() + i);
        }
      }
      newSongUnitIntro(contestants);
    }

  } else if (number == 3) {
    cout << "\n";
    cout << "\n";
    cout << "。°。°。°。°。°  Performance Station  。°。°。°。°。°\n";
    cout << "Team Name: \n";
    cout << "𓆩 Visual Unit 𓆪\n";
    cout << "｜Song performing｜: \n";
    cout << "╔══ ❀•°❀°•❀ ══╗\n";
    cout << "Loco, Itzy\n";
    cout << "╚══ ❀•°❀°•❀ ══╝\n";

    teammates(contestants);
    screenvsUnit();

    int judge = 5;
    int team1 = 50;
    int team2 = 50;
    int team3 = 50;
    int teams[3] = {0, 0, 0};
    int RankTotal = team1 + team2 + team3;

    for (int y = 0; y < judge; y++) {
      int votes = rand() % RankTotal;
      if (votes < team1) {
        teams[0]++;
      } else if (votes < team1 + team2) {
        teams[1]++;
      } else {
        teams[2]++;
      }
    }
    cout << "˚₊· ͟͟͞͞➳❥ Votes have been casted by our 5 judges...\n";
    cout << "♡ The results are the following ♡ \n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Visual *✧･ﾟ\n";
    cout << "୨୧  " << teams[0] << "  ୨୧\n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Performance *✧･ﾟ\n";
    cout << "୨୧  " << teams[1] << "  ୨୧\n"; // Player's team
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Vocal *✧･ﾟ\n";
    cout << "୨୧  " << teams[2] << "  ୨୧\n";

    if (teams[0] > teams[1]) {
      cout << "≪Im sorry, but you've been eliminated≫ \n";
    } else if (teams[2] > teams[1]) {
      cout << "≪Im sorry, but you've been eliminated≫ \n";
    } else {
      cout << "˗✩‧ You've passed the second elimination round. The public is "
              "proud of you!! 14 out of the 82 contestants remain ‧✩˗ \n";
      cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
      cout << "─── ･ ｡ﾟ☆ Welcome to NEW SONG UNIT! ☆ﾟ. ───\n";
      cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
      for (int i = 0; i < contestants.size(); i++) {
        if (contestants[i].getInitialRank() < 14) {
          contestants[i].elimination();
          contestants.erase(contestants.begin() + i);
        }
      }
      newSongUnitIntro(contestants);
    }
  }
}

void introUnitStation() {
  cout << "You've made it farther than most contestants! ‧̫‧\n";
  cout << "Congrats! \n";
  cout << "\n";
  cout << "⍟⍟⍟ You've made a lot of progress ⍟⍟⍟\n";
  cout << "✭ In this part of the competition you will choose your team in the "
          "skill you have an advantage on ✭ \n";
  cout << "\n";
  cout << "\n";
  cout << "The teams are as follows: \n";
  cout << "\n";
  cout << "◈ Visual (Expressions while performing and stage presence \n";
  cout << "◈ Vocal (High Notes, stable vocals)\n";
  cout << "◈ Performance (Great dancing skills) \n";
}

void prismSongs() {

  vector<string> lowPRISMSongs{"•----Nan, Clon----•",
                               "۵ As I told you, Kim Sung-jae ۵"};

  int PrismSongs = rand() % 2;
  cout << "\n";
  cout << "\n";
  cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
  cout << lowPRISMSongs[PrismSongs] << "\n";
  cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n";
  cout << "\n";
  cout << "\n";
}

void middleDecider() {

  vector<string> middlePRISMSongs{"✧*̥˚ Girls on Top, Boa *̥˚✧",
                                  "•,¸,.·' Super star, Jewelry  '·.,¸,•"};

  int PrismSongs = rand() % 2;
  cout << "\n";
  cout << "\n";
  cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
  cout << middlePRISMSongs[PrismSongs] << "\n";
  cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n";
  cout << "\n";
  cout << "\n";
};

void highDecider() {

  vector<string> highprismSongs{"╰*°:⋆ₓRush Hour (Original Songₒ*°:⋆ₓₒ",
                                "●・○・WHATEVE (Original Song)●・○・●"};

  int highPrismSongs = rand() % 2;
  cout << "\n";
  cout << "\n";
  cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
  cout << highprismSongs[highPrismSongs] << "\n";
  cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n";
  cout << "\n";
  cout << "\n";
};

void PRISMintro(vector<Contestants> &contestants) {
  cout << "\n";
  cout << "\n";
  cout << ".・。.・゜✭・You've made it to the second part of Universe "
          "Ticket!.・✫・゜・。. \n";
  cout << "༶ Welcome to Road To PRISM ༶ \n";
  cout << "【 ☆ 】Choose a number between 1 - 41 【 ☆ 】\n";
  int number = 0;
  cin >> number;
  if (number <= 14) {

    cout << "✧༺  High Category (상) ༻∞\n";
    cout << "❍ Since you are in the high category you'll be performing "
            "Original Songs! ❍ \n";
    cout << "Team Name: \n";
    cout << "*.·:·.✧ Highway ✧.·:·.*\n";
    cout << "｜Song performing｜: \n";
    highDecider();
    teammates(contestants);

    cout << "\n";
    cout << "▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰\n";
    cout << "。／Highway Team＼。\n";
    cout << "▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰\n";
    cout << "\n";
    cout << "\n";
    cout << "    ♥♡ VS ♥♡    \n";
    cout << "\n";
    cout << "\n";
    cout << "▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰\n";
    cout << "。／Forever Team＼。\n";
    cout << "▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰\n";
    cout << "\n";
    cout << "\n";

    int judge = 5;
    int team1 = 50;
    int team2 = 50;
    int teams[2] = {0, 0};
    int RankTotal = team1 + team2;

    for (int y = 0; y < judge; y++) {
      int votes = rand() % RankTotal;
      if (votes < team1) {
        teams[0]++;
      } else {
        teams[1]++;
      }
    }
    cout << "˚₊· ͟͟͞͞➳❥ Votes have been casted by our 5 judges...\n";
    cout << "♡ The results are the following ♡ \n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Forever *✧･ﾟ\n";
    cout << "୨୧  " << teams[0] << "  ୨୧\n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Highway *✧･ﾟ\n";
    cout << "୨୧  " << teams[1] << "  ୨୧\n";

    if (teams[0] > teams[1]) {
      cout << "≪Im sorry, but you've been eliminated≫ \n";

    } else {
      cout << "˗✩‧ You've passed the second elimination round. The public is "
              "proud of you!! 21 out of the 82 contestants remain ‧✩˗ \n";
      cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
      cout << "─── ･ ｡ﾟ☆ Welcome to UNIT STATION! ☆ﾟ. ───\n";
      cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
      
      for (int i = 0; i < contestants.size(); i++) {
        if (contestants[i].getInitialRank() < 20) {
          contestants[i].elimination();
          contestants.erase(contestants.begin() + i);
        }
      }
      introUnitStation();
      unitStation(contestants);
    }

  } else if (number > 14 & number <= 28) {

    cout << "✧༺  Mid Category (중) ༻∞\n";
    cout << "❍ Welcome to the mid category! ❍ \n";
    cout << "Team Name: \n";
    cout << "*.·:·.✧ Star ✧.·:·.*\n";
    cout << "｜Song performing｜: \n";
    middleDecider();
    teammates(contestants);

    cout << "\n";
    cout << "▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰\n";
    cout << "。／Star Team＼。\n";
    cout << "▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰\n";
    cout << "\n";
    cout << "\n";
    cout << "    ♥♡ VS ♥♡    \n";
    cout << "\n";
    cout << "\n";
    cout << "▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰\n";
    cout << "。／On Top Team＼。\n";
    cout << "▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰\n";
    cout << "\n";
    cout << "\n";

    int judge = 5;
    int team1 = 50;
    int team2 = 50;
    int teams[2] = {0, 0};
    int RankTotal = team1 + team2;

    for (int y = 0; y < judge; y++) {
      int votes = rand() % RankTotal;
      if (votes < team1) {
        teams[0]++;
      } else {
        teams[1]++;
      }
    }
    cout << "˚₊· ͟͟͞͞➳❥ Votes have been casted by our 5 judges...\n";
    cout << "♡ The results are the following ♡ \n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for On Top *✧･ﾟ\n";
    cout << "୨୧  " << teams[0] << "  ୨୧\n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Star *✧･ﾟ\n";
    cout << "୨୧  " << teams[1] << "  ୨୧\n";

    if (teams[0] > teams[1]) {
      cout << "≪Im sorry, but you've been eliminated≫ \n";

    } else {
      cout << "˗✩‧ You've passed the second elimination round. The public is "
              "proud of you!! 21 out of the 82 contestants remain ‧✩˗ \n";
      cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
      cout << "─── ･ ｡ﾟ☆ Welcome to UNIT STATION! ☆ﾟ. ───\n";
      cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
      
      for (int i = 0; i < contestants.size(); i++) {
        if (contestants[i].getInitialRank() < 20) {
          contestants[i].elimination();
          contestants.erase(contestants.begin() + i);
        }
      }
      introUnitStation();
      unitStation(contestants);
    }

  } else if (number > 28 & number <= 41) {

    cout << "✧༺  Low Category (하) ༻∞\n";
    cout << "❍ Welcome to the low category! ❍ \n";
    cout << "Team Name: \n";
    cout << "*.·:·.✧ Volcano ✧.·:·.*\n";
    cout << "｜Song performing｜: \n";
    prismSongs();
    teammates(contestants);

    cout << "\n";
    cout << "▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰\n";
    cout << "。／Volcano Team＼。\n";
    cout << "▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰\n";
    cout << "\n";
    cout << "\n";
    cout << "    ♥♡ VS ♥♡    \n";
    cout << "\n";
    cout << "\n";
    cout << "▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰\n";
    cout << "。／Bulldozer Team＼。\n";
    cout << "▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰\n";
    cout << "\n";
    cout << "\n";

    int judge = 5;
    int team1 = 50;
    int team2 = 50;
    int teams[2] = {0, 0};
    int RankTotal = team1 + team2;

    for (int y = 0; y < judge; y++) {
      int votes = rand() % RankTotal;
      if (votes < team1) {
        teams[0]++;
      } else {
        teams[1]++;
      }
    }
    cout << "˚₊· ͟͟͞͞➳❥ Votes have been casted by our 5 judges...\n";
    cout << "♡ The results are the following ♡ \n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Bulldozer *✧･ﾟ\n";
    cout << "୨୧  " << teams[0] << "  ୨୧\n";
    cout << "\n";
    cout << "\n";
    cout << "*✧･ﾟVotes for Volcano *✧･ﾟ\n";
    cout << "୨୧  " << teams[1] << "  ୨୧\n";

    if (teams[0] > teams[1]) {
      cout << "≪Im sorry, but you've been eliminated≫ \n";

    } else {
      cout << "˗✩‧ You've passed the second elimination round. The public is "
              "proud of you!! 21 out of the 82 contestants remain ‧✩˗ \n";
      cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
      cout << "─── ･ ｡ﾟ☆ Welcome to UNIT STATION! ☆ﾟ. ───\n";
      cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
      
      for (int i = 0; i < contestants.size(); i++) {
        if (contestants[i].getInitialRank() < 20) {
          contestants[i].elimination();
          contestants.erase(contestants.begin() + i);
        }
      }
      introUnitStation();
      unitStation(contestants);
    }
  }
}

void CvW(vector<Contestants> &contestants, Player p1) {

  int judge = 5;
  int team1 = 60;
  int team2 = 40;
  int teams[2] = {0, 0};
  int RankTotal = team1 + team2;

  for (int y = 0; y < judge; y++) {
    int votes = rand() % RankTotal;
    if (votes < team1) {
      teams[0]++;
    } else {
      teams[1]++;
    }
  }
  cout << "˚₊· ͟͟͞͞➳❥ Votes have been casted by our 5 judges...\n";
  cout << "♡ The results are the following ♡ \n";
  cout << "*✧･ﾟVotes for Winners *✧･ﾟ\n";
  cout << "୨୧  " << teams[0] << "  ୨୧\n";
  cout << "*✧･ﾟVotes for Challengers *✧･ﾟ\n";
  cout << "୨୧  " << teams[1] << "  ୨୧\n";

  if (teams[0] > teams[1]) {
    cout << "≪Im sorry, but you've been eliminated≫ \n";

  } else {
    cout << "˗✩‧ You've passed the first elimination round. 41 out of the 82 "
            "contestants remain ‧✩˗ \n";
    cout << "‿︵‿︵୨˚̣̣̣͙୧ - - ୨˚̣̣̣͙୧‿︵‿︵\n";
    cout << "✦ Welcome to ROAD TO PRISM! ✦\n";
    for (int i = 0; i < contestants.size(); i++) {
      if (contestants[i].getInitialRank() < 41) {
        contestants[i].elimination();
        contestants.erase(contestants.begin() + i);
      }
    }
    PRISMintro(contestants);
  }
}

void WvC(vector<Contestants> &contestants, Player p1) {

  int judge = 5;
  int team1 = 60;
  int team2 = 40;
  int teams[2] = {0, 0};
  int RankTotal = team1 + team2;

  for (int y = 0; y < judge; y++) {
    int votes = rand() % RankTotal;
    if (votes < team1) {
      teams[0]++;
    } else {
      teams[1]++;
    }
  }
  cout << "˚₊· ͟͟͞͞➳❥ Votes have been casted by our 5 judges...\n";
  cout << "♡ The results are the following ♡ \n";
  cout << "*✧･ﾟVotes for Winners *✧･ﾟ\n";
  cout << "୨୧  " << teams[0] << "  ୨୧\n";
  cout << "*✧･ﾟVotes for Challengers *✧･ﾟ\n";
  cout << "୨୧  " << teams[1] << "  ୨୧\n";

  if (teams[0] < teams[1]) {
    cout << "≪Im sorry, but you've been eliminated≫ \n";

  } else {
    cout << "˗✩‧ You've passed the first elimination round. 41 out of the 82 "
            "contestants remain ‧✩˗ \n";

    for (int i = 0; i < contestants.size(); i++) {
      if (contestants[i].getInitialRank() < 41) {
        contestants[i].elimination();
        contestants.erase(contestants.begin() + i);
      }
    }
    cout << "‿︵‿︵୨˚̣̣̣͙୧ - - ୨˚̣̣̣͙୧‿︵‿︵\n";
    cout << "✦ Welcome to ROAD TO PRISM! ✦\n";
    PRISMintro(contestants);
  }
}

void teamWinnersNames() {
  vector<string> winnerSongs{"╰┈➤ TT, Twice", ".·͙*̩̩͙˚̩̥̩̥*̩̩̥͙　Mister, Kara　*̩̩̥͙˚̩̥̩̥*̩̩͙‧͙ .",
                             "ˏˋ°•*⁀➷Into the New World, Girls Generation",
                             "ꕥ Red Flavor, Red Velvet",
                             " ̗̀➛Ddu-Du-Ddu-Du, BlackPink"};

  int chosenSong = rand() % 5;
  cout << "\n";
  cout << "\n";
  cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
  cout << winnerSongs[chosenSong] << "\n";
  cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n";
  cout << "\n";
  cout << "\n";
}

void teamChallengersNames() {
  vector<string> challengerSongs{
      "╰┈➤ Tell Me, Wonder Girls", ".·͙*̩̩͙˚̩̥̩̥*̩̩̥͙　Diva, After School　*̩̩̥͙˚̩̥̩̥*̩̩͙‧͙ .",
      "ˏˋ°•*⁀➷Ah Choo, Lovelyz", "ꕥ Dolphin, Oh my girl", ": ̗̀➛Fire, 2NE1"};

  int chosenSong = rand() % 5;
  cout << "\n";
  cout << "\n";
  cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
  cout << challengerSongs[chosenSong] << "\n";
  cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n";
  cout << "\n";
  cout << "\n";
}

void teamC() {
  cout << "  Challenger's Team  "
       << "\n";
}

void teamW() {
  cout << "  Winner's Team  "
       << "\n";
}

void cowTeam(vector<Contestants> &contestants, Player p1) {

  cout << "◌The group song chosen for your presentation is...◌\n";

  cout << "\n";
  cout << "\n";
  cout << "\n";
  cout << "♡Teammates♡\n";
  vector<Contestants> team = {};
  for (int i = 0; i < 7; i++) {
    int a = rand() % contestants.size();
    Contestants c = contestants[a];
    cout << "\n";
    c.info();
    team.push_back(c);
    contestants.erase(contestants.begin() + a);
  }
  cout << "✧ Challengers Song ✧\n";
  cout << "\n";
  teamChallengersNames();
  cout << "\n";
  cout << "\n";
  cout << "    ♥♡ VS ♥♡    \n";
  cout << "\n";
  cout << "\n";
  cout << "✩ Winners Song ✩\n";
  teamWinnersNames();
}

void RandomSong() {
  vector<string> vvSongs{
      "✧*̥˚ Hurt ┊ New Jeans ┊  *̥˚✧ ", "✧*̥˚ Pop ┊ Nayeon ┊  *̥˚✧ ",
      "✧*̥˚ Gashinma ┊ Sunmi ┊  *̥˚✧ ", "✧*̥˚ Selfish ┊ YooA ┊  *̥˚✧ ",
      "✧*̥˚ Bbibbi ┊ IU ┊  *̥˚✧ "};
  int chosenSong = rand() % 5;
  cout << "\n";
  cout << "\n";
  cout << "★The chosen song is... ★\n";
  cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
  cout << vvSongs[chosenSong] << "\n";
  cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n";
}

void WinnerDecider(vector<Contestants> &contestants, Player p1, int choice1,
                   vector<Contestants> bottom) {
  int judge = 5;
  int rank1 = bottom[choice1].getInitialRank();
  int rank2 = p1.getInitialRank();
  int votes[2] = {0, 0};
  int RankTotal = rank1 + rank2;

  for (int y = 0; y < judge; y++) {
    int voter = rand() % RankTotal;
    if (voter < rank1) {
      votes[0]++;
    } else {
      votes[1]++;
    }
  }
  cout << "˚₊· ͟͟͞͞➳❥ Votes have been casted by our 5 judges...\n";
  cout << "♡ The results are the following ♡ \n";
  cout << "*✧･ﾟVotes for " << bottom[choice1].getName() << "*✧･ﾟ\n";
  cout << "୨୧  " << votes[0] << "  ୨୧\n";
  cout << "*✧･ﾟVotes for " << p1.getName() << "*✧･ﾟ\n";
  cout << "୨୧  " << votes[1] << "  ୨୧\n";

  if (votes[0] > votes[1]) {
    cout << "You've been sent to the challengers team! \n";
    cout << "\n";
    cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
    teamC();
    cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n";
    cowTeam(contestants, p1);
    CvW(contestants, p1);

  } else {
    cout << "˗ˏˋ You've been sent to the Winners team! ´ˎ˗ \n";
    cout << "\n";
    cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
    teamW();
    cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n";
    cowTeam(contestants, p1);
    WvC(contestants, p1);
  }
}

void doTop(vector<Contestants> &contestants, int topLimit, Player p1) {
  std::cout << "\n";
  cout << "✧༺ WOW! You've been chosen to be part of the top " << topLimit
       << " ༻∞";
  std::cout << "\n";
  std::cout << "✧Choose your opponent✧";
  cout << "\n";

  int x = 0;
  int choice1 = 0;

  vector<Contestants> bottom = {};
  for (Contestants c : contestants) {
    if (c.getInitialRank() > topLimit && c.isEliminated == false) {
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

  vector<string> loadingscreen{

      "    █▒▒▒▒▒▒▒▒▒ 1%    ",
      "    ███▒▒▒▒▒▒▒ 15%    ", "    █████▒▒▒▒▒ 30%    ",
      "    ███████▒▒▒ 70%    ", "    ██████████ 100%    "};

  for (const string &loadingscreen : loadingscreen) {
    cout << loadingscreen << endl;
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

  void RandomSong();

  WinnerDecider(contestants, p1, choice1, bottom);
}

void bottom50(vector<Contestants> &contestants) {
  std::cout << "\n";
  cout << "Oh no! Due to your rank being in the low 50% you've been chosen "
          "by... \n";
  cout << "   ╭─〔❨✧✧❩〕─╮    \n";

  int i = rand() % contestants.size();
  while (contestants[i].getInitialRank() > 51) {
    i = rand() % contestants.size();
  };
  contestants[i].info();
  cout << "   ╰─〔❨✧✧❩〕─╯    \n";

  void RandomSong();
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
  vector<Contestants> contestants = createContestants(RankList);

  printRank(RankList);

  if (p1.getInitialRank() < 51) {
    doTop(contestants, 51, p1);

  } else if (p1.getInitialRank() >= 51) {
    bottom50(contestants);
    RandomSong();
    WinnerDecider(contestants, p1, 25, contestants);
  }
}
