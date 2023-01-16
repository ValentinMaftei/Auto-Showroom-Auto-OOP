[Română :romania:](#aplicație-showroom-auto)

[English :eu:](#auto-showroom-application)

# Aplicație Showroom Auto

##### Proiectat în C++, utilizând concepte de „Programare orientată pe obiecte”.

Proiectul prezentat reprezinta un showroom de masini. Cu ajutorul unui meniu interactiv se vor putea afisa informatiile aferente unei masini si achizitiona masini din stocul propus.

*Clase folosite:*

clasa Template Reprezentanta_Auto cu atributele : T (obiect din alta clasa), model, anFabricatie, kilometraj, combustibil, pret.

clasa Autovehicule cu atributul: nrLocuri.

clasa Autoutilitare cu atributul: suportRemorca.

clasa Meniu (am folosit singletone pattern).

clasele Reclama_Subsistem1, Reclama_Subsistem2, Reclama_Subsistem3 si Reclama_facade (folosite pentru facade pattern).

Se vor putea cumpara autovehicule (masini mici) si autoutilitare (camioane, dube, etc).

Prin intermediul meniului interactiv, ce reprezinta aplicatia firmei, se vor putea face urmatoarele actiuni:

~ afisarea masinilor pe care le puteti achizitiona

~ achizitionarea unui model introdus de la tastatura in cazul in care masina se regaseste in showroom
     
~ calculul pretului in functie de cum va fi cumparata masina (TVA deductibil)

##### Instrucțiuni meniu interactiv:

###### 0 - Inchidere aplicatie showroom.
###### 1 - Pornire aplicatie
###### 2 - Afisati masinile disponibile.
###### 3 - Introduceti model masina
###### 4 - Cumparati masina aleasa


# Auto Showroom Application

##### Designed in C++, using concepts of "Object-Oriented Programming".

The project presented represents an auto showroom. Using an interactive menu, information about a car and purchasing cars from the proposed stock can be displayed.

*Used classes:*

Reprezentanta_Auto template class with attributes: T (object from another class), model, year of production, mileage, fuel, price.

Autovehicule class with attribute: nrLocuri.

UAutoutilitare class with attribute: tsuportRemorca.

Menu class (I used singleton pattern).

Reclama_Subsistem1, Reclama_Subsistem2, Reclama_Subsistem3 si Reclama_facade classes (used for facade pattern).

You will be able to buy vehicles (small cars) and utility vehicles (trucks, vans, etc.).

Through the interactive menu, which represents the company's application, the following actions can be performed:

~ displaying the cars that can be purchased

~ purchasing a model entered from the keyboard if the car is found in the showroom

~ calculating the price depending on how the car will be purchased (VAT deductible)

##### Interactive menu instructions:

###### 0 - Close showroom application.
###### 1 - Start the application
###### 2 - Display available cars.
###### 3 - Enter car model

