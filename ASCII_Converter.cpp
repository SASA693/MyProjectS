# include <iostream>
using namespace std ;
int main ()
{
                    // Welcome part //

    cout << "Welcome to ASCII converter\n" ;
    cout << "======================================\n" ;
    //------------------------------------------------------//

                    // Choice part //
    cout << "For integer to character insert ==> 1\n" ;
    cout << "For character to integer insert ==> 2\n" ;
    int choice ;
    cout << "My choice is : " ;
    cin >> choice ;
    cout << "======================================\n" ;
    //------------------------------------------------------//
                          
                    // ASCII part //
    if (choice == 1)
    {
        cout << "Insert your integer : " ;
        int integer ;
        cin >> integer ;
        cout << "Your character is ==> " << char (integer) << endl ;
    }
    else if (choice == 2)
    {
        cout << "Insert your character : " ;
        char character ;
        cin >> character ;
        cout << "Your integer is ==> " << int (character) << endl ;
    }
}