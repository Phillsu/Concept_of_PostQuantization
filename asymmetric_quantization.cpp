#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void symmtric_quantization(const double org_weight[], int size, int asymmQuant_weight[], int bit_type){
    
    float range_xf;
    float alpha_x;
    double de_quant_weight[7] = {};
    float zero_point;
    
    range_xf = *max_element(org_weight, org_weight + size) - *min_element(org_weight, org_weight + size);
    alpha_x = (pow(2,bit_type)-1)/range_xf;
    zero_point = round(*min_element(org_weight, org_weight + size) * alpha_x);

    for(int i=0;i<size;i++){
        asymmQuant_weight[i] = round(alpha_x*org_weight[i])-zero_point;
    }

    cout<<"After Quantization weight list:"<<endl;
    for(int j=0;j<7;j++){
        cout<<asymmQuant_weight[j]<<" ";
    }  
    cout<<endl;
        
    cout<<"De Quantization weight list:"<<endl;
    for(int i=0;i<7;i++){
        de_quant_weight[i] = (asymmQuant_weight[i] + zero_point) / alpha_x;
            cout<<de_quant_weight[i]<<" ";

    }
    cout<<endl;

    cout<<"Quantization distortion :"<<endl;
    for(int k=0;k<7;k++){
        cout<<abs(org_weight[k] - de_quant_weight[k])<<" ";
    }  
    cout<<endl;
    
}


int main() {

    double org_weight[7] = {0.1,0.2,1.2,3.0,2.1,-2.1,-3.5};
    int symmQuant_weight[7] = {}; 
    int bit_type = 4;

    cout<<"Weight List:"<<endl;
    for(int i=0;i<7;i++){
        cout<<org_weight[i]<<" ";
    }
    cout<<endl;

    symmtric_quantization(org_weight, 7, symmQuant_weight, bit_type);

    return 0;
}
