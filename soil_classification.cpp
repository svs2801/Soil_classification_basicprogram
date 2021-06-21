#include<bits/stdc++.h>
using namespace std;
string soiltype(double clay,double silt, double sand)
{
        if(clay>=35)
            return "clay";
        else if(clay>=15 & clay<35)
            return "silt";
        else 
            return "sandy";
}
string particlesoil(double partdiam)
{
        if((partdiam)<=0.002)
            return "clay";
        else if(partdiam>0.02 && partdiam <=2)
            return "silt";
        else
            return "sand";            
}

int main()
{
    double clay,silt,sand, partdiam;
    cout<<"Enter the percentage of clay: ";
    cin>>clay;
    cout<<"\n";

    cout<<"Enter the percentage of silt: ";
    cin>>silt;
    cout<<"\n";

    cout<<"Enter the percentage of sand: ";
    cin>>sand;
    cout<<"\n";

    cout<<"Enter the particle diamter in mm: ";
    cin>>partdiam;
    cout<<"\n";

    if(soiltype(clay,silt,sand)==particlesoil(partdiam))
        cout<<"soil type is "<<soiltype(clay,silt,sand)<<endl;
    else
    {    cout<<"paramaters don't match"<<endl;
        exit(0);
    }
    
    if(soiltype(clay,silt,sand)=="clay")
    {
        cout<<"some recommended crops are rice, cauliflower, cabbage"<<endl;
        cout<<"recommended irrigation type is surface irrigation"<<endl;
    }

    if(soiltype(clay,silt,sand)=="silt")
    {
        cout<<"some recommended crops are wheat, cotton, sugarcane"<<endl;
        cout<<"recommended irrigation type is drip irrigation"<<endl;
    }

    if(soiltype(clay,silt,sand)=="sand")
    {
        cout<<"some recommended crops are jpwar, carrots, radishes"<<endl;
        cout<<"recommended irrigation type is drip/surface irrigation"<<endl;
    }
    
}