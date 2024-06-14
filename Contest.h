/*
 * Project Universe
 * Sebastián Pérez García
 * A01707346
 * 13/06/2024
 *
 * Esta clase defina objeto de tipo Contest que que contiene todas las
 * operaciones para poder empezar con el show y las diferentes stages de la
 * simulacion. Esta clase es utilizada por la funciones pribcipales que son
 * vitales para que el programa funcione
 *
 */
// Inclusión de la clase Player,Contestant,NonPlayableCharacter,Pretty Printer y
// librerías necesarias
#ifndef CONTEST_H
#define CONTEST_H
#include "Contestant.h"
#include "NonPlayableCharacter.h"
#include "Player.h"
#include "PrettyPrinter.h"
#include <iostream>
#include <vector>

const int NUM_CONTESTANTS = 82;

class Contest {
  // Metodos Privados del objeto
private:
  /*******************************************************************************

                                       SETUP

  ********************************************************************************/
  vector<Contestant *> contestants; // Puntero para polimorfismo, almacena
                                    // punteros a objetos Contestant
  vector<int> rankList;             // Vector para clasificar a los concursantes
  PrettyPrinter printer; // Instancia de PrettyPrinter para imprimir información

  // Función para crear un nuevo jugador
  /**
   * Función para crear un nuevo jugador.
   *
   * @param name Nombre del jugador.
   * @param age Edad del jugador.
   * @param nationality Nacionalidad del jugador.
   * @return none
   */

  void createPlayer(string name, int age, string nationality) {
    Player *player = new Player(name, age, nationality);
    int initialRank = player->getInitialRank(rankList);
    rankList[initialRank] = 1;
    player->setRank(initialRank);
    contestants.push_back(player);
    player->info();
  }

  // Función para crear los concursantes
  /**
   * Función para crear los concursantes.
   *
   * Se crea una lista de concursantes con sus respectivos nombres, edades y
   * nacionalidades. Luego, se asigna un rango inicial a cada concursante y se
   * agregan a la lista de concursantes.
   *
   * @param Ninguno
   * @return Ninguno
   */
  void createContestants() {
    vector<NonPlayableCharacter *> contestantsList = {
        new NonPlayableCharacter("Elisia", 15, "Filipina"),
        new NonPlayableCharacter("Bang Yun-ha", 15, "Korean"),
        new NonPlayableCharacter("Nana", 16, "Japanese"),
        new NonPlayableCharacter("Gehlee", 16, "Filipina"),
        new NonPlayableCharacter("Lim Seo-won", 13, "Korean"),
        new NonPlayableCharacter("Jin Hyeon-ju", 23, "Korean"),
        new NonPlayableCharacter("Oh Yoon-a", 15, "Korean"),
        new NonPlayableCharacter("Kotoko", 16, "Japanese"),
        new NonPlayableCharacter("Hwang Si-eun", 15, "Korean"),
        new NonPlayableCharacter("Lee Sun-woo", 21, "Korean"),
        new NonPlayableCharacter("Bae Ha-ram", 18, "Korean/American"),
        new NonPlayableCharacter("Kim Su-min", 19, "Korean"),
        new NonPlayableCharacter("Jeon Jin-yeong", 19, "Korean"),
        new NonPlayableCharacter("Narumi", 19, "Japanese"),
        new NonPlayableCharacter("Gabi", 15, "Canadian"),
        new NonPlayableCharacter("Yuri", 19, "Japanese"),
        new NonPlayableCharacter("Nizi", 14, "Japanese"),
        new NonPlayableCharacter("Kim Su-jin", 14, "Korean"),
        new NonPlayableCharacter("Goo Gyo-ryeon", 18, "Korean"),
        new NonPlayableCharacter("Bae Yeram", 16, "American/ Korean"),
        new NonPlayableCharacter("Lee Huran", 18, "Korean"),
        new NonPlayableCharacter("Jayla", 18, "American"),
        new NonPlayableCharacter("Yona", 25, "Chinese"),
        new NonPlayableCharacter("Kwon Eun-hyung", 17, "Korean"),
        new NonPlayableCharacter("Heo Sun-bin", 19, "Korean"),
        new NonPlayableCharacter("Lee Eun-chae", 13, "Korean"),
        new NonPlayableCharacter("Jang Su-a", 15, "Chinese"),
        new NonPlayableCharacter("Minari", 15, "Japanese"),
        new NonPlayableCharacter("Idota Yui", 16, "Chinese"),
        new NonPlayableCharacter("Kim Soo-bin", 18, "Korean"),
        new NonPlayableCharacter("Oh Da-eun", 22, "Korean"),
        new NonPlayableCharacter("Lee Soo-vin", 20, "Korean"),
        new NonPlayableCharacter("Choi Hye-rin", 21, "Korean"),
        new NonPlayableCharacter("Kwon Chae-won", 25, "Korean"),
        new NonPlayableCharacter("Nako", 15, "Japanese"),
        new NonPlayableCharacter("Vanesya", 16, "Indonesian"),
        new NonPlayableCharacter("Riel", 24, "Myanma"),
        new NonPlayableCharacter("Park Ye-won", 20, "Korean"),
        new NonPlayableCharacter("Aya Natsumi", 19, "Korean"),
        new NonPlayableCharacter("Alyssa", 18, "Malaysian"),
        new NonPlayableCharacter("Vu Linh Dan", 17, "Vietnamese"),
        new NonPlayableCharacter("Ahn Seung-bi", 14, "Korean"),
        new NonPlayableCharacter("Kim Seo-yeon", 17, "Korean"),
        new NonPlayableCharacter("Yoon Soo-in", 19, "Korean"),
        new NonPlayableCharacter("Kim Hyo-Jin", 17, "Korean"),
        new NonPlayableCharacter("Enny", 20, "Russian"),
        new NonPlayableCharacter("Choi Sung-eun", 19, "Korean"),
        new NonPlayableCharacter("Kim So-Yul", 18, "Korean"),
        new NonPlayableCharacter("Choi Yeo-Jin", 13, "Korean"),
        new NonPlayableCharacter("Anxin", 14, "Chinese"),
        new NonPlayableCharacter("Jeon Ji-eun", 19, "Korean"),
        new NonPlayableCharacter("Kim Chae-a", 13, "Korean"),
        new NonPlayableCharacter("Lee Su-an", 16, "Korean"),
        new NonPlayableCharacter("Ouikikk", 18, "Korean"),
        new NonPlayableCharacter("Yukino", 17, "Japanese"),
        new NonPlayableCharacter("Xiaoyu", 23, "Chinese"),
        new NonPlayableCharacter("Pia", 18, "Japanese"),
        new NonPlayableCharacter("Yuriko", 18, "Japanese"),
        new NonPlayableCharacter("Kim Hye-mi", 21, "Korean"),
        new NonPlayableCharacter("Kim Yu-ri", 16, "Korean"),
        new NonPlayableCharacter("Laura", 18, "Australian"),
        new NonPlayableCharacter("Jessica", 15, "Italian"),
        new NonPlayableCharacter("May", 22, "Thai"),
        new NonPlayableCharacter("Jung Ji-won", 18, "Korean"),
        new NonPlayableCharacter("Yuriko Honma", 17, "Japanese"),
        new NonPlayableCharacter("Yang Eugene", 15, "Korean"),
        new NonPlayableCharacter("Lee Jin-e", 20, "Korean"),
        new NonPlayableCharacter("Min-ju", 23, "Korean"),
        new NonPlayableCharacter("Kim Chae-won", 17, "Korean"),
        new NonPlayableCharacter("Cho Min-seo", 15, "Korean"),
        new NonPlayableCharacter("Zhou Jiaqi", 18, "Chinese"),
        new NonPlayableCharacter("Kwon Yejin", 18, "Korean"),
        new NonPlayableCharacter("Jeong Huigyeong", 18, "Korean"),
        new NonPlayableCharacter("Cho Chae-Young", 18, "Korean"),
        new NonPlayableCharacter("Mila", 14, "Japanese/ French"),
        new NonPlayableCharacter("Yu", 16, "Japanese"),
        new NonPlayableCharacter("Noh Yeon-Woo", 18, "Korean"),
        new NonPlayableCharacter("Park Ye-hyeon", 15, "Korean"),
        new NonPlayableCharacter("Yoo Ye-na", 15, "Korean"),
        new NonPlayableCharacter("Izumi", 16, "Japanese"),
        new NonPlayableCharacter("Jang Su-bin", 18, "Korean"),
    };
    for (NonPlayableCharacter *npc : contestantsList) {
      int initialRank = npc->getInitialRank(rankList);
      rankList[initialRank] = 1;
      npc->setRank(initialRank);
      contestants.push_back(npc);
    }
  }

  // Función para obtener el jugador
  /**
   * Función para obtener el jugador.
   *
   * Se recorre la lista de concursantes y se retorna el primer concursante cuyo
   * tipo sea "Player". Si no se encuentra ningún jugador, se retorna nullptr.
   *
   * @param None
   * @return Puntero al jugador o nullptr si no se encuentra ningún jugador
   */
  Contestant *getPlayer() {
    for (Contestant *c : contestants) {
      if (c->getType() == "Player") {
        return c;
      }
    }

    return nullptr;
  }

  /*******************************************************************************

                                  General Functions

  ********************************************************************************/

  // Función para obtener la lista de concursantes activos
  /**
   * Función para obtener la lista de concursantes activos.
   *
   * Se crea una lista de concursantes activos que no han sido eliminados y cuyo
   * tipo es "Contestant".
   *
   * @param None
   * @return Lista de punteros a concursantes activos
   */
  vector<Contestant *> getActiveContestants() {
    vector<Contestant *> activeContestantsList = {};
    for (Contestant *c : contestants) {
      if (c->getIsEliminated() == false && c->getType() == "Contestant") {
        activeContestantsList.push_back(c);
      }
    }
    return activeContestantsList;
  };

  // Función para crear un equipo de concursantes
  /**
   * Función para crear un equipo de concursantes.
   *
   * Se crea un equipo de tamaño dado, seleccionando concursantes aleatorios de
   * la lista de concursantes activos.
   *
   * @param teamSize Tamaño del equipo a crear
   * @return Equipo de concursantes creado
   */

  vector<Contestant *> createTeam(int teamSize) {
    vector<Contestant *> team = {};
    vector<Contestant *> activeContestantsList = getActiveContestants();
    for (int i = 0; i < teamSize; i++) {
      Contestant *c = getRandomContestant(activeContestantsList);
      while (teamContainsContestant(team, c)) {
        c = getRandomContestant(activeContestantsList);
      }
      team.push_back(c);
    }
    return team;
  }

  // Función para obtener un concursante aleatorio de una lista dada
  /**
   * Función para obtener un concursante aleatorio de una lista dada.
   *
   * Se selecciona un concursante aleatorio de la lista proporcionada.
   *
   * @param list Lista de concursantes
   * @return Concursante aleatorio seleccionado de la lista
   */

  Contestant *getRandomContestant(vector<Contestant *> &list) {
    int a = rand() % list.size();
    return list[a];
  }

  // Función para verificar si un equipo contiene un concursante dado
  /**
   * Función para verificar si un equipo contiene un concursante dado.
   *
   * Verifica si un equipo dado ya contiene un concursante específico.
   *
   * @param team Equipo de concursantes
   * @param contestant Concursante a verificar
   * @return true si el equipo contiene el concursante, false de lo contrario
   */

  bool teamContainsContestant(vector<Contestant *> &team,
                              Contestant *contestant) {
    for (Contestant *t : team) {
      if (t == contestant) {
        return true;
      }
    }
    return false;
  }

  // Función para eliminar concursantes por rango límite y equipo
  /**
   * Función para eliminar concursantes cuyo rango sea inferior al límite y no
   * estén en el equipo.
   *
   * Se recorre la lista de concursantes y se elimina a aquellos cuyo tipo sea
   * "Contestant", cuyo rango sea inferior al límite especificado y que no estén
   * en el equipo proporcionado.
   *
   * @param limit Límite de rango para eliminar concursantes
   * @param team Equipo de concursantes
   * @return None
   */

  void eliminateContestants(int limit, vector<Contestant *> team) {
    int numberOfTeammatesPassLimit = 0;
    for (Contestant *c : team) {
      if (c->getRank() >= limit) {
        numberOfTeammatesPassLimit++;
      }
    }

    int isPlayerPassLimit = getPlayer()->getRank() >= limit;
    int limitThreshold = numberOfTeammatesPassLimit + isPlayerPassLimit;

    cout << limit - limitThreshold << endl;

    for (Contestant *c : contestants) {
      if (c->getType() == "Contestant" &&
          c->getRank() > limit - limitThreshold) {
        if (!teamContainsContestant(team, c)) {
          c->elimination();
          c->setIsEliminated(true);
        }
      }
    }
  }

  // Función para simular una batalla entre dos equipos
  /**
   * Función para simular una batalla entre dos equipos.
   *
   * Se simula una batalla entre dos equipos basada en las probabilidades de
   * cada equipo.
   *
   * @param team1Probability Probabilidad de victoria del primer equipo
   * @param team2Probability Probabilidad de victoria del segundo equipo
   * @return Puntero a un arreglo de tamaño 2 que contiene el número de
   * victorias de cada equipo
   */

  int *battle(int team1Probability, int team2Probability) {
    int judge = 5;
    int team1 = team1Probability;
    int team2 = team2Probability;
    int *teams = new int[2];
    teams[0] = 0;
    teams[1] = 0;
    int RankTotal = team1 + team2;

    for (int y = 0; y < judge; y++) {
      int votes = rand() % RankTotal;
      if (votes < team1) {
        teams[0]++;
      } else {
        teams[1]++;
      }
    }
    return teams;
  }

  // Función para simular una batalla entre tres equipos
  /**
   * Función para simular una batalla entre tres equipos.
   *
   * Se simula una batalla entre tres equipos basada en las probabilidades de
   * cada equipo.
   *
   * @param team1Probability Probabilidad de victoria del primer equipo
   * @param team2Probability Probabilidad de victoria del segundo equipo
   * @param teams3Probability Probabilidad de victoria del tercer equipo
   * @return Puntero a un arreglo de tamaño 3 que contiene el número de
   * victorias de cada equipo
   */

  int *battle(int team1Probability, int team2Probability,
              int teams3Probability) {
    int judge = 5;
    int team1 = team1Probability;
    int team2 = team2Probability;
    int team3 = teams3Probability;
    int *teams = new int[3];
    teams[0] = 0;
    teams[1] = 0;
    teams[2] = 0;
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
    return teams;
  }

  // Función para establecer que el jugador ha perdido
  /**
   * Función para establecer que el jugador ha perdido.
   *
   * Se establece que el jugador ha sido eliminado y se imprime un mensaje
   * indicando que ha perdido.
   *
   * @param None
   * @return None
   */

  void playerLose() {
    Contestant *player = getPlayer();
    player->setIsEliminated(true);
    printer.playerLose();
    player->elimination();
  }

  /*******************************************************************************

                                ROUND 1 (TOP VS BOTTOM)

  ********************************************************************************/

  // Función para realizar una ronda de alto rendimiento
  /**
   * Realiza una ronda de alto rendimiento.
   *
   * Imprime las mejores actuaciones, obtiene concursantes activos y solicita al
   * usuario que elija un oponente.
   *
   * @param topLimit Límite superior de rendimiento
   * @return Ninguno
   */

  void performTop(int topLimit) {
    printer.printTopPerformance(topLimit);

    cout << "Get active contestants..." << endl;
    vector<Contestant *> activeContestants = getActiveContestants();
    int i = 0;
    for (Contestant *c : activeContestants) {
      i++;
      printer.printContestant(i, *c);
    }

    printer.printOpponentChoice();
    int choice1 = 0;
    cin >> choice1;
    Contestant *opponent = activeContestants[choice1 - 1];
    printer.printContestant(*opponent);
    perform(*opponent);
  }

  // Función para realizar una ronda de rendimiento inferior
  /**
   * Realiza una ronda de rendimiento inferior.
   *
   * Selecciona un oponente aleatorio entre los concursantes activos y actúa
   * contra ellos.
   *
   * @param bottomLimit Límite inferior de rendimiento
   * @return Ninguno
   */

  void performBottom(int bottomLimit) {
    vector<Contestant *> activeContestants = getActiveContestants();
    Contestant *opponent = getRandomContestant(activeContestants);
    printer.printBottomPerformance(*opponent, bottomLimit);
    perform(*opponent);
  }

  // Función a realizar contra un oponente
  /**
   * Actúa contra un oponente.
   *
   * Imprime información sobre el enfrentamiento, simula una batalla y determina
   * el ganador.
   *
   * @param oponente Oponente contra el que actuar
   * @return Ninguno
   */

  void perform(Contestant &opponent) {
    Contestant *player = getPlayer();
    printer.printVs(*player, opponent);
    printer.printRandomSong();
    printer.printLoadingScreen();
    int *votes = battle(60, 40);
    printer.printVotes(votes[0], *player, votes[1], opponent);
    if (votes[0] < votes[1]) {
      performChallengersWin();
    } else {
      performWinnersWin();
    }
  }

  /*******************************************************************************

                            ROUND 2 (CHALLENGERS VS WINNERS)

  ********************************************************************************/

  // Función para realizar acciones cuando los retadores ganan
  /**
   * Realiza acciones cuando los retadores ganan.
   *
   * Crea un equipo de retadores, imprime información sobre el equipo y realiza
   * la ronda.
   *
   * @return Ninguno
   */

  void performChallengersWin() {
    vector<Contestant *> challengersTeam = createTeam(7);
    printer.printChallengersTeam(challengersTeam);
    perform("Challengers", challengersTeam);
  }

  // Función para realizar acciones cuando ganen los ganadores
  /**
   * Realiza acciones cuando ganan los ganadores.
   *
   * Crea un equipo de ganadores, imprime información sobre el equipo y realiza
   * la ronda.
   *
   * @return Ninguno
   */

  void performWinnersWin() {
    vector<Contestant *> winnersTeam = createTeam(7);
    printer.printWinnersTeam(winnersTeam);
    perform("Winners", winnersTeam);
  }

  // Función para realizar una ronda entre dos equipos
  /**
   * Realiza una ronda entre dos equipos.
   *
   * Imprime información sobre el enfrentamiento, simula una batalla, determina
   * el ganador, y realiza las acciones correspondientes en función del
   * resultado.
   *
   * @param teamName Nombre del equipo que participará en la ronda
   * @param team Referencia al equipo que participa en la ronda
   * @return Ninguno
   */

  void perform(string teamName, vector<Contestant *> &team) {
    printer.printChallengerSongs();
    printer.printVs();
    printer.printWinnersSongs();
    printer.printLoadingScreen();
    int *teams = battle(60, 40);
    printer.printVotes(teams[0], "Winners", teams[1], "Challengers");
    if (teamName == "Winners" && teams[1] > teams[0]) {
      playerLose();
      return;
    }
    if (teamName == "Chanllengers" && teams[0] > teams[1]) {
      playerLose();
      return;
    }

    eliminateContestants(41, team);
    int activeContestants = getActiveContestants().size();
    printer.playerWin(activeContestants, NUM_CONTESTANTS);
    printer.printRoadToPrism();
    performRoadToPrism();
  }

  /*******************************************************************************

                            ROUND 3 (ROAD TO PRISM)

  ********************************************************************************/

  // Función para realizar acciones relacionadas con el Camino al Prisma
  /**
   * Realiza acciones relacionadas con el Camino al Prisma.
   *
   * Presenta el evento PRISM, solicita al usuario que elija una categoría,
   * y realiza las acciones correspondientes en función de la categoría elegida.
   *
   * @return Ninguno
   */

  void performRoadToPrism() {
    printer.PRISMIntro();
    int number = 0;
    cin >> number;
    if (number <= 14) {
      PRISMHighCategory();
    } else if (number > 14 & number <= 28) {
      PRISMIntroMediumCategory();
    } else {
      PRISMIntroLowCategory();
    }
  }

  // Función para realizar acciones relacionadas con el PRISM de categoría alta
  /**
   * Realiza acciones relacionadas con el PRISM de alta categoría.
   *
   * Introduce el evento de categoría alta PRISM y realiza la ronda Road to
   * Prism.
   *
   * @return Ninguno
   */

  void PRISMHighCategory() {
    printer.PRISMIntroHighCategory();
    performRoadToPrism("Highway", "Forever");
  }

  // Función para realizar acciones relacionadas con la categoría de medio PRISM
  /**
   * Realiza acciones relacionadas con la categoría mediana PRISM.
   *
   * Introduce el evento de categoría media PRISM y realiza la ronda Road to
   * Prism.
   *
   * @return Ninguno
   */

  void PRISMIntroMediumCategory() {
    printer.PRISMIntroMediumCategory();
    performRoadToPrism("Star", "On Top");
  }

  // Función para realizar acciones relacionadas con el PRISM de categoría baja
  /**
   * Realiza acciones relacionadas con el PRISM categoría baja.
   *
   * Introduce el evento de categoría baja PRISM y realiza la ronda Road to
   * Prism.
   *
   * @return Ninguno
   */

  void PRISMIntroLowCategory() {
    printer.PRISMIntroLowCategory();
    performRoadToPrism("Volcano", "Bulldozer");
  }

  // Función para realizar la ronda Camino al Prisma
  /**
   * Realiza la ronda Camino al Prisma.
   *
   * Crea un equipo, imprime información sobre los equipos, simula una batalla,
   * determina el ganador y realiza las acciones correspondientes en función del
   * resultado.
   *
   * @param playerTeam Nombre del primer equipo
   * @param opponentTeam Nombre del segundo equipo
   * @return Ninguno
   */

  void performRoadToPrism(string playerTeam, string opponentTeam) {
    vector<Contestant *> team = createTeam(7);
    printer.printPRISMTeam(playerTeam + " Team");
    printer.printVs();
    printer.printPRISMTeam(opponentTeam + " Team");
    int *teams = battle(50, 50);
    printer.printVotes(teams[0], playerTeam, teams[1], opponentTeam);
    if (teams[0] < teams[1]) {
      playerLose();
      return;
    }

    eliminateContestants(20, team);
    int activeContestants = getActiveContestants().size();
    printer.playerWin(activeContestants, NUM_CONTESTANTS);
    performUnitStation();
  }

  /*******************************************************************************

                            ROUND 4 (UNIT STATION)

  ********************************************************************************/

  // Función para realizar acciones relacionadas con el evento Unit Station
  /**
   * Realiza acciones relacionadas con el evento Unit Station.
   *
   * Presenta el evento Unit Station, solicita al usuario que elija una
   * estación, y realiza las acciones correspondientes en función de la estación
   * elegida.
   *
   * @return Ninguno
   */

  void performUnitStation() {
    printer.printUnitStation();
    int number = 0;
    cin >> number;
    if (number == 1) {
      performUnitStation("Visual", "Catallena, Orange Caramel");
    } else if (number == 2) {
      performUnitStation("Vocal", "Beautiful, Wanna One");
    } else {
      performUnitStation("Performance", "Loco, Itzy");
    }
  }

  // Función para realizar acciones relacionadas con una Estación Unitaria
  // específica
  /**
   * Realiza acciones relacionadas con una Estación de Unidad específica.
   *
   * Presenta el evento Unit Station con una estación y canción específicas,
   * crea un equipo, imprime información sobre el equipo, simula una batalla,
   * determina el ganador y realiza las acciones correspondientes en función del
   * resultado.
   *
   * @param stationName Nombre de la estación unitaria
   * @param songName Nombre de la canción de la Unit Station
   * @return Ninguno
   */

  void performUnitStation(string stationName, string songName) {
    vector<Contestant *> team = createTeam(7);
    printer.printUnitStation(stationName, songName, team);
    int *teams = battle(50, 50, 50);
    printer.printVotes(teams[0], "Visual", teams[1], "Vocal", teams[2],
                       "Performance");
    if (stationName == "Visual" &&
        (teams[1] > teams[0] || teams[2] > teams[0])) {
      playerLose();
      return;
    }

    if (stationName == "Vocal" &&
        (teams[0] > teams[1] || teams[2] > teams[1])) {
      playerLose();
      return;
    }

    if (stationName == "Performance" &&
        (teams[0] > teams[2] || teams[1] > teams[2])) {
      playerLose();
      return;
    }

    eliminateContestants(14, team);
    int activeContestants = getActiveContestants().size();
    printer.playerWin(activeContestants, NUM_CONTESTANTS);
    printer.printNewSongUnit();
    performNewSongUnit();
  }

  /*******************************************************************************

                            ROUND 5 (NEW SONG UNIT)

  ********************************************************************************/

  // Función para realizar acciones relacionadas con el evento Nueva Unidad de
  // Canción
  /**
   * Realiza acciones relacionadas con el evento New Song Unit.
   *
   * Presenta el evento Nueva unidad de canción, solicita al usuario que elija
   * una unidad, y realiza las acciones correspondientes en función de la unidad
   * elegida.
   *
   * @return Ninguno
   */

  void performNewSongUnit() {
    printer.printNewSongUnitIntro();
    int number = 0;
    cin >> number;
    if (number == 1) {
      performSongUnit("Dreamers", "Dream of Girls");
    } else {
      performSongUnit("Yummers", "Yummy Yum");
    }
  }

  // Función para realizar acciones relacionadas con una Unidad de Canción
  // específica
  /**
   * Realiza acciones relacionadas con una Unidad de Canción específica.
   *
   * Introduce un evento de unidad de canción específica con una unidad y
   * canción determinadas, crea un equipo, imprime información sobre el equipo,
   * simula una batalla, determina el ganador y realiza las acciones
   * correspondientes en función del resultado.
   *
   * @param teamName Nombre del equipo de la unidad de canción
   * @param songName Nombre de la canción de la unidad
   * @return Ninguno
   */

  void performSongUnit(string teamName, string songName) {
    vector<Contestant *> team = createTeam(7);
    printer.printSongUnit(teamName, songName, team);
    int *teams = battle(50, 50);
    printer.printVotes(teams[0], "Dreamers", teams[1], "Yummers");
    if (teamName == "Dreamers" && teams[1] > teams[0]) {
      playerLose();
      return;
    }

    if (teamName == "Yummers" && teams[0] > teams[1]) {
      playerLose();
      return;
    }

    eliminateContestants(7, team);
    int activeContestants = getActiveContestants().size();
    printer.playerWin(activeContestants, NUM_CONTESTANTS);
    printer.printFinalStation();
    performFinalStation();
  }

  /*******************************************************************************

                            ROUND 6 (FINAL)

  ********************************************************************************/

  // Función para realizar acciones relacionadas con el evento Estación Final
  /**
   * Realiza acciones relacionadas con el evento Estación Final.
   *
   * Presenta el evento Estación final, solicita al usuario que elija una
   * estación, y realiza las acciones correspondientes en función de la estación
   * elegida.
   *
   * @return Ninguno
   */

  void performFinalStation() {
    printer.printFinal();

    int choice = 0;
    cin >> choice;
    if (choice == 1) {
      performFinalStation("Dopamine", "Universe");
      printer.printFinalDopamine();
    } else {
      performFinalStation("Camera", "Ticket to you");
      printer.printFinalCamera();
    }
  }

  // Función para realizar acciones relacionadas con una Estación Final
  // específica
  /**
   * Realiza acciones relacionadas con una Estación Final específica.
   *
   * Presenta un evento de Estación Final específico con una canción y un equipo
   * determinados, crea un equipo e imprime información sobre la actuación
   * final.
   *
   * @param songName Nombre de la canción final
   * @param teamName Nombre del equipo final
   * @return Ninguno
   */

  void performFinalStation(string songName, string teamName) {
    vector<Contestant *> team = createTeam(4);
    printer.printFinalPerformance(songName, teamName, team);
  }
  // Metodos publicos del objeto
public:
  // Constructor de la clase Contest
  Contest() {
    contestants = {};
    rankList = vector<int>(NUM_CONTESTANTS, 0);
    printer = PrettyPrinter();
  };

  // Función para presentar la competencia
  /**
   * Presenta la competencia.
   *
   * Imprime un mensaje introductorio utilizando el objeto PrettyPrinter.
   *
   * @return Ninguno
   */

  void intro() { printer.printIntro(); }

  // Función para imprimir la lista de clasificación
  /**
   * Imprime la lista de clasificación.
   *
   * Itera a través del vector RankList e imprime cada elemento.
   *
   * @return Ninguno
   */

  void printRankList() {
    for (int x : rankList)
      cout << x << " ";
  }

  // Función para iniciar la competición
  /**
   *Inicia la competición.
   *
   * Crea el jugador, crea concursantes que no son jugadores, determina si el
   *jugador pertenece a los de mejor o peor desempeño y realiza las acciones
   *correspondientes.
   *
   * @param pName Nombre del jugador
   * @param pAge Edad del jugador
   * @param pNationality Nacionalidad del jugador
   * @return Ninguno
   */

  void start(string pName, int pAge, string pNationality) {
    createPlayer(pName, pAge, pNationality);
    createContestants();
    int mid = 51;
    if (getPlayer()->getRank() < mid) {
      performTop(mid - 1);
    } else {
      performBottom(mid);
    }
  };
};

#endif