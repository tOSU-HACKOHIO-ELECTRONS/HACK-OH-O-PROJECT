//File Name: rotational_grazing.cpp
//Created by: Hannah May
//Created on: 10/21/17
//this program computed the amount of time until a field of livestock needs to be rotated using information inputted

#include <iostream>
using namespace std;

int main()
{
    //this section finds out information about the size of the pasture 
    double field_area;   //area of the field
    double field_length; //length of field if area is not known
    double field_width;  //width of field if area is not known
    string answer;       //is the user inputting acres or dimensions
    double const yard_to_acre = .000206612;  //yard to acre conversion

    cout<< "Would you like to input the acrage or dimensions? ";
    cin>> answer;

    if (answer == "dimensions"){
        cout<< "Enter length (yards): ";
        cin>> field_length;
        cout<< "Enter width (yards): ";
        cin>> field_width;
        field_area = (field_width * field_length);
    }
    else if (answer == "acrage"){
        cout<< "Enter number of acres: ";
        cin>> field_area;
    }
    
    //this section finds out information about the type of grass in the pasture
    string grass;
    cout<< "Does your field contain fescue or bermuda grass? ";
    cin>> grass;

    //yield of bermuda grass in lbs/acre
    int bermuda_grass[11];
    bermuda_grass[0] = 62;
    bermuda_grass[1] = 112;
    bermuda_grass[2] = 1080;
    bermuda_grass[3] = 1140;
    bermuda_grass[4] = 1674;
    bermuda_grass[5] = 1410;
    bermuda_grass[6] = 2015;
    bermuda_grass[7] = 1798;
    bermuda_grass[8] = 930;
    bermuda_grass[9] = 589;
    bermuda_grass[10] = 570;
    bermuda_grass[11] = 120;

    //yield of fescue in lbs/acre
    int fescue[11];
    fescue[0] = 93;
    fescue[1] = 410;
    fescue[2] = 1085;
    fescue[3] = 1500;
    fescue[4] = 1178;
    fescue[5] = 450;
    fescue[6] = 155;
    fescue[7] = 248;
    fescue[8] = 540;
    fescue[9] = 1178;
    fescue[10] = 570;
    fescue[11] = 93;

    int month;
    int yield;

    cout<< "Enter month (number): ";
    cin>> month;

    if (grass == "bermuda"){
        yield = bermuda_grass[month - 1];
    }

    else if (grass == "fescue"){
        yield = fescue[month - 1];
    }

    //this section finds out information about the animals in the field
    int const cow_weight = 1200;    //average weight of cattle
    int const horse_weight = 1000;  //average weight of horses
    string animal;                  //type of animal in pasture
    int animal_weight;              //weight of animal in the pasture
    int num_animals;                //number of animals in the field

    cout<< "Are there cattle or horses in the field? ";
    cin>> animal;
    if (animal == "cattle"){
        animal_weight = cow_weight;
        cout<< "How many cattle are in the field? ";
        cin>> num_animals;
    }
    else if (animal == "horse"){
        animal_weight = horse_weight;
        cout<< "How many horses are in the field? ";
        cin>> num_animals;
    }
    
    //this section will solve for the amount of days
    int num_days;   //number of days before rotating pastures

    //num_days = (field_area * 
}