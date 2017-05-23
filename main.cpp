//Brute force search 10x10

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int number = 100; //number of particles in the domain
vector < vector <double> > coordinates(number, vector<double>(2));
vector <vector <int> > neighbours(number, vector<int>(1));

int main()
{
    //populate the vector
    int counter =0;
    for(int i=0; i<sqrt(number); i++)
    {
        for(int j=0; j<sqrt(number); j++)
        {
            coordinates[counter][0]=i;
            coordinates[counter][1]=j;
            neighbours[counter][0]=counter;
            //cout << "particle " << coordinates[counter][2] << " coordinates " << coordinates[counter][0] << " , " << coordinates[counter][1] << endl;
            counter = counter + 1;
        }
    }

    //find neighbours
    for(int a=0; a<number; a++)
    {
        neighbours[a][1]=0;
        for(int b=0; b<number; b++)
        {
            double distance = sqrt((coordinates[b][0]-coordinates[a][0])*(coordinates[b][0]-coordinates[a][0]) + (coordinates[b][1]-coordinates[a][1])*(coordinates[b][1]-coordinates[a][1]));
            if (distance <= 1.0 && distance !=0)
            {
                neighbours[a][1]=neighbours[a][1]+1;
            }
        }
        cout << "particle " << a << " has " << neighbours[a][1] << " close neighbours" << endl;

    }


}