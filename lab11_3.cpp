#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int count =0;
    float sum=0,sd = 0,mean = 0,sum2=0;
    string tl;
    ifstream source("score.txt");
    while (getline(source,tl))
    {
        sum += atof(tl.c_str());
        sum2 += pow(atof(tl.c_str()),2);
        count++;
    }
    mean = sum/count;
    sd = sqrt(sum2/count-(mean*mean));
    cout << "Number of data = "<<count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<mean<<endl;
    cout << "Standard deviation = "<<sd;
}