/*
 * Project Universe
 * Sebastián Pérez García
 * A01707346
 * 13/06/2024
 *
 * Este clase objeto de tipo PrettyPrinter que guarda todas las partes impresas del programa.
 * 
 */

// Inclusión de la clase Contestant y librerías necesarias
#include "Contestant.h"
#include <chrono>
#include <iostream>
#include <thread>
#ifndef PRETTYPRINTER_H
#define PRETTYPRINTER_H

using namespace std;

// Declaración de la clase Pretty Printer
class PrettyPrinter {
//Metodos publicos del objeto
public:

//Función para imprimir la introducción del concurso.
/**
 * Imprime la introducción al concurso.
 * 
 * Emite un mensaje introductorio con reglas y palabras de bienvenida.
 * 
 * @return Ninguno
 */

  void printIntro() {
    std::cout << "𓆩𝓦𝓮𝓵𝓬𝓸𝓶𝓮 𝓽𝓸 𝓽𝓱𝓮 𝓯𝓲𝓻𝓼𝓽 𝓼𝓮𝓪𝓼𝓸𝓷";
    std::cout << "\n";
    std::cout << "┌── ⋆⋅☆⋅⋆ ──┐\n";
    std::cout << "   ⪩Rules⪨ \n";
    std::cout << "❀유니버스 티켓\n";
    std::cout << "❀ Have fun! \n";
    std::cout << "└── ⋆⋅☆⋅⋆ ──┘\n";
    std::cout << "\n";
    std::cout
        << "☆From all people all over the world, you've been chosen as one "
           "of the lucky contestants to participate in the show"
        << endl;

    std::cout << "\n";
  }

// Función para imprimir el desempeño de los mejores
/**
 * Imprime los detalles de rendimiento de los mejores.
 * 
 * Muestra un mensaje que indica la selección del jugador como mejor jugador y le indica 
 * ellos para elegir a su oponente.
 * 
 * @param topLimit El límite que define a los mejores
 * @return Ninguno
 */

  void printTopPerformance(int topLimit) {
    std::cout << "\n";
    cout << "✧༺ WOW! You've been chosen to be part of the top " << topLimit
         << " ༻∞";
    std::cout << "\n";
    std::cout << "✧Choose your opponent✧";
    cout << "\n";
  }

// Función para imprimir los datos del concursante
/**
 * Imprime los datos de un concursante.
 * 
 * Genera la información de un concursante, incluido su número en la lista.
 * 
 * @param num El número asignado al concursante
 * @param c Referencia al objeto Concursante cuyos detalles se van a imprimir
 * @return Ninguno
 */

  void printContestant(int num, Contestant &c) {
    cout << "\n";
    cout << "【 ★ 】" << num << "【 ★ 】";
    c.info();
  }

// Función para pedir al jugador que elija un oponente
/**
 * Le pide al jugador que elija un oponente.
 * 
 * Muestra un mensaje instruyendo al jugador a escribir el número correspondiente a su 
 * oponente elegido.
 * 
 * @return Ninguno
 */

  void printOpponentChoice() {
    std::cout << "\n";
    cout << ".⋅ ۵ Write the number at the top of your opponent ۵ ⋅." << endl;
  }

// Función para imprimir detalles de los concursantes con cenefas decorativas
/**
 * Imprime detalles de un concursante con cenefas decorativas.
 * 
 * Genera la información de un concursante con bordes decorativos a su alrededor.
 * 
 * @param c Referencia al objeto Concursante cuyos detalles se van a imprimir
 * @return Ninguno
 */

  void printContestant(Contestant &c) {
    cout << "\n";
    cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗";
    c.info();
    cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝";
    cout << "\n";
  }

// Función para imprimir detalles de rendimiento para los de peor desempeño
/**
 * Imprime los detalles de rendimiento de los peores.
 * 
 * Emite un mensaje que indica la selección del jugador como último jugador y 
 * proporciona información sobre su rango y oponente.
 * 
 * @param c Referencia al objeto Concursante que representa al jugador
 * @param lowerLimit El límite que define los peores resultados
 * @return Ninguno
 */

  void printBottomPerformance(Contestant &c, int lowerLimit) {
    std::cout << "\n";
    cout << "Oh no! Due to your rank being in the low " << lowerLimit
         << "% you've been chosen "
            "by... \n";
    cout << "   ╭─〔❨✧✧❩〕─╮    \n";
    c.info();
    cout << "   ╰─〔❨✧✧❩〕─╯    \n";
  }

// Función para imprimir una pantalla de carga
/**
 * Imprime una pantalla de carga con indicación de progreso.
 * 
 * Genera una serie de mensajes de progreso de carga seguidos de un mensaje de finalización.
 * 
 * @return Ninguno
 */

  void printLoadingScreen() {
    

    std::vector<std::string> loadingscreen{
        "    █▒▒▒▒▒▒▒▒▒ 1%    ", "    ███▒▒▒▒▒▒▒ 15%    ",
        "    █████▒▒▒▒▒ 30%    ", "    ███████▒▒▒ 70%    ",
        "    ██████████ 100%    "};

   
    for (const string &loadingscreen : loadingscreen) {
      cout << loadingscreen << endl;
    }

    cout << "\n";
    cout << "\n";
    std::cout << "Loading complete!" << std::endl;
    cout << "\n";
    cout << "\n";
  }

// Función para imprimir versus pantalla entre dos concursantes
/**
 * Imprime una pantalla versus entre dos concursantes.
 * 
 * Muestra detalles de dos concursantes con un mensaje "versus" en el medio.
 * 
 * @param c1 Referencia al primer objeto Concursante
 * @param c2 Referencia al segundo objeto Concursante
 * @return Ninguno
 */

  void printVs(Contestant &c1, Contestant &c2) {
    printContestant(c1);
    cout << "\n";
    cout << "    ♥♡ VS ♥♡    \n";
    cout << "\n";
    printContestant(c2);
  }

// Función para imprimir una pantalla versus simple
/**
 * Imprime una pantalla versus simple.
 * 
 * Emite un mensaje "versus" entre dos concursantes.
 * 
 * @return Ninguno
 */

  void printVs() {
    cout << "\n";
    cout << "\n";
    cout << "    ♥♡ VS ♥♡    \n";
    cout << "\n";
    cout << "\n";
  }

// Función para imprimir una canción seleccionada aleatoriamente
/**
 * Imprime una canción seleccionada aleatoriamente de una lista.
 * 
 * Emite una canción seleccionada aleatoriamente de una lista de canciones.
 * 
 * @return Ninguno
 */

  void printRandomSong() {
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
    cout << "\n";
    cout << "\n";
  }

//Función para imprimir los votos emitidos por los jueces.
/**
 * Imprime los votos emitidos por los jueces para dos concursantes.
 * 
 * Genera los votos emitidos por los jueces para dos concursantes.
 * 
 * @param votesC1 Votos para el primer concursante
 * @param c1 Referencia al primer objeto Concursante
 * @param votesC2 Votos para el segundo concursante
 * @param c2 Referencia al segundo objeto Concursante
 * @return Ninguno
 */

  void printVotes(int votesC1, Contestant &c1, int votesC2, Contestant &c2) {
    cout << "˚₊· ͟͟͞͞➳❥ Votes have been casted by our 5 judges...\n";
    cout << "♡ The results are the following ♡ \n";
    cout << "*✧･ﾟVotes for " << c1.getName() << "*✧･ﾟ\n";
    cout << "୨୧  " << votesC1 << "  ୨୧\n";
    cout << "*✧･ﾟVotes for " << c2.getName() << "*✧･ﾟ\n";
    cout << "୨୧  " << votesC2 << "  ୨୧\n";
  }

// Función para imprimir los votos emitidos por los jueces para dos equipos
/**
 * Imprime los votos emitidos por los jueces para dos equipos.
 * 
 * Genera los votos emitidos por los jueces para dos equipos.
 * 
 * @param votesTeam1 Votos para el primer equipo
 * @param team1 Nombre del primer equipo
 * @param votesTeam2 Votos para el segundo equipo
 * @param team2 Nombre del segundo equipo
 * @return Ninguno
 */

  void printVotes(int votesTeam1, string team1, int votesTeam2, string team2) {
    cout << "˚₊· ͟͟͞͞➳❥ Votes have been casted by our 5 judges...\n";
    cout << "♡ The results are the following ♡ \n";
    cout << "*✧･ﾟVotes for " << team1 << "*✧･ﾟ\n";
    cout << "୨୧  " << votesTeam1 << "  ୨୧\n";
    cout << "*✧･ﾟVotes for " << team2 << " *✧･ﾟ\n";
    cout << "୨୧  " << votesTeam2 << "  ୨୧\n";
  }

// Función para imprimir los votos emitidos por los jueces para tres equipos
/**
 * Imprime los votos emitidos por los jueces para tres equipos.
 * 
 * Genera los votos emitidos por los jueces para tres equipos.
 * 
 * @param votesTeam1 Votos para el primer equipo
 * @param team1 Nombre del primer equipo
 * @param votesTeam2 Votos para el segundo equipo
 * @param team2 Nombre del segundo equipo
 * @param votesTeam3 Votos para el tercer equipo
 * @param team3 Nombre del tercer equipo
 * @return Ninguno
 */

  void printVotes(int votesTeam1, string team1, int votesTeam2, string team2,
                  int votesTeam3, string team3) {
    cout << "\n";
    cout << "\n";
    cout << "˚₊· ͟͟͞͞➳❥ Votes have been casted by our 5 judges...\n";
    cout << "♡ The results are the following ♡ \n";
    cout << "*✧･ﾟVotes for " << team1 << "*✧･ﾟ\n";
    cout << "୨୧  " << votesTeam1 << "  ୨୧\n";
    cout << "*✧･ﾟVotes for " << team2 << " *✧･ﾟ\n";
    cout << "୨୧  " << votesTeam2 << "  ୨୧\n";
    cout << "*✧･ﾟVotes for " << team3 << " *✧･ﾟ\n";
    cout << "୨୧  " << votesTeam3 << "  ୨୧\n";
    cout << "\n";
    cout << "\n";
  }

// Función para imprimir detalles de un equipo
/**
 * Imprime los detalles de un equipo, incluido su título y miembros.
 * 
 * Genera el título del equipo y los detalles de cada miembro.
 * 
 * @param team Vector de punteros a objetos concursantes que representan a los miembros del equipo
 * @param title Título del equipo
 * @return Ninguno
 */

  void printTeam(vector<Contestant *> team, string title) {
    cout << title << "\n";
    for (int i = 0; i < team.size(); i++) {
      cout << "\n";
      team[i]->info();
    }
  }

// Función para imprimir detalles del equipo retador
/**
 * Imprime detalles del equipo retador.
 *
 * Emite un mensaje indicando la selección del equipo retador, el título del equipo,
 *y la canción grupal elegida para la presentación.
 *
 * @param team Vector de punteros a objetos concursantes que representan a los miembros del equipo
 * @return Ninguno
 */

  void printChallengersTeam(vector<Contestant *> team) {
    cout << "You've been sent to the challengers team! \n";
    cout << "\n";
    cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
    cout << "  Challenger's Team  ";
    cout << "\n";
    cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n";
    cout << "◌The group song chosen for your presentation is...◌\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    printTeam(team, "♡Teammates♡");
  }

// Función para imprimir detalles del equipo retador
/**
 * Imprime detalles del equipo retador.
 *
 * Emite un mensaje indicando la selección del equipo retador, el título del equipo,
 *y la canción grupal elegida para la presentación.
 *
 * @param team Vector de punteros a objetos concursantes que representan a los miembros del equipo
 * @return Ninguno
 */

  void printChallengerSongs() {
    cout << "✧ Challengers Song ✧\n";
    cout << "\n";
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

// Función para imprimir detalles del las canciones de los ganadores
/**
 * Imprime las canciones de los ganadores.
 *
 * Imprime la cancion de los ganadores de una forma aleatoria
 *
 * @param Ninguno
 * @return Ninguno
 */

  void printWinnersSongs() {
    cout << "✩ Winners Song ✩\n";
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

// Función para imprimir detalles del equipo ganador
/**
 * Imprime los datos del equipo ganador.
 *
 * Emite un mensaje indicando la selección del equipo ganador, el título del equipo,
 *y la canción grupal elegida para la presentación.
 *
 * @param team Vector de punteros a objetos concursantes que representan a los miembros del equipo
 * @return Ninguno
 */

  void printWinnersTeam(vector<Contestant *> team) {
    cout << "˗ˏˋ You've been sent to the Winners team! ´ˎ˗ \n";
    cout << "\n";
    cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
    cout << "  Winner's Team  "
         << "\n";
    cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n";
    cout << "◌The group song chosen for your presentation is...◌\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    printTeam(team, "♡Teammates♡");
  }

//Función para indicar la eliminación del jugador.
/**
 * Emite un mensaje indicando la eliminación del jugador.
 *
 * @return Ninguno
 */

  void playerLose() { cout << "≪Im sorry, but you've been eliminated≫ \n"; }

// Función para indicar el éxito del jugador al pasar la ronda
/**
 * Emite un mensaje que indica el éxito del jugador al pasar la ronda.
 *
 * @param permanece Número de concursantes restantes
 * @param total Número total de concursantes
 * @return Ninguno
 */

  void playerWin(int remain, int total) {
    cout << "˗✩‧ You've passed the first elimination round. " << remain
         << " out of the " << total << " contestants remain ‧✩˗ \n";
    cout << "‿︵‿︵୨˚̣̣̣͙୧ - - ୨˚̣̣̣͙୧‿︵‿︵\n";
  }

// Función para imprimir un mensaje indicando el inicio del segmento Road to Prism
/**
 * Genera un mensaje que indica el inicio del segmento Road to Prism.
 *
 * @return Ninguno
 */

  void printRoadToPrism() { cout << "✦ Welcome to ROAD TO PRISM! ✦\n"; }

// Función para imprimir la introducción al segmento PRISM
/**
 * Genera una introducción al segmento PRISM.
 *
 * @return Ninguno
 */

  void PRISMIntro() {
    cout << "\n";
    cout << "\n";
    cout << ".・。.・゜✭・You've made it to the second part of Universe "
            "Ticket!.・✫・゜・。. \n";
    cout << "༶ Welcome to Road To PRISM ༶ \n";
    cout << "【 ☆ 】Choose a number between 1 - 41 【 ☆ 】\n";
  }

// Función para imprimir la introducción a la categoría alta en el segmento PRISM
/**
 * Produce una introducción a la categoría alta en el segmento PRISM.
 *
 * @return Ninguno
 */

  void PRISMIntroHighCategory() {
    cout << "✧༺  High Category (상) ༻∞\n";
    cout << "❍ Since you are in the high category you'll be performing "
            "Original Songs! ❍ \n";
    cout << "Team Name: \n";
    cout << "*.·:·.✧ Highway ✧.·:·.*\n";
    cout << "｜Song performing｜: \n";
    highDecider();
  }

// Función para imprimir la introducción a la categoría media en el segmento PRISM
/**
 * Genera una introducción a la categoría media en el segmento PRISM.
 *
 * @return Ninguno
 */

  void PRISMIntroMediumCategory() {
    cout << "✧༺  Mid Category (중) ༻∞\n";
    cout << "❍ Welcome to the mid category! ❍ \n";
    cout << "Team Name: \n";
    cout << "*.·:·.✧ Star ✧.·:·.*\n";
    cout << "｜Song performing｜: \n";
    middleDecider();
  }

// Funcionar para imprimir la introducción a la categoría baja en el segmento de prisma
/**
 * Emite una introducción a la categoría baja en el segmento de Prism.
 *
 * @return Ninguno
 */

  void PRISMIntroLowCategory() {
    cout << "✧༺  Low Category (하) ༻∞\n";
    cout << "❍ Welcome to the low category! ❍ \n";
    cout << "Team Name: \n";
    cout << "*.·:·.✧ Volcano ✧.·:·.*\n";
    cout << "｜Song performing｜: \n";
    prismSongs();
  }

// Función para imprimir el título de un equipo PRISM
/**
 * Genera el título de un equipo PRISM.
 *
 * @param teamName El nombre del equipo que se imprimirá
 * @return Ninguno
 */

  void printPRISMTeam(string teamName) {
    cout << "\n";
    cout << "▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰\n";
    cout << "。／" << teamName << "＼。\n";
    cout << "▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰▰\n";
  }

//Función para imprimir la introducción al segmento de la Estación Unitaria
/**
 * Genera una introducción al segmento de la estación unitaria.
 *
 * @return Ninguno
 */

  void printUnitStation() {
    cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
    cout << "─── ･ ｡ﾟ☆ Welcome to UNIT STATION! ☆ﾟ. ───\n";
    cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
    cout << "You've made it farther than most contestants! ‧̫‧\n";
    cout << "Congrats! \n";
    cout << "\n";
    cout << "⍟⍟⍟ You've made a lot of progress ⍟⍟⍟\n";
    cout
        << "✭ In this part of the competition you will choose your team in the "
           "skill you have an advantage on ✭ \n";
    cout << "\n";
    cout << "\n";
    cout << "The teams are as follows: \n";
    cout << "\n";
    cout << "◈ Visual (Expressions while performing and stage presence \n";
    cout << "◈ Vocal (High Notes, stable vocals)\n";
    cout << "◈ Performance (Great dancing skills) \n";
    cout << "For Visual Team press 1, For Vocal Team press 2, For Performance "
            "Team press 3\n";
  }

// Función para imprimir los detalles de una estación unitaria
/**
 * Emite los detalles de una estación de unidad, incluido su nombre, la canción que se está interpretando,
 * y los miembros del equipo.
 *
 * @param stationName El nombre de la estación de la unidad
 * @param songName El nombre de la canción que se está interpretando.
 * @param team Vector de punteros a objetos concursantes que representan a los miembros del equipo
 * @return Ninguno
 */

  void printUnitStation(string stationName, string songName,
                        vector<Contestant *> team) {
    cout << "\n";
    cout << "\n";
    cout << "。°。°。°。°。°  " << stationName << "Station  。°。°。°。°。°\n";
    cout << "Team Name: \n";
    cout << "𓆩 " << stationName << " Unit 𓆪\n";
    cout << "｜Song performing｜: \n";
    cout << "╔══ ❀•°❀°•❀ ══╗\n";
    cout << "" << songName << "\n";
    cout << "╚══ ❀•°❀°•❀ ══╝\n";
    printTeam(team, "⋆ ⋆ Teammates ⋆ ⋆");
    screenvsUnit();
  }

//Función para imprimir la introducción al segmento de la Nueva Unidad de Canción
/**
 * Emite una introducción al segmento de la nueva unidad de canción.
 *
 * @return Ninguno
 */

  void printNewSongUnit() {
    cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
    cout << "─── ･ ｡ﾟ☆ Welcome to NEW SONG UNIT! ☆ﾟ. ───\n";
    cout << "◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈◈━◈━◈━◈━◈\n";
  }

//Función para imprimir la introducción al segmento de la Nueva Unidad de Canción
/**
 * Emite una introducción al segmento de la nueva unidad de canción.
 *
 * @return Ninguno
 */

  void printNewSongUnitIntro() {
    cout
        << "In this part of the competition you'll be split into two teams and "
           "battle \n";
    cout << "✧ Choose your song ✧\n";
    cout << "Press 1 for: \n";
    cout << "❀Dream of Girls\n";
    cout << "Press 2 for: \n";
    cout << "❀Yummy Yum \n";
  }

// Función para imprimir los detalles de una unidad de canción
/**
 * Muestra los detalles de una unidad de canción, incluido el nombre del equipo, la canción que se está interpretando,
 * y los miembros del equipo.
 *
 * @param teamName El nombre del equipo
 * @param songName El nombre de la canción que se está interpretando.
 * @param team Vector de punteros a objetos concursantes que representan a los miembros del equipo
 * @return Ninguno
 */

  void printSongUnit(string teamName, string songName,
                     vector<Contestant *> team) {
    cout << "Team Name: ";
    cout << "˚ ༘♡ ⋆｡˚ ꕥ " << teamName << " ˚ ༘♡ ⋆｡˚ ꕥ";
    cout << "-ˋ Song chosen ˊ-";
    cout << "✧ " << songName << " ✧";
    printTeam(team, "⋆ ⋆ Teammates ⋆ ⋆");
    screenVSNewSong();
  }

// Función para imprimir la introducción al segmento de Estación Final
/**
 * Genera una introducción al segmento de la estación final.
 *
 * @return Ninguno
 */

  void printFinalStation() {
    cout << "\n";
    cout << "\n";
    cout << "╭── ⋅ ⋅ ── ─── ･ ｡ﾟ☆: *.☽ .* :☆ﾟ. ─── ── ⋅ ⋅ ──╮\n";
    cout << "─── ･ ｡ﾟ☆: *. Welcome to Final Station .* :☆ﾟ. ───\n";
    cout << "╰── ⋅ ⋅ ── ─── ･ ｡ﾟ☆: *.☽ .* :☆ﾟ. ─── ── ⋅ ⋅ ──╯\n";
    cout << "\n";
    cout << "\n";
  }

//Función para imprimir las instrucciones para la selección final de la canción.
/**
 * Emite las instrucciones para la selección final de la canción.
 *
 * @return Ninguno
 */

  void printFinal() {
    cout << "╧╧╧╧Pstt╧╧╧╧\n";
    cout << "Listen to me, the final song is very important \n";
    cout << "The producer like a specific song \n";
    cout << "I can't tell you much \n";
    cout << "But be very careful on your choice \n";
    cout << "Since one would lead into the debut and the other one...\n";
    cout << "To your demise \n";
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
  }

// Función para imprimir los detalles de la interpretación de la canción final
/**
 * Genera los detalles de la interpretación de la canción final, incluido el nombre de la canción, el nombre del equipo y los miembros del equipo.
 *
 * @param songName El nombre de la canción final elegida
 * @param teamName El nombre del equipo que interpretará la canción final.
 * @param team Vector de punteros a objetos concursantes que representan a los miembros del equipo
 * @return Ninguno
 */

  void printFinalPerformance(string songName, string teamName,
                             vector<Contestant *> team) {
    cout << "GREAT! You've chosen " << songName << " \n";
    cout << "Team Name: \n";
    cout << "══✿══╡°˖✧ " << teamName << " ✧˖°╞══✿══ \n";
    printTeam(team, "︵‿︵‿୨♡ Teammates ♡୧‿︵‿︵ ");
    screenFinal();
  }

// Función para imprimir los resultados de elegir la canción de Dopamina para la actuación final
/**
 * Genera los resultados de elegir la canción de Dopamine para la interpretación final.
 *
 * @return Ninguno
 */

  void printFinalDopamine() {
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
  }

// Función para imprimir los resultados de elegir la canción de la cámara para la interpretación final
/**
 * Genera los resultados de elegir la canción de la cámara para la interpretación final.
 *
 * @return Ninguno
 */

  void printFinalCamera() {
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


//Metodos privados del objeto
private:

// Función para mostrar la canción retadora elegida para el equipo.
/**
 * Emite la canción del retador elegida para el equipo.
 *
 * @return Ninguno
 */

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

// Función para decidir y mostrar la canción elegida para la categoría alta
/**
 * Emite la canción elegida para la categoría alta.
 *
 * @return Ninguno
 */

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

// Función para decidir y mostrar la canción elegida para la categoría media
/**
 * Emite la canción elegida para la categoría media.
 *
 * @return Ninguno
 */

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

// Función para mostrar la canción elegida para la categoría baja
/**
 * Emite la canción elegida para la categoría baja.
 *
 * @return Ninguno
 */

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

// Función para mostrar la pantalla de la unidad versus
/**
 * Muestra la pantalla para la unidad versus.
 *
 * @return Ninguno
 */

  void screenvsUnit() {
    cout << "\n";
    cout << "★・・・・・・★・・・・・・★・・・・・・★\n";
    cout << "☆ Visual Team ☆\n";
    cout << "★・・・・・・★・・・・・・★・・・・・・★\n";
    printVs();
    cout << "★・・・・・・★・・・・・・★・・・・・・★\n";
    cout << "☆ Vocal Team ☆\n";
    cout << "★・・・・・・★・・・・・・★・・・・・・★\n";
    printVs();
    cout << "★・・・・・・★・・・・・・★・・・・・・★\n";
    cout << "☆ Performance Team ☆\n";
    cout << "★・・・・・・★・・・・・・★・・・・・・★\n";
  }

// Función para mostrar la pantalla de la nueva canción versus
/**
 * Muestra la pantalla para la canción versus nueva.
 *
 * @return Ninguno
 */

  void screenVSNewSong() {
    cout << "\n";
    cout << "╔═*.·:·.✧ ✦ ✧.·:·.*═╗\n";
    cout << "✦✧ Dreamers ✧✦\n";
    cout << "╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n";
    printVs();
    cout << "╔════════⋆★⋆════════╗\n";
    cout << "◄◄ Yummers ►► \n";
    cout << "╚════════⋆★⋆════════╝ \n";
  }

// Función para mostrar la pantalla de la actuación final
/**
 * Muestra la pantalla para la actuación final.
 *
 * @return Ninguno
 */

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
};
#endif