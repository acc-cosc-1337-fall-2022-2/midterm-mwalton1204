#include "question1.h"

int main()
{
    int cookies;
    auto repeat = 'y';

    while(repeat == 'y' || repeat == 'Y') {
        cout << "How many cookies would you like to make? ";
        cin >> cookies;

        vector<double> ingredients = get_cookie_ingredients(cookies);

        cout << "\nCups of Sugar " << ingredients[0] << "\n";
        cout << "Cups of Butter " << ingredients[1] << "\n";
        cout << "Cups of Flour " << ingredients[2] << "\n";

        cout << "Continue? (y/n):";
        cin >> repeat;
    }
    return 0;
}