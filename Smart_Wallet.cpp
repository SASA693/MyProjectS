# include <bits/stdc++.h>
using namespace std ;

bool encreption_password (int op , vector <string> h)
{
    vector <int> hash = {66 , 67 , 77 , 69 , 7} ;
    int p , t = 3 ;
    int hn = hash[h.size() % hash.size()] ;
    op = (op + hn) * 7 ;
    cout << "To complete your process you should insert the password" << endl ;
    while (t--)
    {
        cout << "you have " << t+1 << " atempets, My password is : " ;
        cin  >>  p ;
        p = (p + hn) * 7 ;
        if (p == op) 
        {
            return true ;
            break;
        }
        else 
        {
            continue;
        }
    }
    return false ;
}


void run_wallet ()
{
    double v = 1000 ;
    double a = 3.5  ;
    int    u = 500  ; 
    vector <string> h ;
    vector <vector <string>> ht ;

    int op ;
    cout << "To use our wallet you should creat a password" << endl ;
    cout << "The password must be 6-degits and don't start with '0'" << endl ;
    cout << "My password is : " ;
    cin  >> op ;

    while (true)
    {
        cout << "---> This is list of requests <---\n" ;
        cout << "1. Show Balance\n" ;
        cout << "2. show Amount\n" ;
        cout << "3. show Units\n" ;
        cout << "4. Deposit\n" ;
        cout << "5. Withdraw\n" ;
        cout << "6. Transfer money\n" ;
        cout << "7. Recharge card\n" ;
        cout << "8. Process History\n" ;
        cout << "9. Transaction History\n" ;
        cout << "10. Exit\n" ;
        cout << "My request is : " ;
        int q ;
        cin  >> q ;
        cout << "========================================" << endl << endl ;
        
        if (q == 1)
        {
            cout << "Your Balance is : " << v << endl ;
            cout << "========================================" << endl << endl ;
        }
        
        else if (q == 2)
        {
            cout << "Your Amount is : " << a << endl ;
            cout << "========================================" << endl << endl ;            
        }
        
        else if (q == 3)
        {
            cout << "Your Units is : " << u << endl ;
            cout << "========================================" << endl << endl ;            
        }
        
        else if (q == 4)
        {
            double d ;
            cout << "My Deposit is : " ;
            cin  >> d ;
            if (encreption_password(op , h))
            {
                if (d + v <= 250000)
                {
                    v += d ;
                    h.push_back("DONE    +" + to_string(d) + " EGP  for Deposite") ;
                    cout << "Your value is : " << v << endl ; 
                    cout << "your deposit is done" << endl ;
                    cout << "========================================" << endl << endl ;            
                }
                else 
                {
                    h.push_back("DENIDE  +" + to_string(d) + " EGP  for Deposit") ;
                    cout << "your depsite is denide because it over the limit" << endl ;
                    cout << "Please try againe" << endl ;
                    cout << "========================================" << endl << endl ;            
                }
            }
            else 
            {
                cout << "It's to much wrong attempts, good luck hacker" << endl ;
                break;
            }
        }
        
        else if (q == 5)
        {
            double w ;
            cout << "My Withdraw is : " ;
            cin  >> w ;
            if (encreption_password(op , h))
            {
                if (w < v)
                {
                    v -= w ;
                    h.push_back("DONE    -" + to_string(w) + " EGP  for withdraw") ;
                    cout << "Your value is : " << v << endl ; 
                    cout << "your withdraw is done" << endl ;
                    cout << "========================================" << endl << endl ;            
                }
                else
                {
                    h.push_back("DENIDE  -" + to_string(w) + " EGP  for withdraw") ;
                    cout << "your withdraw is denide because it over the limit" << endl ;
                    cout << "Please try againe" << endl ;
                    cout << "========================================" << endl << endl ;            
                }
            }
            else 
            {
                cout << "It's to much wrong attempts, good luck hacker" << endl ;
                break;
            }
        }
        
        else if (q == 6)
        {
            double t ; 
            string ph ;
            cout << "Insert the value of transfer : " ;
            cin  >> t ;
            cout << "Insert the phone : " ;
            cin  >> ph ;
            if (encreption_password(op , h))
            {
                if (t < v)
                {
                    ht.push_back({"DONE  " , ph , to_string(t)}) ;
                    v -= t ;
                    cout << "The transaction is done" << endl ;
                    cout << "========================================" << endl << endl ;            
                }
                else 
                {
                    ht.push_back({"DENIDE" , ph , to_string(t)}) ;
                    cout << "Please try againe" << endl ;
                    cout << "========================================" << endl << endl ;            
                }
            }
            else 
            {
                cout << "It's to much wrong attempts, good luck hacker" << endl ;
                break;
            }
        }
        
        else if (q == 7)
        {
            int c ;
            double z ;
            cout << "1. To charge your amount" << endl ;
            cout << "2. To charge a card" << endl ;
            cout << "My choice is : " ;
            cin  >> c ;
            if(encreption_password(op , h))
            {
                if (c == 1)
                {
                    cout << "Insert your value : " ;
                    cin  >> z ; 
                    v -= z ;
                    a += (z*7/10) ;
                    cout << "your amount is : " << a << endl ;
                    cout << "your charge is done" << endl ;
                    cout << "========================================" << endl << endl ;            
                }
                else 
                {
                    int cc ;
                    cout << "1. 300   unit for 15   L.E" << endl ;
                    cout << "2. 425   unit for 19   L.E" << endl ;
                    cout << "3. 550   unit for 22.5 L.E" << endl ;
                    cout << "4. 750   unit for 30   L.E" << endl ;
                    cout << "5. 1100  unit for 44   L.E" << endl ;
                    cout << "6. 1700  unit for 58   L.E" << endl ;
                    cout << "My choice is : " ;
                    cin  >> cc ;
                    switch (cc)
                    {
                        case 1:
                        v -= 15 ;
                        u += 300 ;
                        cout << "charge card is done" << endl ;
                        cout << "========================================" << endl << endl ;            
                        break;
                        
                        case 2:
                        v -= 19 ;
                        u += 425 ;
                        cout << "charge card is done" << endl ;
                        cout << "========================================" << endl << endl ;            
                        break;
                        
                        case 3:
                        v -= 22.5 ;
                        u += 550 ;
                        cout << "charge card is done" << endl ;
                        cout << "========================================" << endl << endl ;            
                        break;
                        
                        case 4:
                        v -= 30 ;
                        u += 750 ;
                        cout << "charge card is done" << endl ;
                        cout << "========================================" << endl << endl ;            
                        break;
                        
                        case 5:
                        v -= 44 ;
                        u += 1100 ;
                        cout << "charge card is done" << endl ;
                        cout << "========================================" << endl << endl ;            
                        break;
                        
                        case 6:
                        v -= 58 ;
                        u += 1700 ;
                        cout << "charge card is done" << endl ;
                        cout << "========================================" << endl << endl ;            
                        break;
                        
                        default:
                        break;
                    }

                }
            }
            else 
            {
                cout << "It's to much wrong attempts, good luck hacker" << endl ;
                break;
            }
        }

        else if (q == 8)
        {
            for (int i=h.size()-1 ; i>-1 ; i--)
            {
                cout << i+1 << ". " << h[i] << endl ; 
            }
            cout << "========================================" << endl << endl ;            
        }
        
        else if (q == 9)
        {
            for (int i=ht.size()-1 ; i>-1 ; i--)
            {
                cout << i+1 << ". "    << "Statue : " << ht[i][0]
                << " | Phone : "  << ht[i][1]
                << " | Amount : " << ht[i][2] << " EGP" << endl ;
            }
            cout << "==================================================================" << endl << endl ;            
        }
        
        else if (q == 10)
        {
            cout << "Thank you for using our smart wallet. Goodbye!" << endl ;
            break;
        }
        
        else 
        {
            cout << "Invalid choice! please try again" << endl ;
            break;
        }
    } 

}

int main ()
{


    run_wallet() ;

} 