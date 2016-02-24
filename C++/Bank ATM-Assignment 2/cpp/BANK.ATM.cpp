/*
    NAME:       Paul Cummings
    DATE:       18 Nov 2015
    PROGRAM:    Bank ATM++
    PURPOSE:    A simple, easy to use banking simulation.  It allows a user to create a bank account or log in
                with an existing account.  Once logged in the user may deposit, withdraw, and view virtual
                funds from their account.

    PSUEDO-CODE:
    1.  I am going to include '#include <fstream>' so that my program can utilize files writing and reading
    2.  I am going to declare the functions used in my program (outlined in additional instructions).
    3.  I am going to declare two const string variables globally containing the file names in them.  I normally
    would not go about my file names in such a manner, but this is to make my program easier to grade.  This way
    a TA or instructor can easily change these two constants to file name appropriate to their computing device
    to test the program (Their file address will likely be different than that of my home computer).
    4.  Declare all variables needed in main();
    5.  To implement the menus, I will implement function calls, loops & conditional comparisons for input validation,
    and terminal values to exit said loops for successful options (don't need to keep looping if a valid input is
    entered).
    6.  The menus themselves will be formatted neatly withing my code so that I have a better idea of what it will
    look like when I cout the text.  This will allowed for a nice boxed border appearance, and easy to understand
    menu options.
    7.  Once I have the menus and the flow of the program implemented, the next real step is to ensure that I am
    opening and closing files correctly when it is time to create and account (writing to an address will create
    that file in memory), and reading from files when logging in (verifying the credentials then reading the file
    with the account balance).
    8.  Once these steps have been done, the program should fall into place.  If I decide an additional specific
    notes need to be left for easier understanding and reading of this code, I will supply between this section
    [PSUEDO-CODE] and the [ADDITIONAL INSTRUCTIONS] block.  If there is nothing between these two, I have decided
    that there isn't much more I could add in the comments to facilitate ease of understanding my program as I
    begin writing it.  Thanks for taking a look at my program in advance.  Enjoy :)

    ADDITIONAL NOTES:
    1. I was unable to determine a way to pass file extensions as a const string variable and so I have removed these
    variables.  I understand that someone testing my code will have to manually replace the file extensions with their
    own two (one for account credentials and one for account balance), so I have commented next to every time a file
    is called, specifying which file it needs to be (that way no one has to sift through my file extensions to figure
    out which one is being called on).

    ADDITIONAL INSTRUCTIONS:
    1. mainMenu():  Function to display the main menu for login, create account, and quit.
    quit.
    2. createAccount():  Function that accepts user ID and password to create the account.
    3. login():  Function to match user ID and password to indicate if login is successful or not.
    4. bankingMenu():  Function to display the menu choices for Deposit, Withdrawal, Balance and Quit.
    5. deposit():  Function to accept the amount user wishes to deposit in his/her account.
    6. withdraw():  Function to accept the amount user wishes to withdraw from the account.
    7. displayBalance():  Function to display the balance amount in the user account. You can use additional
    functions (optional) for input validation and withdrawal amount validation. Your program should make use
    appropriate switch and if-else statements where necessary.
*/

#include <iostream>
#include <fstream>

using namespace std;

// Declaring all the functions asked of for this program
// I could have returned values for the menus and done case/swith or
// else/if statements within main(), but I was curious to see how I
// would craft the majority of my code within the functions.
void mainMenu();
void createAccount();
void login();
void bankingMenu();
void deposit();
void withdraw();
void displayBalance();

// These two constants have been commented out because it did't work as intended
//const string credentials = "C:\\Users\\Goat Prime.Goat\\Desktop\\Bank ATM\\account credentials.txt";
//const string balance = "C:\\Users\\Goat Prime.Goat\\Desktop\\Bank ATM\\account balance.txt";

int main()
{
    cout << endl << endl;  // Give the program some breathing room

    mainMenu();  // This is all main() has to call to get my program running.  Everything is processed within functions
                 // In a way this was kind of my personal experiment to see if I could do it, and also who it would
                 // look once built.  I plan on talking to my TA to see if such a structure is preferable or to be
                 // avoided and why, but my program still functions fine and does everything it is supposed to do.

return 0;
}

void mainMenu()  // The first major chunk of code.  The second being the login-menu
{
    char mainChoice = 'z';  // This is to ensure admittance into the menu's loop initially

    while (mainChoice == 'z')  // I use this outer loop to allow the user access to the original menu from the account menu
    {
        while (mainChoice != 'c' && mainChoice != 'C' && mainChoice != 'l' && mainChoice != 'L' && mainChoice != 'q' && mainChoice != 'Q')  // This validates the user choice
        {
            cout << "******************************" << endl;
            cout << "    Welcome to BANK ATM++     " << endl;
            cout << "******************************" << endl;
            cout << "*  C. Create Account         *" << endl;
            cout << "*  L. Login                  *" << endl;
            cout << "*  Q. Quit                   *" << endl;
            cout << "******************************" << endl << endl;

            cout << "Please make your selection: ";
            cin >> mainChoice;  // The user's selection
            cout << endl << endl;

            if (mainChoice != 'c' && mainChoice != 'C' && mainChoice != 'l' && mainChoice != 'L' && mainChoice != 'q' && mainChoice != 'Q')  // This informs the user of invalid selections
            {
                cout << "Invalid selection.  Please re-enter your response." << endl << endl;
            }
        }
        switch (mainChoice)  // I decided to go with switch/case instead of if/else because I feel that it is visually more appealing as a programmer to view a menu in this way
        {
            case 'c':   // Each case allows for both upper and lower case selections.
            case 'C':
            {
                createAccount();    // Calls the account creation function
                mainChoice = 'z';   // Re-initializes the selection so the user remains in the main menu loop (they have not requested escape :P)
                break;
            }

            case 'l':
            case 'L':
            {
                login();            // Calls the account login function
                mainChoice = 'z';   // Re-initializes the selection so the user remains in the main menu loop (they have not requested escape :P)
                break;
            }

            case 'q':
            case 'Q':               // Allows the user to completely leave the program.  Thanks them for their patronage.
            {
                cout << "Thank you for using BANK ATM++" << endl;
                cout << "Have a nice day!" << endl << endl;         // Using 'break' is unnecessary on the last case.
            }
        }
    }
}

void createAccount()    // This function both creates a file for the user credentials and a file for their account balance (initializing it at $0)
{
    // Declaring local variables
    int userID(0), password(0);
    double initialBalance(0);

    cout << "Please enter a User ID# ";     // Prompt for the user's ID #
    cin >> userID;
    cout << endl;

    cout << "Please enter a numeric password: ";    // Prompt for the user's password
    cin >> password;
    cout << endl << endl;

    ofstream createAccountFile;     // This block of code will open a file, save the User ID# and password, and then close the file.
    createAccountFile.open("C:\\Users\\Goat Prime.Goat\\Desktop\\C++\\Fall 2015\\Assignment 2\\Bank ATM\\account credentials.txt");  // [Your credentials file]
    createAccountFile << userID << endl;
    createAccountFile << password << endl;
    createAccountFile.close();

    ofstream initializeAccountFile;     // This block of code will open a file, save the starting balance as zero, and then close the file.
    initializeAccountFile.open("C:\\Users\\Goat Prime.Goat\\Desktop\\C++\\Fall 2015\\Assignment 2\\Bank ATM\\account balance.txt");   // [Your balance file]
    initializeAccountFile << initialBalance << endl;
    initializeAccountFile.close();

    cout << "Your account has been created.  Thank you!" << endl << endl;
}

void login()
{
    // Declaring local variables
    int userID(0), password(0), truUserID(0), truPassword(0);

    cout << "Please enter your user ID# ";      // Asks the user for their UserID#
    cin >> userID;
    cout << endl;

    cout << "Please enter your password: ";     // Asks the user for their password
    cin >> password;
    cout << endl;

        ifstream loginAccountFile;      // Prepares a file stream to validate the credentials
        loginAccountFile.open("C:\\Users\\Goat Prime.Goat\\Desktop\\C++\\Fall 2015\\Assignment 2\\Bank ATM\\account credentials.txt");    // [Your credentials file]

        if (loginAccountFile)   // This checks to see if the file exists in memory.  If it does, it will run the validation
        {
            loginAccountFile >> truUserID;      // Reads the actual User ID# to a variable
            loginAccountFile >> truPassword;    // Reads the actual password to a variable

            loginAccountFile.close();       // Closes the file stream

            if (userID == truUserID && password == truPassword)     // This condition checks to see if the user inputed the correct User ID# and password
            {
                cout << "You have been successfully logged in..." << endl << endl;
                bankingMenu();      // The user information has been validated.  Now the user will go to the next large section of code.  The logged in menu.
            }

            else    // This will occur if the user was unable to validate their information (user error, etc...)
            {
                cout << endl << "Your user ID# or password is incorrect." << endl;
                cout << "Redirecting you to the main menu..." << endl;
                cout << "If you feel this is in error," << endl;
                cout << "please contact a manager." << endl << endl;
            }
        }

        else    // This will only run if the condition to check the file fails
        {
            cout << "No login data could be found.  Please contact a manager" << endl;
            cout << "or create a new account." << endl;
        }
}

void bankingMenu()      // This is the main login menu.  The function will keep the user here until they choose to log out.
{
    char bankChoice = 'z';      // Initializes this variable so that the user will always enter the login menu the first time (they have already been validated)

    while (bankChoice == 'z')
    {
        while (bankChoice != 'd' && bankChoice != 'D' && bankChoice != 'w' && bankChoice != 'W' && bankChoice != 'r' && bankChoice != 'R' && bankChoice != 'q' && bankChoice != 'Q')
        {       // This keeps the user looped into this menu until they make a selection that wishes to leave this menu (i.e. the quit/log out).
            cout << "******************************" << endl;
            cout << "    Welcome to BANK ATM++     " << endl;
            cout << "******************************" << endl;
            cout << "*  D. Deposit Money          *" << endl;
            cout << "*  W. Withdraw Money         *" << endl;       // This is the main login menu
            cout << "*  R. Request Balance        *" << endl;
            cout << "*  Q. Quit [Log Out]         *" << endl;
            cout << "******************************" << endl << endl;

            cout << "Please make your selection: ";     // This prompts the user for their selection
            cin >> bankChoice;
            cout << endl << endl;

            if (bankChoice != 'd' && bankChoice != 'D' && bankChoice != 'w' && bankChoice != 'W' && bankChoice != 'r' && bankChoice != 'R' && bankChoice != 'q' && bankChoice != 'Q')
            {       // Checks for input validation.  If the user selected and invalid choice, the program will inform them before looping back to the menu, requesting a choice again.
                cout << "Invalid selection.  Please re-enter your response." << endl << endl;
            }
        }

        switch (bankChoice) // Again, I like switches :)
        {
            case 'd':       // Accepts upper and lower case choices
            case 'D':
            {
                deposit();      // User chose to make a deposit.  The program calls the deposit function.
                bankChoice = 'z';   // This keeps the user within the login menu because they have not decided to leave yet.
                break;
            }

            case 'w':
            case 'W':
            {
                withdraw();     // User chose to make a withdraw.  The program calls the withdraw function.
                bankChoice = 'z';
                break;
            }

            case 'r':
            case 'R':
            {
                displayBalance();       // User chose to view their balance.  The program calls the displayBalance function.
                bankChoice = 'z';
                break;
            }

            case 'q':       // User has chosen to quit the login menu (i.e. log out)
            case 'Q':
            {
                cout << "Logging you out..." << endl << endl;       // Using 'break' is unnecessary on the last case.
            }
        }
    }
}

void deposit()      // This is the deposit function.  Performs all deposit related actions.
{
    double depositAmt(0), initialBalance(0), newBalance(0);

    do      // I want the user to keep entering a deposit value until I have validated that it is zero or greater.
    {
        cout << "Please enter the amount you would like to deposit. $";
        cin >> depositAmt;
        cout << endl << endl;

        if (depositAmt < 0)     // This catches invalid input and informs the user on how to correct the input.
        {
            cout << "Please enter a non-negative value." << endl;
            cout << "[Enter 0, if you no longer wish to deposit]" << endl << endl;
        }
    }while (depositAmt <= 0);       // Validation condition ensuring the deposit is zero or greater

    ifstream initialBalanceFile;        // This block opens a file stream to retrieve the current balance.  The user does not see this, but the program needs this value.
    initialBalanceFile.open("C:\\Users\\Goat Prime.Goat\\Desktop\\C++\\Fall 2015\\Assignment 2\\Bank ATM\\account balance.txt");      // [Your balance file]
    initialBalanceFile >> initialBalance;   // Gets the bank balance
    initialBalanceFile.close();     // Close the file stream as we no longer need to read information from it.
    newBalance = initialBalance + depositAmt;   // This calculates what the new balance will be after deposit.

    ofstream depositFile;       // This block opens a file stream to write the new balance to the correct file.
    depositFile.open("C:\\Users\\Goat Prime.Goat\\Desktop\\C++\\Fall 2015\\Assignment 2\\Bank ATM\\account balance.txt");     // [Your balance file]
    depositFile << newBalance << endl;      // Writes the updated balance to the account balance file.
    depositFile.close();        // Close the file stream as we no longer need to write information to it.

    cout << "Thank you for your deposit of $" << depositAmt << endl << endl;    // Informs the user of actions taken.
}

void withdraw()     // This is the withdraw function.  Performs all withdraw related actions.
{
    // Declaring local variables
    double priorBalance(0), withdraw(0), afterBalance(0);
    ifstream withdrawFile;      // Opening a file stream to read data.
    withdrawFile.open("C:\\Users\\Goat Prime.Goat\\Desktop\\C++\\Fall 2015\\Assignment 2\\Bank ATM\\account balance.txt");    // [Your balance file]

    if (withdrawFile)   // This condition ensures the file exists
        {
            withdrawFile >> priorBalance;   // This reads the file's balance and stores it into a variable.
            withdrawFile.close();   // Closes the file stream as the program is done reading from the file.

            do      // Creates a loop to validate user input.  This will not allow the user to move on until the enter a value of zero or greater.
            {
                cout << "Please enter the value you wish to withdraw. $";   // Prompts user for the withdraw amount.
                cin >> withdraw;
                cout << endl << endl;

                if (withdraw < 0)       // Input validation.  This occurs if the user failed to enter a value of zero or greater.
                {
                    cout << "Please enter a non-negative value." << endl;       // Informs the user of how to correct their input.
                    cout << "[Enter 0, if you no longer wish to withdraw]" << endl << endl;
                }
            }while (withdraw < 0);      // This is the condition for the do/while.  (i.e. The input validation)

            if (withdraw > priorBalance)    // This is a different form of input validation.  This checks to see if the user has enough funds in the account to withdraw their requested amount.
            {
                cout << "I'm sorry, you do not have enough funds to process" << endl;   // Informs the user that they have insufficient funds.
                cout << "this transaction.  Account Balance:  $" << priorBalance << endl << endl;
            }

            else    // This occurs if the user has sufficient funds in their account to withdraw.  It will proceed to remove the requested funds from the balance file.
            {
                afterBalance = priorBalance - withdraw;     // Calculates the new account balance.
                ofstream withdrawingFile;       // Opens a file stream to write to.
                withdrawingFile.open("C:\\Users\\Goat Prime.Goat\\Desktop\\C++\\Fall 2015\\Assignment 2\\Bank ATM\\account balance.txt");     // [Your balance file]

                withdrawingFile << afterBalance << endl;    // Writing to the account balance file.
                withdrawingFile.close();    // Closing the file stream.  We are done writing to the file.

                cout << "Funds in the amount of $" << withdraw << " have been withdrawn" << endl;       // This summarizes actions performed to the user.
                cout << "from your account.  Please take your cash" << endl;
                cout << "and don't forget your debit card." << endl << endl;
            }
        }

        else    // This only executes if the original condition of checking for the file fails.
        {
            cout << "No account data could be found.  Please contact a manager" << endl;    // Informs the user that a file with their account balance does not exist.
            cout << "or create a new account." << endl;
        }
}

void displayBalance()       // This is the displayBalance function.  This function handles all actions relating to the user checking their bank account balance.
{
    // Declare the local variable.
    double currentBalance(0);
    ifstream dispBalanceFile;       // Opens a file stream for reading.
    dispBalanceFile.open("C:\\Users\\Goat Prime.Goat\\Desktop\\C++\\Fall 2015\\Assignment 2\\Bank ATM\\account balance.txt");     // [Your balance file]

    if (dispBalanceFile)    // This checks to ensure the file exists.
        {
            dispBalanceFile >> currentBalance;  // This reads the file's current balance.
            dispBalanceFile.close();       // This closes the file stream.  We have nothing left to read from the file.

            cout << "Your current account balance is $" << currentBalance << endl;      // This displays the current account balance for the user.
            cout << "Thank you for your business!" << endl << endl;
        }

    else    // This only occurs if the initial check of the file fails.  Informs the user the file could not be found.
    {
        cout << "No account data could be found.  Please contact a manager" << endl;
        cout << "or create a new account." << endl;
    }
}       // That's all folks!
