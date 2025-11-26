#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	char repeat;
	do {

		int roomType, numberOfNights, pricePerNight;
		double total, discountRate = 0.00, discountAmount, finalPrice = 0.00;
		char promoCode;

		cout << "\n=========================================\n";
		cout << "\t\n   FTMK GRAND HOTEL BOOKING SYSTEM   \n";
		cout << "\n=========================================\n";

		cout << "\n1. Standard Room - RM 150.00 per night\n";
		cout << "\n2. Deluxe Room - RM 200.00 per night\n";
		cout << "\n3. Suite Room - RM 300.00 per night\n";

		cout << "\n----------------------------------------\n";
		cout << "\nEnter room type (1-3) :";
		cin >> roomType;

		cout << "\nEnter number of nights :";
		cin >> numberOfNights;

		// Display selected room type
		if (roomType == 1) {
			pricePerNight = 150.00;
			cout << "\nYou selected Standard Room.\n";
		}
		else if (roomType == 2) {
			pricePerNight = 200.00;
			cout << "\nYou Selected Deluxe Room.\n";
		}
		else if (roomType == 3) {
			pricePerNight = 300.00;
			cout << "\nYou Selected Suite Room.\n";
		}
		else {
			cout << "\nInvalid Room Type. Please Enter A Valid Room Type.";
			return 0;
		}

		total = pricePerNight * numberOfNights;

		if (numberOfNights <= 2) {
		}

		else if (numberOfNights >= 3 && numberOfNights <= 5) {
			discountRate = 0.05;
		}
		else if (numberOfNights > 5) {
			discountRate = 0.1;
		}

		discountAmount = total * discountRate;
		finalPrice = total - discountAmount;

		cout << "\nDo you have promo code? (Y/N) :";
		cin >> promoCode;

		if (promoCode == 'Y' || promoCode == 'y') {
			finalPrice = (finalPrice * 0.9);
			cout << "\nPrice after applying promo code discount: RM" << fixed << setprecision(2) << finalPrice << endl;
		}


		cout << fixed << setprecision(2);
		cout << "\n------------------ BOOKING SUMMARY ------------------\n";
		cout << "Price per night  : RM " << pricePerNight << endl;
		cout << "Nights Stayed    : " << numberOfNights << endl;
		cout << "Subtotal         : RM " << pricePerNight * numberOfNights << endl;
		cout << "Discount         : RM" << discountAmount << endl;

		cout << "\n----------------------------------------------------\n";
		cout << "Final Total: RM" << finalPrice << endl;

		cout << "----------------------------------------------------\n";
		if (finalPrice > 1200) {
			cout << "VIP CUSTOMER: You are eligible for free airport transfer.\n";
		}
		else if (finalPrice < 300) {
			cout << "VIP CUSTOMER: Enjoy your vacation.\n";
		}
		else
			cout << "Thankyou for booking with FTMK Grand Hotel.\n";
		cout << "====================================================\n";

		cout << "\nDo you want to make another booking? (Y/N)" << endl;
		cin >> repeat;

	} while (repeat == 'Y' || repeat == 'y');

	return 0;
}
