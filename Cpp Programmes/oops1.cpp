#include<iostream>
using namespace std;

class Player{
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    /// Getters //// 
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getsscore(){
        return score;
    }
    bool isalive(){
        return alive;
    }
    /// Setters ///
    void sethealth(int health){
        //Player::health = health;
        this->health = health;
    }
    void setage(int age){
        this->age = age;
    }
    void setsscore(int score){
        this->score = score;
    }
    void setisalive(bool alive){
        this->alive = alive;
    }
};

int addscore(Player a, Player b){
    return a.getsscore() + b.getsscore();
}

//PLayer is user defined datatye... class

Player maxscore(Player a, Player b){
    if (a.getsscore() > b.getsscore()) return a;
    else return b;
}

int main(){
    Player rishi; //object creation, statically.
    Player akshita;

    rishi.setage(19);
    rishi.sethealth(97);
    rishi.setsscore(99);
    rishi.setisalive(true);

    akshita.setage(19);
    akshita.sethealth(97);
    akshita.setsscore(95);
    akshita.setisalive(true);

    cout<<addscore(rishi, akshita)<<endl;
    Player aman = maxscore(rishi, akshita);
    cout<<aman.getsscore()<<endl;


}