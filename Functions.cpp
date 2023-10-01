#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Functions.h"
using namespace std;

void resultat(int& scoreB, int& scoreJ)
{
    if (scoreB == scoreJ) 
    {
        cout << "Egalite" << endl;
    }
    else if (( scoreB == 1) && ( scoreJ == 2))
    {
        cout << "Pierre est batue par la feuille vous avez gagner" << endl;
    }
    else if (( scoreB == 2 ) && ( scoreJ == 3))
    {
        cout << "Feuille est batue par le ciseau vous avez gagner" << endl;
    }
    else if (( scoreB == 3) && ( scoreJ == 1))
    {
        cout << "Ciseau est batue par le pierre vous avez gagner"  << endl;
    }
    else if (( scoreJ == 1) && ( scoreB == 2))
    {
        cout << "Pierre est batue par la feuille vous avez perdu" << endl;
    }
    else if (( scoreJ == 2 ) && ( scoreB == 3))
    {
        cout << "Feuille est batue par le ciseau vous avez perdu"  << endl;
    }
    else if (( scoreJ == 3) && ( scoreB == 1))
    {
        cout << "Ciseau est batue par le pierre vous avez perdu" << endl;
    }
}

void adversaire (string& BOT, int& scoreB) //Fonction qui permet que le BOT choisi entre la pierre, le ciseau et la feuille
{
    srand ((int)time(0));
    
    scoreB = rand()% 3 + 1;

    switch (scoreB) {
        case 1:
            BOT = "pierre";
            break;
        case 2:
            BOT = "feuille";
            break;
        case 3:
            BOT = "ciseau";
            break;
    }

}

void Player (string& joueur, int& scoreJ ) //Fonction qui permet au joueur de choisi entre la pierre, le ciseau et la feuille
{
    cout << "Entrer se que vous voulez jouer : ";
    cin >> joueur;

    if (joueur == "pierre")
    {
        scoreJ = 1;
    }
    else if (joueur == "feuille")
    {
        scoreJ = 2;
    }
    else if (joueur == "ciseau")
    {
        scoreJ = 3;
    }
}

void partie() //Fonction qui gère tout la partie de jeux
{
    string BOT,joueur;
    int scoreJ, scoreB;

    cout << "Appyer sur entrer pour commencer" << endl;
    getchar();
    getchar();
    
    adversaire(BOT, scoreB);
    Player(joueur, scoreJ);

    cout << "joueur a jouer : " << joueur << endl;
    cout << "adversaire a jouer : " << BOT << endl;

    resultat(scoreB, scoreJ);
}