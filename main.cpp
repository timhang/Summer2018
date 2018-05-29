#include "car.h"
#include<cstdlib>
#include<iostream>
#include<sstream>
#include<fstream>
#include<map>

int main(int argc,char* argv[]){
	std::stringstream ss;
	std::ifstream infile(argv[1]);
	if(!infile){std::cout<<"unable to open file"<<std::endl;
		return 1;}
	std::string line;
	std::map<std::string>
	while(getline(infile,line)){
		//std::cout<<line<<std::endl;
		std::stringstream ss;
		ss<<line;
		std::string make;
		std::string model;
		unsigned int year;
		std::string color;
		ss>>make>>model>>year>>color;
		//std::cout<<make<<model<<year<<color<<std::endl;

	}
	return 0;
}