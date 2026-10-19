# include <bits/stdc++.h>
using namespace std ;
int main ()
{
    while (true)
    {
        cout << "----- Welcom to Numbering_Converter_System -----\n" ;
        int convert_system ;
        cout << "For convert Decimal to Binary insert       ==> 1\n" ;
        cout << "For convert Binary  to Decimal insert      ==> 2\n" ;
        cout << "For convert Decimal to Octal insert        ==> 3\n" ;
        cout << "For convert Octal   to Decimal insert      ==> 4\n" ;
        cout << "For convert Decimal to Hexadecimal insert  ==> 5\n" ;
        cout << "For convert Hexadecimal to Decimal insert  ==> 6\n" ;
        cout << "For Exit insert ==> 7\n" ;
        cout << "my selection is : " ;
        cin >> convert_system ;
        cout << "==================================================\n" ;
        //=============================================//
        
        if (convert_system == 1)
        {
            int number ;
            cout << "Enter your number : " ;
            cin >> number ;
            vector <int> a {} ;
            int d , c = 0 ;
            while (number)
            {
                d = number / 2 ;
                a.push_back(number % 2) ;
                c++ ;
                number = d ;
            }
            cout << "Your number is : " ;
            for (int i=0 ; i<a.size() ; i++)
            {
                cout << a[i] ;
            }
            cout << endl ;
            cout << "==================================================\n" ;
        }
        
        else if (convert_system == 2)
        {
            int n , number = 0 ;
            string a ;
            cin >> a ;
            for (int i=0 ; i<n ; i++)
            {
                cin  >> a[i] ;
                a[i] *= pow(2 , i) ;
            }
            for (int i=0 ; i<n ; i++)
            {
                number += a[i] ;
            }
            cout << "your number is : " << number << endl ;
            cout << "==================================================\n" ;
        }
        
        else if (convert_system == 3)
        {
            int number ;
            cout << "Enter your number : " ;
            cin >> number ;
            vector <int> a {} ;
            int d , c = 0 ;
            while (number)
            {
                d = number / 8 ;
                a.push_back(number % 8) ;
                c++ ;
                number = d ;
            }
            cout << "Your number is : " ;
            for (int i=0 ; i<a.size() ; i++)
            {
                cout << a[i] ;
            }
            cout << endl ;
            cout << "==================================================\n" ;
        }
        
        else if (convert_system == 4)
        {
            int n , number = 0 ;
            string a ;
            cin >> a ;
            for (int i=0 ; i<n ; i++)
            {
                cin  >> a[i] ;
                a[i] *= pow(8 , i) ;
            }
            for (int i=0 ; i<n ; i++)
            {
                number += a[i] ;
            }
            cout << "Your number is : " << number << endl ;
            cout << "==================================================\n" ;
        }
        
        else if (convert_system == 5)
        {
            int number ;
            cout << "Enter your number : " ;
            cin >> number ;
            vector <int> a {} ;
            int d , c = 0 ;
            while (number)
            {
                d = number / 16 ;
                a.push_back(number % 16) ;
                c++ ;
                number = d ;
            }
            cout << "Your number is : " ;
            for (int i=0 ; i<a.size() ; i++)
            {
                cout << a[i] ;
            }
            cout << endl ;
            cout << "==================================================\n" ;
        }
        
        else if (convert_system == 6)
        {
            int n , number = 0 ;
            string a ;
            cin >> a ;
            for (int i=0 ; i<n ; i++)
            {
                cin  >> a[i] ;
                a[i] *= pow(16 , i) ;
            }
            for (int i=0 ; i<n ; i++)
            {
                number += a[i] ;
            }
            cout << "your number is : " << number << endl ;
            cout << "==================================================\n" ;
        }

        else if (convert_system == 7)
        {
            cout << "-- Thank you to use our application --" << endl ;
            cout << "-- Good bye --" << endl ;
            break ;
        }
    }
}