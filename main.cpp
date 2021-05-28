//
//  main.cpp
//  CrazyFencing
//
//  Created by mj's secret on 5/27/21.
//

#include <iostream>
using namespace std;

double a(int h, int h2, int w)                  //Func to culculate the area of the Trapezoid.
{
    double b = (h + h2)* w;
    double c = b/2;
    return c;
    
}

int main() {
  
    int N;                                        //The total pieces of wood
    
        cout<<"Enter total amount of wood"<<endl;
        
        cin>>N;
    
    int totalArea [N-1];                          //Creat array for the area of each Trapezoid
    
    int height[N];                                //Creat array for the height
    
    int width[N-1];                               //Creat array carrying the width
    
        for (int i = 0; i <N; i++)

        {
            if  (i == N){                         //If i is equal to the amount of wood, than cin the last height.
                
                cout <<"Pls enter "<<i+1<< " height"<<endl;
                
                cin >> height[i] ;
                
                totalArea[i] =a(height[i], height[i+1], width[i]);
              
              break;
        
        } else {
        
        cout <<"Pls enter "<<i+1<< " height"<<endl;
         
            cin >> height[i];
        
        cout <<"Pls enter "<<i+1<<" width"<<endl;
            
            cin >> width[i];
        
        }
        
        totalArea[i] =a(height[i], height[i+1], width[i]); //Calculate the total area

    }
    
    int cArea;
    
    for(int j = 0; j <= N; j++ ){                          //Add the current area with the next one
        
        cArea = totalArea[j] + totalArea[j+1];
        
        totalArea[j+1] = cArea;
    };
    
    cout<<"The total area is equal to "<<cArea;
    
    return 0;
}
