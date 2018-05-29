#include <iostream>
#include "car.h"


car::car(std::string make,std::string model,unsigned int year, std::string color):
		car_make(make),car_model(model),car_year(year),car_color(color){};

const std::string car::get_promo() const{
	return promo_info;
}


void car::add_promo(std::string auth, std::string promo){
	if(auth == authorization) promo_info = promo;
	else std::cout<<"Do not have access to change car promotion!"<<std::endl;
}
