#include <iostream>
using namespace std; 
#include <vector>

int main(){

   vector<vector<int>> matrix(3,vector<int>(3,0));

   matrix.at(0).at(0)=1;
   matrix.at(1).at(1)=1;
   matrix.at(2).at(2)=1;

   for(int i=0;i<matrix.size();i++){

        for(int j=0;j<matrix.size();j++){

            cout<<matrix.at(i).at(j);
        }

        cout<<endl;
   }

   int hit_counter=0;
   int miss_counter=0;

   int row_strike;
   int coloum_strike;

   while(miss_counter!=3){

    cout<<"Kindly enter the row and coloum you want to strike "<<endl;

    cout<<"X coordinate:: ";

    cin>>coloum_strike;

    cout<<"Y coordinate:: ";

    cin>>row_strike;

    if(matrix[row_strike][coloum_strike]==1){

        cout<<"congratulations you have hit the target"<<endl;

        matrix[row_strike][coloum_strike]=0;

        hit_counter++;

        if(hit_counter==3){

            cout<<"You won the game :: "<<endl;

            break;
        }
    }
    else{

        cout<<"You have missed the target "<<endl;

        miss_counter++;

        if(miss_counter==3){

            cout<<"You lost the game"<<endl;
        }
    }

   }

   //printing the final matrix

   for(int i=0;i<matrix.size();i++){

        for(int j=0;j<matrix.size();j++){

            cout<<matrix.at(i).at(j);
        }

        cout<<endl;
   }
}