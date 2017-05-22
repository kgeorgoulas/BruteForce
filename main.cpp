//Brute force search 10x10

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int number = 100; //number of particles in the domain
vector < vector <double> > coordinates(number, vector<double>(3));

int main()
{
    int counter =0;
    for(int i=0; i<sqrt(number); i++)
    {
        for(int j=0; j<sqrt(number); j++)
        {
            coordinates[counter][0]=i;
            coordinates[counter][1]=j;
            coordinates[counter][2]=counter;
            //cout << "particle " << coordinates[counter][2] << " coordinates " << coordinates[counter][0] << " , " << coordinates[counter][1] << endl;
            counter = counter + 1;
        }
    }

}