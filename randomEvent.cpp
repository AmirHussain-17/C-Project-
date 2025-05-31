#include<iostream>
#include<ctime>
using std::cout;
int main(){

    srand(time(0)); //Current time is used as seed to generate random numbers.
    int randNum = rand() % 5 + 1; //To generate a random number from 1 to 5.

    // Now let us assign different prizes corresponding to different nos. from 1 to 5 using Switch. 
    switch(randNum){
        case 1 : cout<<"You win a toffee";
        break;
        case 2 : cout<<"You win an ice cream";
        break;
        case 3 : cout<<"You win a cupcake";
        break;
        case 4 : cout<<"You win a Biryani";
        break;
        case 5 : cout<<"You win a Date";
        break;
    }
    return 0;
}