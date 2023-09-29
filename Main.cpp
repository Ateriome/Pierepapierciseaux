#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void adversaire (string& BOT, int& scoreB)
{
    srand ((int)time(0));
    
    scoreB = rand()% 3 + 1;
    cout << "scrore BOT : " << scoreB << endl;

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

void Player (string& joueur, int& scoreJ )
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

void partie()
{
    string BOT,joueur;
    int scoreJ, scoreB;

    cout << "Appyer sur entrée pour commencer" << endl;
    getchar();
    getchar();
    
    adversaire(BOT, scoreB);
    Player(joueur, scoreJ);

    cout << joueur << endl;
    cout << scoreJ << endl;
    cout << BOT << endl;
    cout << scoreB << endl;
}

int main()
{
    string rejouer("oui");

    while (rejouer == "oui")
    {
        partie();

        cout << "Voulez vous rejouer ?" << endl;
        cin >> rejouer;
    }
}