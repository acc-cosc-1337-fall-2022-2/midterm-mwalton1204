#include "question1.h"

bool test_config()
{
    return true;
}

vector<double> get_cookie_ingredients(int cookies)
{
    //initialize vector as ingredients
    vector<double> ingredients;

    //calculate qty of ingredients per cookie
    const double sugar = 1.5/48;
    const double butter = 1.0/48;
    const double flour = 2.75/48;

    //calculate qty of ingredients needed for desired qty of cookies
    double sugar_needed = cookies * sugar;
    double butter_needed = cookies * butter;
    double flour_needed = cookies * flour;

    //append ingredients to vector
    ingredients.push_back(sugar_needed);
    ingredients.push_back(butter_needed);
    ingredients.push_back(flour_needed);

    return ingredients;
}