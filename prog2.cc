/**
 *    @file: prog2.cc
 *  @author: Matthew Isham
 *    @date: 9/20/24      \
 *   @brief: Calculates which choice of wages is better
 *  
 */



#include <iomanip>
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    

    // declaring the constansts for our program
    const double rate = 5.50;
    const double com1 = 0.10;
    const double com2 = 0.15;

    double sales;
    
    
    
    cout << "Please enter your weekly sales in usd: $";
    cin >> sales;

    
    double plan1 = sales * com1 + rate * 40;

    
    double plan2 = sales * com2;

    cout << fixed << setprecision(2);
    cout << "\nWeekly sales: $" << sales << "\n";
    cout << "Plan 1 pays: $" << plan1 << "\n";
    cout << "Plan 2 pays: $" << plan2 << "\n";



    if(plan1 > plan2){
        cout << "Plan 1 is better\n";
    }
    else if(plan2 > plan1){
        cout << "Plan 1 is better\n";
    }
    else if(plan2 == plan1){
        cout << "Both plans pay the same\n";
    }


    return(0);
}