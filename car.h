#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>
#include <set>

class car{
	public:
		car(std::string make,std::string model,unsigned int year, std::string color);
		~car();
		const std::string get_promo() const;

	private:
		void add_promo(std::string auth, std::string promo);
		std::set<std::string> authorization;
		std::string promo_info;
		std::string car_make;
		std::string car_model;
		unsigned int car_year;
		std::string car_color;
};

#endif