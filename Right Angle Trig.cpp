#include <iostream>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

#define PI 3.14159265

int main()
{
	std::string a;
	std::string o;
	std::string h;
	std::string x;
	double ia{};
	double io{};
	double ih{};
	double ix{};
	double ix2{};
	double ixr{};
	double f{};
	double xr{};


	std::cout << "input side lengths or enter o a or h and x for the one you want to solve";
	std::cin >> o;
	std::cin >> a;
	std::cin >> h;
	std::cout << "input angle or x";
	std::cin >> x;

	if (o == "o") {
		if (a == "x" && x != "x") {
			stringstream ss;

			ss << h;

			ss >> ih;

			stringstream sss;

			sss << x;

			sss >> ix;

			ix2 = 180 - (ix + 90);

			ixr = (ix * PI / 180);

			std::cout << "a = " << ih * cos(ixr) << "other angle = " << ix2 << "\n";

		}

		if (h == "x" && x != "x") {
			stringstream ss;

			ss << a;

			ss >> ia;

			stringstream sss;

			sss << x;

			sss >> ix;

			ix2 = 180 - (ix + 90);

			ixr = (ix * PI / 180);

			std::cout << "h = " << ia / cos(ixr) << "other angle = " << ix2 << "\n";

		}


		if (x == "x" && h != "h" && h != "x" && a != "a" && a != "x") {
			stringstream sss;

			sss << x;

			sss >> ix;

			stringstream ssss;

			ssss << h;

			ssss >> ih;

			stringstream ss;

			ss << a;

			ss >> ia;

			f = (ia / ih);

			xr = (acos(f)) * (180 / PI);

			std::cout << "x = " << xr << "other angle = " << (180 - (xr + 90)) << "\n";

		}


	}

	if (a == "a") {
		if (o == "x" && x != "x") {
			stringstream ss;

			ss << h;

			ss >> ih;

			stringstream sss;

			sss << x;

			sss >> ix;

			ix2 = 180 - (ix + 90);

			ixr = (ix * PI / 180);

			std::cout << "o = " << ih * sin(ixr) << " other angle = " << ix2 << "\n";

		}

		if (h == "x" && x != "x") {
			stringstream ss;

			ss << o;

			ss >> io;

			stringstream sss;

			sss << x;

			sss >> ix;

			ix2 = 180 - (ix + 90);

			ixr = (ix * PI / 180);

			std::cout << "h = " << io / sin(ixr) << "other angle = " << ix2 << "\n";

		}


		if (x == "x" && h != "h" && h != "x" && o != "o" && o != "x") {
			stringstream sss;

			sss << x;

			sss >> ix;

			stringstream ssss;

			ssss << h;

			ssss >> ih;

			stringstream ss;

			ss << o;

			ss >> io;

			f = (io / ih);

			xr = (asin(f)) * (180 / PI);

			std::cout << "x = " << xr << " other angle = " << (180 - (xr + 90)) << "\n";

		}


	}

	if (h == "h") {
		if (o == "x" && x != "x") {
			stringstream ss;

			ss << a;

			ss >> ia;

			stringstream sss;

			sss << x;

			sss >> ix;

			ix2 = 180 - (ix + 90);

			ixr = (ix * PI / 180);

			std::cout << "o = " << ia * tan(ixr) << " other angle = " << ix2 << "\n";

		}

		if (a == "x" && x != "x") {
			stringstream ss;

			ss << o;

			ss >> io;

			stringstream sss;

			sss << x;

			sss >> ix;

			ix2 = 180 - (ix + 90);

			ixr = (ix * PI / 180);

			std::cout << "a = " << io / tan(ixr) << "other angle = " << ix2 << "\n";

		}


		if (x == "x" && a != "a" && a != "x" && o != "o" && o != "x") {
			stringstream sss;

			sss << x;

			sss >> ix;

			stringstream ssss;

			ssss << a;

			ssss >> ia;

			stringstream ss;

			ss << o;

			ss >> io;

			f = (io / ia);

			xr = (atan(f)) * (180 / PI);

			std::cout << "x = " << xr << " other angle = " << (180 - (xr + 90)) << "\n";

		}


	}

}

