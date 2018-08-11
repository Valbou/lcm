# include <iostream>

using namespace std;

unsigned int calcul_pgcd(unsigned int nombre1, unsigned int nombre2)
{
    unsigned int result = -1;
    while(result != 0)
    {
        result = nombre1 % nombre2;
        if (result > 0)
        {
            nombre1 = nombre2;
            nombre2 = result;
        }
        else
        {
            result = nombre2;
            break;
        }
    }
    return result;
}

int main()
{
    unsigned int nombre1 = 0;
    unsigned int nombre2 = 0;
    unsigned int pgcd = -1;
    unsigned int ppcm = -1;

    cout << "--- Calcul du PPCM ---" << endl << endl;

    cout << "Entrez le 1er nombre positif :";
    cin >> nombre1;
    cout <<  "Entrez le 2e nombre positif :";
    cin >> nombre2;

    if(nombre1 > nombre2)
    {
        pgcd = calcul_pgcd(nombre1, nombre2);
    }
    else if(nombre2 > nombre1)
    {
        pgcd = calcul_pgcd(nombre2, nombre1);
    }
    else
    {
        pgcd = nombre1;
    }

    ppcm = (nombre1 * nombre2) / pgcd;

    cout << "Le PPCM de " << nombre1 << " et " << nombre2 << " est : " << ppcm << endl;

    // La pause est necessaire pour voir le resultat sous Windows avant la fermeture de la console
	system("pause");
    return 0;
}
