#include<fstream>
#include<iostream>
#include<string>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    ifstream s;
    int N = 0;
    s.open("score.txt");
    string text;
    float sum = 0;
    while (getline(s,text)){
        sum += stof(text);
        N++;
    }
    float mean = sum / N;
    cout << "Number of data = " << N << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    float sigma = 0;
    s.close();
    s.open("score.txt");
    while (getline(s,text)){
        sigma += (stof(text)-mean)*(stof(text)-mean);
    }
    cout << "Standard deviation = " << sqrt((1/(float)N)*sigma);

}
