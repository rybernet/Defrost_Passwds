//
// Copyrights Reserved, Rendered Cybernetics Corp 2020 - 2021
// 
// Our Github:          https://github.com/rybernet
//
// Date:                21-04-2021
//
// Purpose:             A Password cracking tool that generates a potential password combinations for brute-forcing attacks
//
// Prerequisites:       Valid target information
//
// DISCLAIMER:          We are not responsible for any hacks or intrusions resulting from the usage of our software.
//                      Hacking into online profiles you are not permitted to is illegal and may put you in serious trouble!
// 

#include <iostream>
#include <algorithm>

using namespace std;

void arHeader(){

     cout << "             ################################################################################  " << endl;
     cout << "             ##                                                                            ##  " << endl;
     cout << "             ##   #######   ########   ########  #######    ######   ########   ########   ##  " << endl;
     cout << "             ##   ##    ##  ##         ##        ##    ##  ##    ##  ##            ##      ##  " << endl;
     cout << "             ##   ##    ##  #######    #######   #######   ##    ##  ########      ##      ##  " << endl;
     cout << "             ##   ##    ##  ##         ##        ##    ##  ##    ##        ##      ##      ##  " << endl;
     cout << "             ##   #######   ########   ##        ##    ##   ######   ########      ##      ##  " << endl;
     cout << "             ##                                version 1.0                                 ##  " << endl;
     cout << "             ################################################################################  " << endl;
}

int main(){

    arHeader();

    string fname;
    string sname;
    string bd;
    string bm;
    string by;

    cout << "\nEnter your FirstName & Surname: ";
    cin >> fname >> sname;
    cout << endl;

    string fn, sn;
    fn = fname.at(0);
    sn = sname.at(0);

    cout << "Enter your Date Of Birth(dd mm yyyy): ";
    cin >> bd >> bm >> by;
    cout << endl;

    string yn1, yn2;

    yn1 = by.at(2);
    yn2 = by.at(3);

    cout << "password #1: " << fn << sn << bd << bm << yn1 << yn2<< endl;
    cout << "Password #2: " << fname << bd << bm << endl;
    cout << "Password #3: " << sname << yn1 << yn2 << endl;
    cout << "Password #4: " << fname << bd << endl;
    cout << "Password #5: " << sname << bd << endl;
    cout << "Password #6: " << yn1 << yn2 << bm << bd << endl;


return 0;
}
