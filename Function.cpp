    #include<iostream>
    using namespace std;

    void salaryCalculation(string name, int salary,bool HundredPersentPresent){
        int houseRent;
        int Transpost;
        houseRent = salary * .5;
        Transpost = salary * .25;
        if(HundredPersentPresent){
            salary = salary + houseRent + Transpost + 500;
            cout<<name<<" "<<salary<<"\n";
        }
        if(!HundredPersentPresent){
            salary = salary + houseRent + Transpost;
            cout<<name<<" "<<salary<<"\n";
        }
    }
    int main(){
        salaryCalculation("Rahim",5000,1);
        salaryCalculation("Karim",3000,0);
    }
