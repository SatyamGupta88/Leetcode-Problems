class Solution {
public:
    vector<double> convertTemperature(double celsius) {

        //calculate temp in kelvin
        double kelvin = celsius + 273.15;
        double fahen = celsius*1.80+32.00;
        return {kelvin,fahen};  
    }
};