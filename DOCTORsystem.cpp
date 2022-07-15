#include <iostream>
#include <conio.h>
#include <unistd.h>
#include <string>
#include <cstring>

using namespace std;

void Welcome();

void patientmenu();

void doctorsmenu();

void beds();

void ambulance();

void oxygen();

void appointment();

void call();

void tkeapta();

void tkeaptb();

void tkeaptc();

void viewa();

void viewb();

void viewc();

void dra();

void drb();

void drc();

void updatea();

void updateb();

void updatec();

void contacta();

void contactb();

void contactc();

void alist();

void blist();

void clist();

void alist() {
    system("cls");
    FILE *r;
    char c;
    r = fopen("a.txt", "r");
    while ((c = fgetc(r)) != EOF)
        printf("%c", c);
    fclose(r);
    cout << "\n\nPress any key to go back...";
    getch();
    dra();
}

void blist() {
    system("cls");
    FILE *r;
    char c;
    r = fopen("b.txt", "r");
    while ((c = fgetc(r)) != EOF)
        printf("%c", c);
    fclose(r);
    cout << "\n\nPress any key to go back...";
    getch();
    drb();
}

void clist() {
    system("cls");
    FILE *r;
    char c;
    r = fopen("c.txt", "r");
    while ((c = fgetc(r)) != EOF)
        printf("%c", c);
    fclose(r);
    cout << "\n\nPress any key to go back...";
    getch();
    drc();
}

void updatea() {
    system("cls");
    FILE *r;
    char num[15], whats[15], lkdn[50], fb[50], insta[50];
    r = fopen("contacta.txt", "w");
    if (r == NULL) {
        printf("File Error");
    } else {
        cin.sync();
        cout << "\n\n\t\t\tEnter your contact number         : ";
        cin.getline(num, 15);
        fprintf(r, "Mobile Number  : %s\n", num);
        cout << "\t\t\tEnter your whatsapp number        : ";
        cin.getline(whats, 15);
        fprintf(r, "Whatsapp Number: %s\n", whats);
        fprintf(r, "\nFollow on:-\n");
        cout << "\t\t\tEnter your linkedin profile link  : ";
        cin.getline(lkdn, 50);
        fprintf(r, "Linkedin       : %s\n", lkdn);
        cout << "\t\t\tEnter your facebook profile link  : ";
        cin.getline(fb, 50);
        fprintf(r, "Facebook       : %s\n", fb);
        cout << "\t\t\tEnter your instagram profile link : ";
        cin.getline(insta, 50);
        fprintf(r, "Instagram      : %s\n", insta);
        cout << "\n\t\t\t>>> Thankyou!!! Your details have been updated.\n\n\t\t\tPress any key to go back...";
    }
    fclose(r);
    getch();
    contacta();
}

void updateb() {
    system("cls");
    FILE *r;
    char num[15], whats[15], lkdn[50], fb[50], insta[50];
    r = fopen("contactb.txt", "w");
    if (r == NULL) {
        printf("File Error");
    } else {
        cin.sync();
        cout << "\n\n\t\t\tEnter your contact number         : ";
        cin.getline(num, 15);
        fprintf(r, "Mobile Number   : %s\n", num);
        cout << "\t\t\tEnter your whatsapp number        : ";
        cin.getline(whats, 15);
        fprintf(r, "Whatsapp Number : %s\n", whats);
        fprintf(r, "\nFollow on:-\n");
        cout << "\t\t\tEnter your linkedin profile link  : ";
        cin.getline(lkdn, 50);
        fprintf(r, "Linkedin        : %s\n", lkdn);
        cout << "\t\t\tEnter your facebook profile link  : ";
        cin.getline(fb, 50);
        fprintf(r, "Facebook        : %s\n", fb);
        cout << "\t\t\tEnter your instagram profile link : ";
        cin.getline(insta, 50);
        fprintf(r, "Instagram       : %s\n", insta);
        cout << "\n\t\t\t>>> Thankyou!!! Your details have been updated.\n\n\t\t\tPress any key to go back...";
    }
    fclose(r);
    getch();
    contactb();
}

void updatec() {
    system("cls");
    FILE *r;
    char num[15], whats[15], lkdn[50], fb[50], insta[50];
    r = fopen("contactc.txt", "w");
    if (r == NULL) {
        printf("File Error");
    } else {
        cin.sync();
        cout << "\n\n\t\t\tEnter your contact number         : ";
        cin.getline(num, 15);
        fprintf(r, "Mobile Number   : %s\n", num);
        cout << "\t\t\tEnter your whatsapp number        : ";
        cin.getline(whats, 15);
        fprintf(r, "Whatsapp Number : %s\n", whats);
        fprintf(r, "\nFollow on:-\n");
        cout << "\t\t\tEnter your linkedin profile link  : ";
        cin.getline(lkdn, 50);
        fprintf(r, "Linkedin        : %s\n", lkdn);
        cout << "\t\t\tEnter your facebook profile link  : ";
        cin.getline(fb, 50);
        fprintf(r, "Facebook        : %s\n", fb);
        cout << "\t\t\tEnter your instagram profile link : ";
        cin.getline(insta, 50);
        fprintf(r, "Instagram       : %s\n", insta);
        cout << "\n\t\t\t>>> Thankyou!!! Your details have been updated.\n\n\t\t\tPress any key to go back...";
    }
    fclose(r);
    getch();
    contactc();
}

void contacta() {
    string a;
    system("cls");
    cout
            << "\n\n\t\t\tWhat do you want to\n\t\t\t1. View your Contact details\n\t\t\t2. Update your contact details\n\t\t\t3. Go back\n\t\t\t4. Logout\n\n\t\t\tSelect your choice: ";
    cin >> a;
    if (a == "1") {
        viewa();
        contacta();
    } else if (a == "2")
        updatea();
    else if (a == "3")
        dra();
    else if (a == "4")
        Welcome();
    else {
        cout << "\n\n\t\t\t>>> Wrong input!!! Try again...";
        sleep(2);
        contacta();
    }
}

void contactb() {
    string a;
    system("cls");
    cout
            << "\n\n\t\t\tWhat do you want to\n\t\t\t1. View your Contact details\n\t\t\t2. Update your contact details\n\t\t\t3. Go back\n\t\t\t4. Logout\n\n\t\t\tSelect your choice: ";
    cin >> a;
    if (a == "1") {
        viewb();
        contactb();
    } else if (a == "2")
        updateb();
    else if (a == "3")
        drb();
    else if (a == "4")
        Welcome();
    else {
        cout << "\n\n\t\t\t>>> Wrong input!!! Try again...";
        sleep(2);
        contactb();
    }
}

void contactc() {
    string a;
    system("cls");
    cout
            << "\n\n\t\t\tWhat do you want to\n\t\t\t1. View your Contact details\n\t\t\t2. Update your contact details\n\t\t\t3. Go back\n\t\t\t4. Logout\n\n\t\t\tSelect your choice: ";
    cin >> a;
    if (a == "1") {
        viewc();
        contactc();
    } else if (a == "2")
        updatec();
    else if (a == "3")
        drc();
    else if (a == "4")
        Welcome();
    else {
        cout << "\n\n\t\t\t>>> Wrong input!!! Try again...";
        sleep(2);
        contactc();
    }
}

void dra() {
    string e;
    system("cls");
    cout
            << "\n\n\t\t\tWhat do you want to have a look on...\n\t\t\t1. Patient Appointment list\n\t\t\t2. Contact info\n\t\t\t3. Logout\n\n\t\t\tSelect your choice: ";
    cin >> e;
    if (e == "1")
        alist();
    else if (e == "2")
        contacta();
    else if (e == "3")
        Welcome();
    else {
        cout << "\n\n\t\t\t>>> Wrong Input!!! Try again...";
        sleep(2);
        dra();
    }
}

void drb() {
    string e;
    system("cls");
    cout
            << "\n\n\t\t\tWhat do you want to have a look on...\n\t\t\t1. Patient Appointment list\n\t\t\t2. Contact info\n\t\t\t3. Logout\n\n\t\t\tSelect your choice: ";
    cin >> e;
    if (e == "1")
        blist();
    else if (e == "2")
        contactb();
    else if (e == "3")
        Welcome();
    else {
        cout << "\n\n\t\t\t>>> Wrong Input!!! Try again...";
        sleep(2);
        drb();
    }
}

void drc() {
    string e;
    system("cls");
    cout
            << "\n\n\t\t\tWhat do you want to have a look on...\n\t\t\t1. Patient Appointment list\n\t\t\t2. Contact info\n\t\t\t3. Logout\n\n\t\t\tSelect your choice: ";
    cin >> e;
    if (e == "1")
        clist();
    else if (e == "2")
        contactc();
    else if (e == "3")
        Welcome();
    else {
        cout << "\n\n\t\t\t>>> Wrong Input!!! Try again...";
        sleep(2);
        drc();
    }
}

void viewa() {
    system("cls");
    FILE *r;
    char c;
    r = fopen("contacta.txt", "r");
    while ((c = fgetc(r)) != EOF)
        printf("%c", c);
    fclose(r);
    cout << "\n\nPress any key to go back...";
    getch();
    system("cls");
}

void viewb() {
    system("cls");
    FILE *r;
    char c;
    r = fopen("contactb.txt", "r");
    while ((c = fgetc(r)) != EOF)
        printf("%c", c);
    fclose(r);
    cout << "\n\nPress any key to go back...";
    getch();
    system("cls");
}

void viewc() {
    system("cls");
    FILE *r;
    char c;
    r = fopen("contactc.txt", "r");
    while ((c = fgetc(r)) != EOF)
        printf("%c", c);
    fclose(r);
    cout << "\n\nPress any key to go back...";
    getch();
    system("cls");
}

void tkeapta() {
    FILE *r;
    char name[50], time[50], num[20];
    int age;
    r = fopen("a.txt", "a");
    if (r == NULL) {
        cout << "File Error";
    } else {
        cin.sync();
        cout << "\n\t\tEnter the patient name              : ";
        cin.getline(name, 50);
        fprintf(r, "Name           : %s\n", name);
        cout << "\t\tEnter Appointment time(hh:mm AM/PM) : ";
        cin.getline(time, 50);
        fprintf(r, "Time           : %s\n", time);
        cout << "\t\tEnter Mobile number                 : ";
        cin.getline(num, 20);
        fprintf(r, "Mobile number  : %s\n", num);
        cout << "\t\tEnter age                           : ";
        cin >> age;
        fprintf(r, "Age            : %d\n\n", age);
        cout << "\n\t\t>>> Your Entry has been saved.\n";
    }
    fclose(r);
    sleep(2);
    system("cls");
    call();
}

void tkeaptb() {
    FILE *r;
    char name[50], time[50], num[20];
    int age;
    r = fopen("b.txt", "a");
    if (r == NULL) {
        cout << "File Error";
    } else {
        cin.sync();
        cout << "\n\t\tEnter the patient name              : ";
        cin.getline(name, 50);
        fprintf(r, "Name           : %s\n", name);
        cout << "\t\tEnter Appointment time(hh:mm AM/PM) : ";
        cin.getline(time, 50);
        fprintf(r, "Time           : %s\n", time);
        cout << "\t\tEnter Mobile number                 : ";
        cin.getline(num, 20);
        fprintf(r, "Mobile number  : %s\n", num);
        cout << "\t\tEnter age                           : ";
        cin >> age;
        fprintf(r, "Age            : %d\n\n", age);
        cout << "\n\t\t>>> Your Entry has been saved.\n";
    }
    fclose(r);
    sleep(2);
    system("cls");
    call();
}

void tkeaptc() {
    FILE *r;
    char name[50], time[50], num[20];
    int age;
    r = fopen("c.txt", "a");
    if (r == NULL) {
        cout << "File Error";
    } else {
        cin.sync();
        cout << "\n\t\tEnter the patient name              : ";
        cin.getline(name, 50);
        fprintf(r, "Name           : %s\n", name);
        cout << "\t\tEnter Appointment time(hh:mm AM/PM) : ";
        cin.getline(time, 50);
        fprintf(r, "Time           : %s\n", time);
        cout << "\t\tEnter Mobile number                 : ";
        cin.getline(num, 20);
        fprintf(r, "Mobile number  : %s\n", num);
        cout << "\t\tEnter age                           : ";
        cin >> age;
        fprintf(r, "Age            : %d\n\n", age);
        cout << "\n\t\t>>> Your Entry has been saved.\n";
    }
    fclose(r);
    sleep(2);
    system("cls");
    call();
}

void call() {
    string a;
    string choice;
    cout
            << "\n\t\t1. Dr. A\n\t\t2. Dr. B\n\t\t3. Dr. C\n\t\t4. Main Menu\n\t\t5. Logout\n\n\t\tSelect your choice: ";
    cin >> choice;
    if (choice == "1") {
        cout
                << "\n\t\tPress 1 to take appointment\n\t\tpress 2 to view Doctor's contact details\n\t\tPress 3 to go back\n\n\t\tSelect your option: ";
        cin >> a;
        if (a == "1") {
            tkeapta();
        } else if (a == "2") {
            viewa();
            call();
        } else if (a == "3") {
            appointment();
        } else {
            cout << "\n\n\t\t>>> Wrong input!!! Try again...";
            sleep(2);
            call();
        }
    } else if (choice == "2") {
        cout
                << "\n\t\tPress 1 to take appointment\n\t\tpress 2 to view Doctor's contact details\n\t\tPress 3 to go back\n\n\t\tSelect your option: ";
        cin >> a;
        if (a == "1") {
            tkeaptb();
        } else if (a == "2") {
            viewb();
            call();
        } else if (a == "3") {
            appointment();
        } else {
            cout << "\n\n\t\t>>> Wrong input!!! Try again...";
            sleep(2);
            call();
        }
    } else if (choice == "3") {
        cout
                << "\n\t\tPress 1 to take appointment\n\t\tpress 2 to view Doctor's contact details\n\t\tPress 3 to go back\n\n\t\tSelect your option: ";
        cin >> a;
        if (a == "1") {
            tkeaptc();
        } else if (a == "2") {
            viewc();
            call();
        } else if (a == "3") {
            appointment();
        } else {
            cout << "\n\n\t\t>>> Wrong input!!! Try again...";
            sleep(2);
            call();
        }
    } else if (choice == "4")
        patientmenu();
    else if (choice == "5")
        Welcome();
    else {
        cout << "\n\t\t>>> Wrong Input!!! Try again...";
        system("cls");
        sleep(2);
        call();
    }
    patientmenu();
}

void appointment() {
    system("cls");
    cout << "\n\t\t*************************************\n";
    cout << "\n\t\tThree doctors available\n\n\t\tInformation and time are Given below\n";
    cout << "\t\t-----------------------------------";
    cout << "\n\t\t\tDr. A(Skin Specialist)\n\n";
    cout << "\t\t\t\tTiming:\n";
    cout << "\t\tMonday to Friday: 09:00AM to 05:00PM" << endl;
    cout << "\t\tSaturday        : 09:00AM to 01:00PM" << endl;
    cout << "\t\tSunday          : Closed" << endl;
    cout << "\n\t\t-------------------------------\n";
    cout << "\n\t\t\tDr. B(Child Specialist)\n\n";
    cout << "\t\t\t\tTiming:\n";
    cout << "\t\tMonday to Friday: 09:00AM to 05:00PM" << endl;
    cout << "\t\tSaturday        : 09:00AM to 01:00PM" << endl;
    cout << "\t\tSunday          : Closed" << endl;
    cout << "\n\t\t-------------------------------\n";
    cout << "\n\t\t\tDr. C(Heart Specialist)\n\n";
    cout << "\t\t\t\tTiming:\n";
    cout << "\t\tMonday to Friday: 09:00AM to 05:00PM" << endl;
    cout << "\t\tSaturday        : 09:00AM to 01:00PM" << endl;
    cout << "\t\tSunday          : Closed" << endl;
    cout << "\n\t\t-------------------------------\n";
    cout << "\n\t\tWant to continue to take Appointment\n\t\t1. yes               2. No \n\t\tSelect option: ";
    string c;
    cin >> c;
    if (c == "1")
        call();
    else if (c == "2")
        patientmenu();
    else {
        cout << "\n\t\t>>> Wrong input!!! Try again...";
        sleep(2);
        appointment();
    }
}

void oxygen() {
    system("cls");
    cout << "\n\t\t\tFollowing shows the status of the portable oxygen cylinders available:-" << endl;
    cout << "\t\t\t  _______________________________________ " << endl;
    cout << "\t\t\t | Hospital | In Use | Available for use |" << endl;
    cout << "\t\t\t |==========|========|===================|" << endl;
    cout << "\t\t\t | Hosp. A  |   74   |          12       |" << endl;
    cout << "\t\t\t | Hosp. B  |   80   |          15       |" << endl;
    cout << "\t\t\t |__________|________|___________________|" << endl;
    cout << "\n\n\t\t\tPress any key to return to main menu... ";
    getch();
    patientmenu();
}

void ambulance() {
    system("cls");
    cout << "\n\t\t\tFollowing shows the status of the ambulances available:-" << endl;
    cout << "\t\t\t  _____________________________________________ " << endl;
    cout << "\t\t\t |Hospital| On field | Stand by | Out of order |" << endl;
    cout << "\t\t\t |========|==========|==========|==============|" << endl;
    cout << "\t\t\t | Hosp. A|     7    |    18    |      4       |" << endl;
    cout << "\t\t\t | Hosp. B|     7    |    22    |      3       |" << endl;
    cout << "\t\t\t |________|__________|__________|______________|" << endl;
    cout << "\n\n\t\t\tPress any key to return to main menu... ";
    getch();
    patientmenu();
}

void beds() {
    system("cls");
    cout << "\n\t\t\tFollowing shows the beds and rooms available:-" << endl;
    cout
            << "\t\t\t  __________________________________________________________________________________________________________________________"
            << endl;
    cout
            << "\t\t\t |     Type of room      || Beds Free(Hosp. A)| Freeing Tomorrow(Hosp. A) || Free Beds(Hosp. B) | Freeing Tomorrow(Hosp. B) |"
            << endl;
    cout
            << "\t\t\t |=======================||===================|===========================||=====================|==========================|"
            << endl;
    cout
            << "\t\t\t |        Single         ||         12        |             5             ||           36        |              5           |"
            << endl;
    cout
            << "\t\t\t |    Single with TV     ||          5        |             7             ||           15        |              4           |"
            << endl;
    cout
            << "\t\t\t |Single with Ventilators||          2        |             1             ||            4        |              2           |"
            << endl;
    cout
            << "\t\t\t |        Double         ||          8        |            14             ||           17        |              5           |"
            << endl;
    cout
            << "\t\t\t |Double with Ventilators||          1        |             2             ||            5        |              2           |"
            << endl;
    cout
            << "\t\t\t |       4 bed room      ||         13        |            18             ||            3        |              3           |"
            << endl;
    cout
            << "\t\t\t |_______________________||___________________|___________________________||_____________________|__________________________|"
            << endl;
    cout << "\n\n\t\t\tPress any key to return to main menu... ";
    getch();
    patientmenu();
}

void doctorsmenu() {
    string a, b;
    system("cls");
    cout << "\n\n\t\tEnter Your Login ID : ";
    cin >> a;
    if (a == "11111111") {
        for (int i = 0; i < 3; i++) {
            cout << "\n\t\tEnter Password     : ";
            cin >> b;
            if (b == "aaaa") {
                system("cls");
                cout << "\n\n\n\n\n\t\t\t\tWelcome Dr. A";
                sleep(2);
                dra();
            } else {
                cout << "\n\n\t\t>>> Wrong password!!! Try again...\n\t\t>>> You have " << 2 - i << " chances left...";
                sleep(2);
                system("cls");
                cout << "\n\n\t\tEnter your Login ID : 20BCS6702\n";
            }
        }
    } else if (a == "22222222") {
        for (int i = 0; i < 3; i++) {
            cout << "\n\t\tEnter Password     : ";
            cin >> b;
            if (b == "bbbb") {
                system("cls");
                cout << "\n\n\n\n\n\t\t\t\tWelcome Dr. B";
                sleep(2);
                drb();
            } else {
                cout << "\n\n\t\t>>> Wrong password!!! Try again...\n\t\t>>> You have " << 2 - i << " chances left...";
                sleep(2);
                system("cls");
                cout << "\n\n\t\tEnter your Login ID : 20BCS6731\n";
            }
        }
    } else if (a == "33333333") {
        for (int i = 0; i < 3; i++) {
            cout << "\n\t\tEnter Password     : ";
            cin >> b;
            if (b == "cccc") {
                system("cls");
                cout << "\n\n\n\n\n\t\t\t\tWelcome Dr. C";
                sleep(2);
                drc();
            } else {
                cout << "\n\n\t\t>>> Wrong password!!! Try again...\n\t\t>>> You have " << 2 - i << " chances left...";
                sleep(2);
                system("cls");
                cout << "\n\n\t\tEnter your Login ID : 20BCS6739\n";
            }
        }
    } else {
        cout << "\n\n\t\t>>> Account Doesn't Exist. Try again";
        sleep(2);
        doctorsmenu();
    }
}

void patientmenu() {
    string b;
    system("cls");
    cout << "\n\n\t\t\tWhat out of the following do you want to enquire about:-" << endl;
    cout << " \t\t\tTo check availability of:-" << endl;
    cout << " \t\t\tEnter 1 for Beds in hospital," << endl;
    cout << " \t\t\tEnter 2 for Ambulances," << endl;
    cout << " \t\t\tEnter 3 for Oxygen Cylinders," << endl;
    cout << " \t\t\tEnter 4 for Doctor Appointment," << endl;
    cout << " \t\t\tEnter 5 to log out.\n\n\t\t\tChoose & press enter: ";
    cin >> b;
    if (b == "1")
        beds();
    else if (b == "2")
        ambulance();
    else if (b == "3")
        oxygen();
    else if (b == "4")
        appointment();
    else if (b == "5")
        Welcome();
    else {
        cout << "\n\t\t\t>>> Wrong Input!!! Try again...";
        sleep(2);
        patientmenu();
    }
}

void Welcome() {
    string a;
    system("cls");
    cout << "\n\n\t\t\t--===<({ D.O.C.T.O.R. System })>===--\n";
    cout << "\n\n\t\t\tI am a\t\t1. Patient\n\t\t\t\t\t2. Doctor\n\n\t\t\tSelect an option: ";
    cin >> a;
    if (a == "1") {
        patientmenu();
    } else if (a == "2")
        doctorsmenu();
    else {
        cout << "\n\n\t\t\t>>> Wrong Input!!! Try again...";
        sleep(2);
        Welcome();
    }
}

int main() {
    system("color F4");
    Welcome();
    return 0;
}
