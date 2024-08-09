#include <iostream>
using namespace std;

int main() {
	
	//  formula  pkr = USD * conversionRate;
	
    double usd;
    double conversionRate = 278.65; // Example conversion rate: 1 USD = 278.65 PKR

    cout << "Enter amount in USD: ";
    cin >> usd;

    double pkr = usd * conversionRate;

    cout << usd << " USD is equal to " << pkr << " PKR." << endl;

   
   
}