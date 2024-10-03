#include<iostream>
using namespace std; //standard

int main() {
    int quant; //nicelik (kaç tane)
    int choice;
// quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
//food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Schicken = 0, Sshake = 0;
// total price
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;


    cout << " \n \t   Quantity of items we have in hotel  ";
    cout << "\n Rooms available: ";
    cin >> Qrooms;
    cout << "\n Quantity of pasta: ";
    cin >> Qpasta;
    cout << "\n Quantity of burger: ";
    cin >> Qburger;
    cout << "\n Quantity of noodles: ";
    cin >> Qnoodles;
    cout << "\n Quantity of shake: ";
    cin >> Qshake;
    cout << "\n Quantity of chicken: ";
    cin >> Qchicken;

    m:
    cout << "\n \t \t \t Please select from the given menu options  ";
    cout << "\n \n 1) Rooms";
    cout << "\n 2) Pasta";
    cout << "\n 3) Burger";
    cout << "\n 4) Noodles";
    cout << "\n 5) Shake";
    cout << "\n 6) Chicken";
    cout << "\n 7) Info regarding sales and collection";
    cout << "\n 8) Exit";

    cout << "\n\n Please enter the choice!";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\n\n Enter the number of room you want: ";
            cin >> quant;
            if (Qrooms - Srooms >= quant) {
                Srooms = Srooms + quant;
                Total_rooms = Total_rooms + (quant * 1200);
                cout << "\n\n\t\t " << quant << " rooms have beeen alloted to you";
            } else {
                cout << "\n \t unfortunately only " << Qrooms - Srooms << " rooms left!";

            }break;
        case 2:
            cout << "\n\n Enter the pasta quantity ";
            cin >> quant;
            if (Qpasta - Spasta >= quant) {
                Spasta = Spasta + quant;
                Total_pasta = Total_pasta + (quant * 20);
                cout << "\n\n\t\t " << quant << " pasta dish have been alloted to you";
            } else {
                cout << "\n \t unfortunately only " << Qpasta - Spasta << " pasta's left!";

            }break;


        case 3:
            cout << "\n\n Enter the burger quantity ";
            cin >> quant;
            if (Qburger - Sburger >= quant) {
                Sburger = Sburger + quant;
                Total_burger = Total_burger + (quant * 30);
                cout << "\n\n\t\t " << quant << " burger(s) have been alloted to you";
            } else {
                cout << "\n \t unfortunately only " << Qburger - Sburger << " burger(s) left!";

            }break;


        case 4:
            cout << "\n\n Enter the noodles quantity ";
            cin >> quant;
            if (Qnoodles - Snoodles >= quant) {
                Snoodles = Snoodles + quant;
                Total_noodles = Total_noodles + (quant * 25);
                cout << "\n\n\t\t " << quant << " noodle dish(es) have been alloted to you";
            } else {
                cout << "\n \t unfortunately only " << Qnoodles - Snoodles << " noodle dish(es) left!";

            } break;


        case 5:
            cout << "\n\n Enter the shake quantity ";
            cin >> quant;
            if (Qshake - Sshake >= quant) {
                Sshake = Sshake + quant;
                Total_shake = Total_shake + (quant * 15);
                cout << "\n\n\t\t " << quant << " shake(s) have been alloted to you";
            } else {
                cout << "\n \t unfortunately only " << Qshake - Sshake << " shake(s) left!";

            } break;


        case 6:
            cout << "\n\n Enter the chicken quantity ";
            cin >> quant;
            if (Qchicken - Schicken >= quant) {
                Schicken = Schicken + quant;
                Total_chicken = Total_chicken + (quant * 50);
                cout << "\n\n\t\t " << quant << " chicken dish(es) have been alloted to you";
            } else {
                cout << "\n \t unfortunately only " << Qchicken - Schicken << " chicken dish(es) left!";

            }break;
        case 7:
            cout << "\n\n Details of sales and collection:  ";
            cout << "\n\n Number of rooms we had:  "<<Qrooms;
            cout << "\n\n Number of rooms we gave for rent:  "<<Srooms;
            cout << "\n\n Number of rooms that remains:  " <<Qrooms-Srooms;
            cout << "\n\n Total rooms collections for the day:  "<<Total_rooms;
            cout << "\n\n Details of sales and collection:  ";

            cout << "\n\n Number of pasta dishes we had:  " << Qpasta;
            cout << "\n\n Number of pasta dishes we served:  " << Spasta;
            cout << "\n\n Number of pasta dishes that remain:  " << Qpasta - Spasta;
            cout << "\n\n Total pasta collection for the day:  " << Total_pasta;

            cout << "\n\n Number of burgers we had:  " << Qburger;
            cout << "\n\n Number of burgers we served:  " << Sburger;
            cout << "\n\n Number of burgers that remain:  " << Qburger - Sburger;
            cout << "\n\n Total burger collection for the day:  " << Total_burger;

            cout << "\n\n Number of noodle dishes we had:  " << Qnoodles;
            cout << "\n\n Number of noodle dishes we served:  " << Snoodles;
            cout << "\n\n Number of noodle dishes that remain:  " << Qnoodles - Snoodles;
            cout << "\n\n Total noodles collection for the day:  " << Total_noodles;

            cout << "\n\n Number of shakes we had:  " << Qshake;
            cout << "\n\n Number of shakes we served:  " << Sshake;
            cout << "\n\n Number of shakes that remain:  " << Qshake - Sshake;
            cout << "\n\n Total shake collection for the day:  " << Total_shake;

            cout << "\n\n Number of chicken dishes we had:  " << Qchicken;
            cout << "\n\n Number of chicken dishes we served:  " << Schicken;
            cout << "\n\n Number of chicken dishes that remain:  " << Qchicken - Schicken;
            cout << "\n\n Total chicken collection for the day:  " << Total_chicken;

            cout<< "\n\n Total Money: "<<Total_rooms+Total_pasta+Total_burger+Total_chicken+Total_noodles+Total_shake;
            break;
        case 8:
            exit(0);
        default:
            cout<<"\n Please select the numbers mentioned above !";

    }

        goto m;

}