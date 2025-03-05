//Lab7
//Menu problem
// #include <iostream>
// #include <bits/ranges_algobase.h>
// using namespace std;
// double computetotal(int const quantities[], double const prices[]) {
//     double total=0;
//     for (int i=0; i<3; i++) {
//         total+=quantities[i]*prices[i];
//     }
//     return total;
// }
// int main () {
//     string menu[]={"Pizza", "Burger","Salad"};
//     double prices[]={10, 8,5};
//     int quantities[3]={0,0,0};
//     int choice, quantity;
//     do {
//         cout << "\nMenu:\n1. Pizza: $10\n2. Burger: $8\n3. Salad: $5\n4. Exit\n";
//         cout << "Select an item (1-4): ";
//         cin >> choice;
//         if (choice >= 1 && choice <= 3) {
//             cout << "Enter quantity for " << menu[choice - 1] << ": ";
//             cin >> quantity;
//             quantities[choice - 1] += quantity;
//         } else if (choice != 4) {
//             cout << "Invalid choice. Please select a valid option." << endl;
//         }
//
//     } while (choice != 4);
//
//     double total = computetotal(quantities, prices);
//     cout << "\nTotal bill: $" << total << "\nThank you for your order!" << endl;
//
//     return 0;
// }

//Problem2
//Car parking
// #include <iostream>
// using namespace std;
// int calculateParkingFee(int hours) {
//     if (hours <= 2) {
//         return 0;
//     } else if (hours >= 3 && hours <= 5) {
//         return (hours - 2) * 2;
//     } else {
//         return (3 * 2) + ((hours - 5) * 5);
//     }
// }
// int main() {
//     while (true) {
//         int hoursParked;
//         cout << "Enter the number of hours parked (or -1 to exit): ";
//         cin >> hoursParked;
//         if (hoursParked == -1) {
//             cout << "Exiting the program. Goodbye!" << endl;
//             break;
//         } else if (hoursParked < 0) {
//             cout << "Invalid input. Hours parked cannot be negative." << endl;
//             continue;
//         }
//         int fee = calculateParkingFee(hoursParked);
//         cout << "The parking fee for " << hoursParked << " hours is: $" << fee << endl;
//     }
//     return 0;
// }

//Problem3
// #include <iostream>
// using namespace std;
// void deposit(double balance, double amount){
//     if (amount>0) {
//         balance+=amount;
//         cout<<"Your deposit has been successfully added!";
//     }else {
//         cout<<"Invalid deposit amount";
//     }
// }
// void withdraw(double balance, double amount) {
//     if (amount<balance) {
//         balance-=amount;
//         cout<<"Successfully withdrew!";
//     }else if (amount>balance) {
//         cout<<"Insufficient funds!";
//     }else {
//         cout<<"Error";
//     }
// }
// void balanceCheck(double balance) {
//     cout<<"Your balance is "<<balance;
// }
// int main () {
//     double balance=500;
//     int choice;
//     do {
//         cout<<"\n1.Deposit";
//         cout<<"\n2.Withdraw money";
//         cout<<"\n3.Check my balance";
//         cout<<"\n4.Exit the menu";
//         cout<<"\nEnter your choice";
//         cin>>choice;
//         switch (choice) {
//             case 1: {
//                 double amount;
//                 cout<<"Enter the amount you want to deposit:";
//                 cin>>amount;
//                 deposit(balance, amount);
//                 break;
//             }
//             case 2: {
//                 double amount;
//                 cout<<"Enter the amount you want to withdraw from your balance: ";
//                 cin>>amount;
//                 withdraw(balance,amount);
//                 break;
//             }
//             case 3:
//                 balanceCheck(balance);
//             break;
//             case 4:
//                 cout<<"You are exiting the program\n";
//             break;
//             default:
//                 cout<<"Ooops, Something went wrong.\n";
//         }
//         }while (choice!=4);
//     return 0;
// }

//Problem4
// #include <iostream>
// using namespace std;
//
// // Function to calculate total price
// double calculateTotalPrice(int movieChoice, int tickets) {
//     double price;
//     switch (movieChoice) {
//         case 1:
//             price = 8.0;
//         break;
//         case 2:
//             price = 10.0;
//         break;
//         case 3:
//             price = 12.0;
//         break;
//         default:
//             return -1; // Invalid choice
//     }
//     return price * tickets;
// }
//
// int main() {
//     int choice, tickets;
//     double totalCost;
//
//     do {
//         cout << "\nMovie Ticket Booking System" << endl;
//         cout << "1. Movie A - $8" << endl;
//         cout << "2. Movie B - $10" << endl;
//         cout << "3. Movie C - $12" << endl;
//         cout << "4. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;
//
//         if (choice == 4) {
//             cout << "Exiting the program. Goodbye!" << endl;
//             break;
//         }
//
//         cout << "Enter the number of tickets: ";
//         cin >> tickets;
//
//         if (tickets <= 0) {
//             cout << "Invalid number of tickets. Please try again." << endl;
//             continue;
//         }
//
//         totalCost = calculateTotalPrice(choice, tickets);
//
//         if (totalCost == -1) {
//             cout << "Invalid movie selection. Please try again." << endl;
//             continue;
//         }
//
//         cout << "Total cost for " << tickets << " ticket(s) is: $" << totalCost << endl;
//     } while (true);
//
//     return 0;
// }

//Problem5
// #include <iostream>
// using namespace std;
//
// // Function to calculate total fare
// double calculateTotalFare(int trainChoice, int tickets) {
//     double price;
//     switch (trainChoice) {
//         case 1:
//             price = 15.0;
//         break;
//         case 2:
//             price = 20.0;
//         break;
//         case 3:
//             price = 25.0;
//         break;
//         default:
//             return -1; // Invalid choice
//     }
//     return price * tickets;
// }
//
// int main() {
//     string startCity, destination;
//     int choice, tickets;
//     double totalFare;
//
//     do {
//         cout << "\nTrain Ticket Reservation System" << endl;
//         cout << "Enter Starting City: ";
//         cin >> startCity;
//         cout << "Enter Destination: ";
//         cin >> destination;
//
//         cout << "\nAvailable Trains:" << endl;
//         cout << "1. Train X - $15" << endl;
//         cout << "2. Train Y - $20" << endl;
//         cout << "3. Train Z - $25" << endl;
//         cout << "4. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;
//
//         if (choice == 4) {
//             cout << "Exiting the program. Goodbye!" << endl;
//             break;
//         }
//
//         cout << "Enter the number of tickets: ";
//         cin >> tickets;
//
//         if (tickets <= 0) {
//             cout << "Invalid number of tickets. Please try again." << endl;
//             continue;
//         }
//
//         totalFare = calculateTotalFare(choice, tickets);
//
//         if (totalFare == -1) {
//             cout << "Invalid train selection. Please try again." << endl;
//             continue;
//         }
//
//         cout << "Total fare for " << tickets << " ticket(s) from " << startCity << " to " << destination << " is: $" << totalFare << endl;
//     } while (true);
//
//     return 0;
// }


//Problem6
// #include <iostream>
// #include <cctype>
// using namespace std;
//
// // Function to check password strength
// bool checkPasswordStrength(const string &password) {
//     bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
//     string specialChars = "!@#$%^&*()-_=+[]{}|;:'\",.<>?/`~";
//
//     if (password.length() < 8) {
//         cout << "Weak Password: Must be at least 8 characters long." << endl;
//         return false;
//     }
//
//     for (char ch : password) {
//         if (isupper(ch)) hasUpper = true;
//         else if (islower(ch)) hasLower = true;
//         else if (isdigit(ch)) hasDigit = true;
//         else if (specialChars.find(ch) != string::npos) hasSpecial = true;
//     }
//
//     if (!hasUpper) cout << "Weak Password: Must contain at least one uppercase letter." << endl;
//     if (!hasLower) cout << "Weak Password: Must contain at least one lowercase letter." << endl;
//     if (!hasDigit) cout << "Weak Password: Must contain at least one digit." << endl;
//     if (!hasSpecial) cout << "Weak Password: Must contain at least one special character." << endl;
//
//     return hasUpper && hasLower && hasDigit && hasSpecial;
// }
//
// int main() {
//     string password;
//     cout << "Enter a password: ";
//     cin >> password;
//
//     if (checkPasswordStrength(password)) {
//         cout << "Strong Password!" << endl;
//     } else {
//         cout << "Please try again with a stronger password." << endl;
//     }
//
//     return 0;
// }


//Problem7
// #include <iostream>
// using namespace std;
//
// // Function to check if a year is a leap year
// bool isLeapYear(int year) {
//     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
// }
//
// // Function to validate the date
// bool isValidDate(int day, int month, int year) {
//     if (month < 1 || month > 12) return false;
//     int daysInMonth;
//     switch (month) {
//         case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//             daysInMonth = 31;
//         break;
//         case 4: case 6: case 9: case 11:
//             daysInMonth = 30;
//         break;
//         case 2:
//             daysInMonth = isLeapYear(year) ? 29 : 28;
//         break;
//         default:
//             return false;
//     }
//     return (day >= 1 && day <= daysInMonth);
// }
//
// // Function to calculate the next date
// void getNextDate(int &day, int &month, int &year) {
//     int daysInMonth;
//     switch (month) {
//         case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//             daysInMonth = 31;
//         break;
//         case 4: case 6: case 9: case 11:
//             daysInMonth = 30;
//         break;
//         case 2:
//             daysInMonth = isLeapYear(year) ? 29 : 28;
//         break;
//         default:
//             return;
//     }
//
//     if (day < daysInMonth) {
//         day++;
//     } else {
//         day = 1;
//         if (month == 12) {
//             month = 1;
//             year++;
//         } else {
//             month++;
//         }
//     }
// }
//
// int main() {
//     int day, month, year;
//
//     cout << "Enter a date (DD MM YYYY): ";
//     cin >> day >> month >> year;
//
//     if (!isValidDate(day, month, year)) {
//         cout << "Invalid date entered." << endl;
//         return 1;
//     }
//
//     getNextDate(day, month, year);
//
//     cout << "The next date is: " << day << "/" << month << "/" << year << endl;
//
//     return 0;
// }
//

