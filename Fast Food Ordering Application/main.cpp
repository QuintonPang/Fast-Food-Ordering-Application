#include <iostream>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include "Food.h"
#include "Customer.h"
#include <stdlib.h>
#include <algorithm>
#include <string_view>
#include <iterator>
#include <string>
#define QUANTITY_MAX_LEN 2
#define CHOICE_MAX_LEN 1
using namespace std;

inline std::string trim(const std::string& s)
{
    auto wsfront = std::find_if_not(s.begin(), s.end(), [](int c) {return std::isspace(c); });
    auto wsback = std::find_if_not(s.rbegin(), s.rend(), [](int c) {return std::isspace(c); }).base();
    return (wsback <= wsfront ? std::string() : std::string(wsfront, wsback));
}
void sort();

void centerify_output(std::string str, int num_cols) {
    // Calculate left padding
    int padding_left = (num_cols / 2) - (str.size() / 2);

    // Put padding spaces
    for (int i = 0; i < padding_left; ++i) std::cout << ' ';

    // Print the message
    std::cout << str;
}

inline std::string trim(const std::string& s)
{
    auto wsfront = std::find_if_not(s.begin(), s.end(), [](int c) {return std::isspace(c); });
    auto wsback = std::find_if_not(s.rbegin(), s.rend(), [](int c) {return std::isspace(c); }).base();
    return (wsback <= wsfront ? std::string() : std::string(wsfront, wsback));
}
void sort();



int main() {

    bool flag = true;
    while (flag) {
        int menuChoice;

        // sort member file during the start of each loop

        sort();

        system("Color E4");

        std::vector<std::string> lines = {

         "                         ...-*##*=...                         ",
         "                      :#@###*-..-*###@#:                      ",
         "                    -+@*              +@+-                    ",
         "                  =@#=: :=*%@%%%%@%*=: :=#@=                  ",
         "                 .@*  +%%+:        :+%@+. *@.                 ",
         "                 *@==@*:   =.         .*@+-@*                 ",
         "                #@:#@-     -            :@#.@%                ",
         "                %%*@-  ++ .*:            :@*%%                ",
         "                .@@#       .              #@@:                ",
         "                 :@*                      +@-                 ",
         "                 .#%%%%%%%%%%%%%%%%%%%%%%%%#.                 ",



        };
        //         std::vector<std::string> lines = {


        //          "                                   .                                  ",          
        //          "                                   :**=:                              ",          
        //          "                                    -###*+.                           ",          
        //          "                                    .**####+.                         ",          
        //          "                                    -**#####*:                        ",          
        //          "                                    **********.                       ",          
        //          "                                   =**********=                       ",          
        //          "                           -=     :***********=  :-.                  ",          
        //          "                         =**-    :************=  .**=.                ",          
        //          "                       -****.   :**++++++++***:   +***=               ",          
        //          "                      =*****:   ++++++++++++++    +****+              ",          
        //          "               +=    -******-  -+++++++++++++=   .+*****+     +:      ",          
        //          "              +#*:  .******++  =+++++++++++++=   -++*****-   -**:     ",          
        //          "             =##**- -*****+++=.=++++++++++++++  .++++****=  -****     ",          
        //          "             *#****=-****++++++-+++


        //            ===+++-:++++++***+.+****#:    ",          
        //          "             *#*********++++++++++===========+++++++++***+******#:    ",          
        //          "             +**********+++++++++============+++++++++++********#.    ",          
        //          "          .  .**********++++++++==-:::-======++++++++++++*******+     ",          
        //          "          +=  :*********++++-::::=*###*==-::-==++++++++*********.  +: ",          
        //          "         .##*-.:+*******+=.-*%%%%%###**##%%#+===--:-=+********= .=*#= ",          
        //          "         .#####******+-:-+#%%%#***%%#%##**++++***###+=-=+*****+*####+ ",          
        //          "         .######***=:=##***%%%#%%%#*+==========-----=*#*=-+***######+ ",          
        //          "          #######*:=%%%*%#+%%#%#*++======+*+==---=+-----*%=:+#######= ",          
        //          "          +#####=.*%*%%%#*+%%%*++++===========---------::-##:-*#####: ",          
        //          "          :####-:%#*%%%%##%%%*++++*===========---------+-::+%=:####*  ",          
        //          "           +##=:%##%%%#%%+*%*++++++=======+*=---=+-----:::::+%=:###-  ",          
        //          "           :##.#%+%%%*+%*=%%++++++==========----------:::::::*%.=#*   ",          
        //          "            =--%**#%%**%+*%#++++++====++====----------+-::::::%*.*.   ",          
        //          "              +%#%#%%##%*%%*++++++===========++------::::-=-::*%..    ",          
        //          "              *%#%%%*#%%#%#++++++++=========-------==-:::=+-::+%.     ",          
        //          "              +%*%%%***%%%*+++++++======+++=------+**+-:::::::#%      ",          
        //          "              -%*#%%%#%%%#+++++==+=====+***-------=++=::::::-*%:      ",          
        //          "               #%*%%%%%%#++++++==========+=-------------==+*#*.       ",          
        //          "                =%##%##********++++++**********#######*++=-:          ",          
        //          "                  :-====================---:::...                     ",          


        //         };


        int num_cols = 125;

        //// VIRTUAL BORDER
        //std::cout << std::endl;
        //for (int i = 0; i < num_cols; ++i) std::cout << ' ';
        //std::cout << '|' << std::endl;

        // OUTPUT
        cout << "\n\n\n";
        for (int i = 0; i < lines.size(); ++i) {
            centerify_output(lines[i], num_cols);
            std::cout << std::endl;
        }

        //// VIRTUAL BORDER
        //std::cout << std::endl;
        //for (int i = 0; i < num_cols; ++i) std::cout << ' ';
        //std::cout << '|' << std::endl;
        cout << "\n\n\nWELCOME TO MTACO!\n\n";
        cout << "Input Selection to continue... \n";
        cout << "1. Register Customer\n";
        cout << "2. Make an order\n";
        //cout << "3. Redeem Gift Using Membership Point\n";
        cout << "3. Top Up Membership Card\n";

        cout << "\n0. Quit Program\n";

        string input;

        while (true) {
            cout << "Please Select Your Choice (number): ";
            cin >> input;

            // Check if the entire input is a valid integer
            if (input.find_first_not_of("0123456789") == string::npos) {
                if (input.length() > CHOICE_MAX_LEN) menuChoice = 99;
                else menuChoice = stoi(input);
              

                // Check if it's within the specified range
                if (menuChoice >= 0 && menuChoice < 4) {
                    break; // Valid input, exit the loop.
                }
            }

            cout << "Invalid choice. Please enter again:\n ";
        }
        system("CLS");


        switch (menuChoice) {
        case 1:

            cout << "REGISTER AS MEMBER\n\n";
            {Customer customer = registerCustomer();
            system("CLS");
            cout << "Hi " << customer.getName() << ", congratulations on becoming one of our members!\n";
            cout << "Your Card No. is " << customer.getCardNo() << ", please take note of it for future use!\n\n";

            writeMemberToFile(customer);
            }
            break;
        case 2:

            foodSelection();
            break;
        case 3:
            cout << "TOP UP CARD\n\n";

            cardTopUp();
            break;

        case 0:
            system("CLS");
            cout << "\n\n\n";
            for (int i = 0; i < lines.size(); ++i) {
                centerify_output(lines[i], num_cols);
                std::cout << std::endl;
            }
            cout << "\n\n\n";

            cout << "Bye! See you again!\n";

            flag = false;
            break;
        }

    }

    return 0;
}


void sort() {
    ifstream fileInput;
    fileInput.open("member.txt");
    string line;
    vector<string> lines;
    if (!fileInput.is_open()) {
        cout << "Unexpected error occured when opening member file.";
        return;
    }

    int lineNo = 0;
    while (getline(fileInput, line)) {

        if (lineNo != 0) lines.push_back(line);
        // cout << line;
        lineNo++;
    }
    // Sort the lines based on member number in alphabetical order
    sort(lines.begin(), lines.end(),
        [](string const& l, std::string const& r) {
            return l.substr(50) < r.substr(50);
        }
    );

    // for (auto i = lines.begin(); i != lines.end(); ++i)
         //cout << *i << endl;

    fileInput.close();
    ofstream fileOutput;
    fileOutput.open("member.txt");

    if (fileOutput.is_open()) {
        lines.insert(lines.begin(), "                  Customer Name                          Card Number            Contact Number          Membership Point               Value          ");
      //  for (auto i = lines.begin(); i != lines.end(); ++i)
          //  cout << *i << endl;


        // Write the sorted lines to the output file
        std::copy(lines.begin(), lines.end(), std::ostream_iterator < std::string >(fileOutput, "\n"));
        fileOutput.close();
    }
    else {
        cout << "Unexpected error occured when opening member file.";
        return;
    }

}
