
#include <bits/stdc++.h>

template<typename T>
class Reprezentanta_Auto {
public:
    Reprezentanta_Auto(T atribut, std::string model, int anFabricatie, int kilometraj, std::string combustibil,
                       int pret);

    Reprezentanta_Auto();

    void afisare();

    void CalculPretFinal();

    void setmodel(std::string);

    std::string getmodel();

    void setanFabricatie(unsigned int);

    unsigned int getanFabricatie();

    void setkilometraj(unsigned int);

    unsigned int getkilometraj();

    void setcombustibil(std::string);

    std::string getcombustibil();

    void setpret(int);

    int getpret();

private:
    T atribut;
    static float TVAdeductibil;
    std::string model;
    unsigned int anFabricatie;
    unsigned int kilometraj;
    std::string combustibil;
    int pret;
};

template<typename T>
void Reprezentanta_Auto<T>::afisare() {
    std::cout << "Model: " << model << '\n' << "   An fabricatie: " << anFabricatie << '\n' << "   Kilometraj: "
              << kilometraj << '\n' << "   Motorizare: " << combustibil << '\n' << "   Pret: " << pret << " euro" << '\n';
}

template<typename T>
float Reprezentanta_Auto<T>::TVAdeductibil = 0.13;

template<typename T>
void Reprezentanta_Auto<T>::CalculPretFinal() {
    pret = pret - TVAdeductibil * pret;
}

template<typename T>
Reprezentanta_Auto<T>::Reprezentanta_Auto(T atribut, std::string model, int anFabricatie, int kilometraj,
                                          std::string combustibil, int pret) {
    atribut = atribut;
    this->model = model;
    this->anFabricatie = anFabricatie;
    this->kilometraj = kilometraj;
    this->combustibil = combustibil;
    this->pret = pret;
}

template<typename T>
Reprezentanta_Auto<T>::Reprezentanta_Auto() {}

template<typename T>
void Reprezentanta_Auto<T>::setmodel(std::string) {
    this->model = model;
}

template<typename T>
std::string Reprezentanta_Auto<T>::getmodel() {
    return this->model;
}

template<typename T>
void Reprezentanta_Auto<T>::setanFabricatie(unsigned int) {
    this->anFabricatie = anFabricatie;
};

template<typename T>
unsigned int Reprezentanta_Auto<T>::getanFabricatie() {
    return this->anFabricatie;
}

template<typename T>
void Reprezentanta_Auto<T>::setkilometraj(unsigned int) {
    this->kilometraj = kilometraj;
}

template<typename T>
unsigned int Reprezentanta_Auto<T>::getkilometraj() {
    return this->kilometraj;
}

template<typename T>
void Reprezentanta_Auto<T>::setcombustibil(std::string) {
    this->combustibil = combustibil;
}

template<typename T>
std::string Reprezentanta_Auto<T>::getcombustibil() {
    return this->combustibil;
}

template<typename T>
void Reprezentanta_Auto<T>::setpret(int) {
    this->pret = pret;
}

template<typename T>
int Reprezentanta_Auto<T>::getpret() {
    return this->pret;
}

class Autoturism {
public:
    Autoturism(int nrLocuri);

    Autoturism();

    void setnrLocuri(unsigned int);

    unsigned int getnrLocuri();

    Autoturism operator=(Autoturism);

private:
    int nrLocuri;
};

Autoturism::Autoturism(int nrLocuri) {
    this->nrLocuri = nrLocuri;
}

Autoturism::Autoturism() {}

void Autoturism::setnrLocuri(unsigned int) {
    this->nrLocuri = nrLocuri;
}

unsigned int Autoturism::getnrLocuri() {
    return this->nrLocuri;
}

Autoturism Autoturism::operator=(Autoturism autoturism) {
    this->nrLocuri = autoturism.nrLocuri;
}

class Autoutilitara {
public:
    Autoutilitara(bool suportRemorca);

    Autoutilitara();

    void setsuportRemorca(bool);

    bool getsuportRemorca();

    Autoutilitara operator=(Autoutilitara);

private:
    bool suportRemorca;
};

Autoutilitara::Autoutilitara(bool suportRemorca) {
    this->suportRemorca = suportRemorca;
}

Autoutilitara::Autoutilitara() {}

void Autoutilitara::setsuportRemorca(bool) {
    this->suportRemorca = suportRemorca;
}

bool Autoutilitara::getsuportRemorca() {
    return this->suportRemorca;
}

Autoutilitara Autoutilitara::operator=(Autoutilitara autoutilitara) {
    this->suportRemorca = autoutilitara.suportRemorca;
}

class Meniu {
private:
    static Meniu *i;

    Meniu();

public:
    static Meniu *getmeniu();

    void startmeniu();
};

Meniu *Meniu::i = 0;

Meniu *Meniu::getmeniu() {
    if (i == 0) {
        i = new Meniu();
    }
    return i;
}

Meniu::Meniu() {}

void Meniu::startmeniu() {

    Autoturism atribut1(9);
    Reprezentanta_Auto<Autoturism> vehicul1(atribut1, "Volkswagen_Transporter", 2005, 480000, "Diesel", 5000);
    Autoturism atribut2(5);
    Reprezentanta_Auto<Autoturism> vehicul2(atribut2, "VOLVO_XC60", 2018, 95828, "Diesel", 26498);
    Autoturism atribut3(5);
    Reprezentanta_Auto<Autoturism> vehicul3(atribut3, "Skoda_Octavia", 2016, 134077, "Benzina", 11689);
    Autoturism atribut4(5);
    Reprezentanta_Auto<Autoturism> vehicul4(atribut4, "BMW_Seria7", 2017, 75000, "Diesel", 50000);
    Autoturism atribut5(5);
    Reprezentanta_Auto<Autoturism> vehicul5(atribut5, "TeslaS", 2017, 55152, "Electric", 50990);
    Autoutilitara atribut6(true);
    Reprezentanta_Auto<Autoutilitara> vehicul6(atribut6, "Volkswagen_Crafter", 2022, 500, "Diesel", 53500);
    Autoutilitara atribut7(false);
    Reprezentanta_Auto<Autoutilitara> vehicul7(atribut7, "Iveco_ROSERO", 2010, 15000, "Diesel", 12600);
    Autoutilitara atribut8(true);
    Reprezentanta_Auto<Autoutilitara> vehicul8(atribut8, "MAN_TGX", 2018, 200000, "Diesel", 72167);
    Autoutilitara atribut9(false);
    Reprezentanta_Auto<Autoutilitara> vehicul9(atribut9, "Mercedes_Actross", 2020, 100000, "Diesel", 90000);
    Autoutilitara atribut10(true);
    Reprezentanta_Auto<Autoutilitara> vehicul10(atribut10, "Mercedes_Sprinter", 2019, 75000, "Diesel", 21700);

    int choice;
    std::string marca;
    bool dispozitiv = true;
    std::cout << " 0 - Inchide aplicatie showroom\n";
    std::cout << " 1 - Porneste aplicatie showroom\n" << '\n';
    while (dispozitiv) {

        std::cout << "Introduceti comanda: \n";
        std::cin >> choice;

        if (choice == 0) {
            std::cout << "Inchidere aplicatie showroom...\n" << "\n";
            dispozitiv = false;
        } else if (choice == 1) {
            std::cout << "Pornire aplicatie...\n" << '\n' << "Instructiuni folosire: \n"
                      << "*Daca sub model avem o cifra, ea reprezinta numarul de locuri al masinii*\n"
                      << "*Daca sub model (true = 1 - autoutilitara are suport remorca / false = 0 - autoutilitara fara suport remorca)*\n"
                      << '\n';
            std::cout << " 2 - Afisati masinile disponibile: \n";
            std::cout << " 3 - Introduceti model masina:\n";
            std::cout << " 4 - Cumparati masina aleasa\n" << '\n';
        } else if (choice == 2) {
            vehicul1.afisare();
            std::cout << "  " << atribut1.getnrLocuri() << '\n' << '\n';
            vehicul2.afisare();
            std::cout << "  " << atribut2.getnrLocuri() << '\n' << '\n';
            vehicul3.afisare();
            std::cout << "  " << atribut3.getnrLocuri() << '\n' << '\n';
            vehicul4.afisare();
            std::cout << "  " << atribut4.getnrLocuri() << '\n' << '\n';
            vehicul5.afisare();
            std::cout << "  " << atribut5.getnrLocuri() << '\n' << '\n';
            vehicul6.afisare();
            std::cout << "  " << atribut6.getsuportRemorca() << '\n' << '\n';
            vehicul7.afisare();
            std::cout << "  " << atribut7.getsuportRemorca() << '\n' << '\n';
            vehicul8.afisare();
            std::cout << "  " << atribut8.getsuportRemorca() << '\n' << '\n';
            vehicul9.afisare();
            std::cout << "  " << atribut9.getsuportRemorca() << '\n' << '\n';
            vehicul10.afisare();
            std::cout << "  " << atribut10.getsuportRemorca() << '\n' << '\n';

        } else if (choice == 3) {
            std::cout << "Introduceti marca masinii despre care doriti detalii:\n";
            std::cin >> marca;
            if (marca == "Volkswagen_Transporter") {
                vehicul1.afisare();
                std::cout << atribut1.getnrLocuri() << '\n' << '\n';
            }
            if (marca == "VOLVO_XC60") {
                vehicul2.afisare();
                std::cout << atribut2.getnrLocuri() << '\n' << '\n';
            }
            if (marca == "Skoda_Octavia") {
                vehicul3.afisare();
                std::cout << atribut3.getnrLocuri() << '\n' << '\n';
            }
            if (marca == "BMW_Seria7") {
                vehicul4.afisare();
                std::cout << atribut4.getnrLocuri() << '\n' << '\n';
            }
            if (marca == "TeslaS") {
                vehicul5.afisare();
                std::cout << atribut5.getnrLocuri() << '\n' << '\n';
            }
            if (marca == "Volkswagen_Crafter") {
                vehicul6.afisare();
                std::cout << atribut6.getsuportRemorca() << '\n' << '\n';
            }
            if (marca == "Iveco_ROSERO") {
                vehicul7.afisare();
                std::cout << atribut7.getsuportRemorca() << '\n' << '\n';
            }
            if (marca == "MAN_TGX") {
                vehicul8.afisare();
                std::cout << atribut8.getsuportRemorca() << '\n' << '\n';
            }
            if (marca == "Mercedes_Actross") {
                vehicul9.afisare();
                std::cout << atribut9.getsuportRemorca() << '\n' << '\n';
            }
            if (marca == "Mercedes_Sprinter") {
                vehicul10.afisare();
                std::cout << atribut10.getsuportRemorca() << '\n' << '\n';
            }
            if (marca != "Volkswagen_Transporter" and marca != "VOLVO_XC60" and marca != "Skoda_Octavia" and marca != "BMW_Seria7" and marca != "TeslaS"
            and marca != "Volkswagen_Crafter" and marca != "Iveco_ROSERO" and marca != "MAN_TGX" and marca != "Mercedes_Actross" and marca != "Mercedes_Sprinter")
                std::cout << "Masina introdusa nu se afla in showroom!\n" << '\n';
        } else if (choice == 4) {
            std::cout << "Doriti sa cumparati masina pe firma? (TVA deductibil)" << '\n';
            std::cout << "1 - DA\n";
            std::cout << "2 - NU\n";
            int alegere;
            std::cin >> alegere;
            if (alegere == 1) {
                if (marca == "Volkswagen_Transporter") {
                    std::cout << "Pretul masinii fara TVA va fi:\n";
                    vehicul1.CalculPretFinal();
                    std::cout << vehicul1.getpret() << " euro\n";
                }
                if (marca == "VOLVO_XC60") {
                    std::cout << "Pretul masinii fara TVA va fi:\n";
                    vehicul2.CalculPretFinal();
                    std::cout << vehicul2.getpret() << " euro\n";
                }
                if (marca == "Skoda_Octavia") {
                    std::cout << "Pretul masinii fara TVA va fi:\n";
                    vehicul3.CalculPretFinal();
                    std::cout << vehicul3.getpret() << " euro\n";
                }
                if (marca == "BMW_Seria7") {
                    std::cout << "Pretul masinii fara TVA va fi:\n";
                    vehicul4.CalculPretFinal();
                    std::cout << vehicul4.getpret() << " euro\n";
                }
                if (marca == "TeslaS") {
                    std::cout << "Pretul masinii fara TVA va fi:\n";
                    vehicul5.CalculPretFinal();
                    std::cout << vehicul5.getpret() << " euro\n";
                }
                if (marca == "Volkswagen_Crafter") {
                    std::cout << "Pretul masinii fara TVA va fi:\n";
                    vehicul6.CalculPretFinal();
                    std::cout << vehicul6.getpret() << " euro\n";
                }
                if (marca == "Iveco_ROSERO") {
                    std::cout << "Pretul masinii fara TVA va fi:\n";
                    vehicul7.CalculPretFinal();
                    std::cout << vehicul7.getpret() << " euro\n";
                }
                if (marca == "MAN_TGX") {
                    std::cout << "Pretul masinii fara TVA va fi:\n";
                    vehicul8.CalculPretFinal();
                    std::cout << vehicul8.getpret() << " euro\n";
                }
                if (marca == "Mercedes_Actross") {
                    std::cout << "Pretul masinii fara TVA va fi:\n";
                    vehicul9.CalculPretFinal();
                    std::cout << vehicul9.getpret() << " euro\n";
                }
                if (marca == "Mercedes_Sprinter") {
                    std::cout << "Pretul masinii fara TVA va fi:\n";
                    vehicul10.CalculPretFinal();
                    std::cout << vehicul10.getpret() << " euro\n";
                }
            } else {
                std::cout << "Pretul final al masinii este cel afisat mai sus.\n" << '\n';
            }
        } else {
            std::cout << "Comanda introdusa nu exista! \n";
            std::cin >> choice;
        }
    }
}

class Reclama_Subsistem1{
public:
    void afisajreclamacauciucuri(){
        std::cout << "Cumparati o masina de la noi pana la sfarsitul lunii curent si primiti un set de cauciucuri Michelin!\n";
    }
};

class Reclama_Subsistem2{
public:
    void afisajreclamasite(){
        std::cout << "Vizitati site-ul https://www.autovit.ro/ pentru a vizualiza mai multe oferte.\n";
    }
};

class Reclama_Subsistem3{
public:
    void afisajreclamamultumiri(){
        std::cout << "Proiect creat alaturi de: Michelin, PORSCHE Romania, autovit.ro, Pirelli, autoscout.eu \n";
    }
};

class Reclama_facade{
private:
    Reclama_Subsistem1 reclama1;
    Reclama_Subsistem2 reclama2;
    Reclama_Subsistem3 reclama3;
public:
    void playReclama(){
        reclama1.afisajreclamacauciucuri();
        reclama2.afisajreclamasite();
        reclama3.afisajreclamamultumiri();
    }
};

int main() {
    Meniu *meniu = meniu->getmeniu();
    Reclama_facade reclama;
    meniu->startmeniu();
    reclama.playReclama();
}



