/*Develop a polymorphic banking program using the Account
hierarchy created in Lecture “Inheritance”
Create a vector of Account pointers to SavingsAccount and
CheckingAccount objects.
For each Account in the vector, allow the user to specify an
amount of money to withdraw from the Account using
member function debit and an amount of money to deposit
into the Account using member function credit.
As you process each Account, determine its type.
If an Account is a SavingsAccount, calculate the amount of
interest owed to the Account using member function
calculateInterest, then add the interest to the account
balance using member function credit.
After processing an Account, print the updated account
balance obtained by invoking base class member function
getBalance.*/