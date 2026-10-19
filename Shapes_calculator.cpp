# include <iostream>
using namespace std ;
int main ()
{
    cout << "     Welcome to Shapes_Calculator\n" ;
    cout << "==========================================\n" ; 
    //----------------------------------------------------------------------//

    int choice_shape ;
    cout << "If shape is rectangle insert ==> 1\n" ;
    cout << "If shape is square insert ==> 2\n" ;
    cout << "If shape is circule insert ==> 3\n" ;
    cout << " \n" ;
    cout << "my choice is : " ;
    cin >> choice_shape ;
    cout << "==========================================\n" ;
    //----------------------------------------------------------------------//    

    int choice_operator ;
    cout << "If you want to calculate Parameter insert ==> 1\n" ;
    cout << "If you want to calculate Area insert ==> 2\n" ;
    cout << " \n" ;
    cout << "My choice is : " ;
    cin >> choice_operator ;
    if (choice_shape == 1)
    {
        float l , w ;
        if (choice_operator == 1)
        {
            cout << " \n" ;
            cout << "Insert the length : " ;
            cin >> l ;
            cout << "Insert the width : " ;
            cin >> w ;
            cout << "The value of parameter is : " << (l + w)*2 ;
        }
        else if (choice_operator == 2)
        {
            cout << " \n" ;
            cout << "Insert the length : " ;
            cin >> l ;
            cout << "Insert the width : " ;
            cin >> w ;
            cout << "The value of Area is : " << (l * w) ;
        }
    }
    else if (choice_shape == 2)
    {
        float l ;
        if (choice_operator == 1)
        {
            cout << " \n" ;
            cout << "Insert the length : " ;
            cin >> l ;
            cout << "The value of parameter is : " << l * 4 ;
        }
        else if (choice_operator == 2)
        {
            cout << " \n" ;
            cout << "Insert the length : " ;
            cin >> l ;
            cout << "The value of Area is : " << l * l ;
        }
    }
    else if (choice_shape == 3)
    {
        float r ;
        float pi = (22.0/7) ;
        if (choice_operator == 1)
        {
            cout << " \n" ;
            cout << "Insert the radius : " ;
            cin >> r ;
            cout << "The value of parameter is : " << 2 * pi * r ;
        }
        else if (choice_operator == 2)
        {
            cout << " \n" ;
            cout << "Insert the radius : " ;
            cin >> r ;
            cout << "The value of Area is : " << r * pi * r ;
        }
    }
}