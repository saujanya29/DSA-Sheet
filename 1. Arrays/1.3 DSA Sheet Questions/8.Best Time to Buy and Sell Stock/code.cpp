#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;


int MaxProfit (vector<int> prices){

    int minVal = prices[0];
    int maxVal = prices[0];

    for(int i = 0 ; i<prices.size(); i++){

        if(prices[i]> maxVal){
            maxVal = prices[i];

        }

        // Here maxval get also updated as when we change the min value of stock so maxval can not be from previous iteration as per the questions
        // we cant sell stock before buying it so we will update maxval by the updated min value.


        if(prices[i]<minVal){
            minVal = prices[i];
            maxVal = prices[i];
        }
    
    }
    return (maxVal - minVal) ;
    
    
}

int main(){

    
vector<int> prices = {7,1,5,3,6,4};

int ans = MaxProfit(prices);
cout<<ans<<endl;;

}
