# include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int a , q , p , b , u;
    string d[5][7] , t ;
    d[0][0] = "1- " , d[1][0] = "2- " , d[2][0] = "3- " , d[3][0] = "4- " , d[4][0] = "5- " ;
    for (int i=0 ; i<5 ; i++)
    {
        for (int j=0 ; j<7 ; j++)
        {
            if (j == 0)
            {
                continue;
            }
            else 
            {
                cin >> d[i][j] ;
            }
        }
    }
    cout << "==========================================" << endl << endl ;


    while (true)
    {
        cout << "--- Property Managment System ---\n" ;
        cout << "1. Display All Apartments\n" ;
        cout << "2. Quarries\n" ;
        cout << "3. Pay Rent / Keep Balance\n" ;
        cout << "4. Update Account\n" ;
        cout << "5. Exit\n" ;

        cout << "Enter your choice : " ;
        int choice ;
        cin  >> choice ;
        cout << endl ;

        if (choice == 1)
        {
            for (int i=0 ; i<5 ; i++)
            {
                for (int j=0 ; j<7 ; j++)
            {
                cout << d[i][j] << ' ' ;
            }
            cout << endl ;
            }
            cout << "==========================================" << endl << endl ;
        }
        
        else if (choice == 2)
        {
            cout << "My Apartment is : " ;
            cin >> a ;
            a-- ;
            cout << "This is The List Of Quarries\n" ;
            cout << "1. Name\n" ;
            cout << "2. Phone\n" ;
            cout << "3. ID\n" ;
            cout << "4. Salary\n" ;
            cout << "5. Balance\n" ;
            cout << "6. Total Money\n" ;
            
            cout << "My request is : " ;
            cin  >> q ;
            cout << "Your request is ==> "  << d[a][q] << endl ;
            cout << "==========================================" << endl << endl ;
        }
        
        else if (choice == 3)
        {
            cout << "My Apartment is : " ;
            cin >> a ;
            a-- ;
            cout << "This is The List Of Payment\n" ;
            cout << "1. Pay Rent\n" ;
            cout << "2. Keep balance\n" ;
            
            cout << "My Payment is : " ;
            cin  >> p ;
            if (p == 1)
            {
                cout << "Your Rent is : " << d[a][4] << endl ;
                cout << "==========================================" << endl << endl ;
            }
            else 
            {
                cout << "How much you want keep ?\n" ;
                cout << "My deposit is : " ;
                cin  >> b ; 
                d[a][5] = to_string(b + stoi(d[a][5])) ;
                d[a][6] = to_string(stoi(d[a][5]) - stoi(d[a][4])) ;
                for (int i=0 ; i<7 ; i++)
                {
                    cout << d[a][i] << ' ' ; 
                }
                cout << endl ;
                cout << "==========================================" << endl << endl ;
            }
        }
        
        else if (choice == 4)
        {
            cout << "My Apartment is : " ;
            cin >> a ;
            a-- ; 
            cout << "This is The List Of updates\n" ;
            cout << "1. Name\n" ;
            cout << "2. Phone\n" ;
            cout << "3. ID\n" ;
            cout << "4. Salary\n" ;
            cout << "5. Balance\n" ;
            cout << "6. Total Money\n" ;
            cout << "My update is on : " ;
            cin  >> u ;
            cout << "My update is : " ;
            cin  >> t ;
            d[a][u] = t ;
            for (int i=0 ; i<7 ; i++)
            {
                cout << d[a][i] << ' ' ; 
            }
            cout << endl ;
            cout << "==========================================" << endl << endl ; 
        }

        else 
        {
            break;
        }
    }
} 