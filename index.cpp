#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//|.M.|.E.| 

class employee {
 public:
    string name;int salary;int bonus;int insurance;//you can use a constructor
    /*employee(sting x,int y, int z, int v){
        name = x;
        salary = y;
        bonus = z;
        insurance = v;
    } */
};




int main(){
//declaring global varibales
//you can add the total capital of the corp if needed.
int inv;//you will declare the inventory of the project.

/*<- if you want to use the constructor then remove the |comment|symbols|then edit||
employee johnDoe(lorem, 69420, 420, 69);
employee johnny(same, way, like, first);
->*/
//you can make a loop for the employee objects with a looped input for lots of people or use sql to make a stand-by data-base.
employee johnDoe;
employee johnny;
johnDoe.name="lorem";//define the name if necessary. 
johnDoe.salary= 69420;//any number of a salary.
johnDoe.bonus = 420;//if there is a bonus
johnDoe.insurance =69;

johnny.name= "ipsium";//the name
johnny.salary = 69420;//the salary
johnny.bonus = 420;//if there is a bonus
johnny.insurance =69;//if there's insurance


//the formula to make the magic begin
//the reason why there is no loop, is because there are 2 employees only 
int total1= johnDoe.salary + johnDoe.bonus + johnDoe.insurance;//the total of the first employee.
int total2= johnny.salary+johnny.bonus + johnny.insurance;// the total of the second one.
//the total
int Total= total1 + total2;
//the net of what just happened.
int net_worth = inv - Total;
//updating the inventory.
inv = net_worth;
    //the end
    //in case of the program requires to stop.
    return 0;
}