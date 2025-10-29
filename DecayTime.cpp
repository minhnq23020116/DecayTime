#include <iostream>
double DecayTime(double initialMass, double halfLife, double threshold)
{
    double current = initialMass;
    double time = 0.0;

    while (current >= threshold)
    {
        current *= 0.5;
        time += halfLife;

        if(current <= 0.1 * initialMass)
        {
            std::cout << "Warning: Mass has decayed below threshold with more than 90% loss." << std::endl;
        }
        
        if(time > 3600) 
        {
            std::cout << "Warning: Time exceeded 3600 seconds. Current mass: " << current << std::endl;
        }
    }

    return time;
}