#include <iostream>
#include <fstream>
using namespace std;

void resolver();

int main(){
    
    resolver();
}

void resolver() {
    
    ofstream outfile;
    outfile.open("datos.dat");
    
    double L = 2;
    double deltaX = 0.01;
    double tmax = 100;
    double deltaT= 0.5;
    
    double kappa = 200;
    double c = 900;
    double rho = 2700;
    double eta = deltaT*kappa / (deltaX*deltaX*c*rho);
    
    
    double malla[200][2];
    
    for(int i=0; i<200; i++) {
        malla[i][0] = 300;
        malla[i][1] = 300;
    }
    for(int i=80; i<120; i++) {
        malla[i][0] = 500;
        malla[i][1] = 500;
    }
    
    for(int i=0; i<200; i++) {
        outfile << malla[i][0] << " ";
    }
    outfile << endl;
    
    
    for(int j=0 ;j<200; j++) {
        
        outfile <<  malla[0][1] << " ";
        for(int i=1; i<199; i++) {
            
            malla[i][1] = malla[i][0] + eta*(malla[i+1][0] + malla[i-1][0] - 2* malla[i][0]);
            outfile <<  malla[i][1] << " ";
        }
        outfile <<  300 << " ";
        outfile << endl;
        for(int i=1; i<199; i++) {
            
            malla[i][0] = malla[i][1];
        }
    }
    
    
    outfile.close();
    
}