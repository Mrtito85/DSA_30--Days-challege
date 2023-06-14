#include <iostream>
using namespace std;


class Hero{
    //Properties
    public:
    int health;
    int level;
    void setHealth(int h){
        this->health=h;
    }
    void setLevel(int l){
        this->level=l;
    }
    int getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }
    


};
int main(){

    Hero akbar;
    akbar.setHealth(10);
    cout<<akbar.getHealth();
    
}