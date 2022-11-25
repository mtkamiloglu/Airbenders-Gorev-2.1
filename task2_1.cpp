#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>

double find_mean(std::vector<double> list){
    double sum=0; 
    double mean; 

    for (const double& i : list) {
        sum +=i;
    } 
    
    mean = (double) sum/(double) list.size();

    return mean;
}

double find_standard_deviation(std::vector<double> list){
    double mean = find_mean(list);
    double sum = 0;

    for(const double& i : list){
        sum += pow(i - mean, 2);
    }

    double final_sum = sum / (list.size() -1);

    return sqrt(final_sum);
}

int main(){

    std::vector<double> list = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6};
    double arith_mean = find_mean(list);
    double stand_dev = find_standard_deviation(list);

    std::cout << arith_mean << std::endl;
    std::cout << stand_dev << std::endl; 
    return 0;
}
