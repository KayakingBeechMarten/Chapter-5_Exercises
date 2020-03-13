
#include <iostream>

#include <iomanip>

using std::cout;
using std::endl;
using std::setw;
using std::setprecision;
using std::ios;

int main() {

    cout << "\n Income Versus GPA \n";

    cout << "Name" << setw(10) << "Income" << setw(10) << "GPA\n";

    cout << "Jamie" << setw(11) << "12300.00" << setw(7) << "19\n";

    cout << "Linda" << setw(8) << "14500" << setw(10) << "22\n";

    cout << "Bob" << setw(9) << "9400" << setw(11) << "21\n";

    cout << "Marie" << setw(11) << "19129.00" << setw(7) << "51\n";

    cout << "** End Of Report **\n";


    cout << "\n Income Versus Age \n";

    cout << "Name";

    cout.width(10);

    cout << "Income";

    cout.width(10);

    cout << "Age\n";

    cout << "Jamie";

    cout.width(11);

    cout << "12300.00";

    cout.width(7);

    cout << "19\n";

    cout << "Linda";

    cout.width(8);

    cout << "14500";

    cout.width(10);

    cout << "22\n";

    cout << "Bob";

    cout.width(9);

    cout << "9400";

    cout.width(11);

    cout << "21\n";

    cout << "Frank";

    cout.width(11);

    cout << "19129.00";

    cout.width(7);

    cout << "51\n";

    cout << "** End Of Report 2 **\n";



    return 0;
}