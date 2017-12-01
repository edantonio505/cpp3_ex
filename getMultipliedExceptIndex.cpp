#include <iostream>
#include <vector>

using namespace std;



vector<int> getMultipliedExceptIndex (vector<int> intVector)
{   
    
    if (intVector.size() < 2) {
        throw invalid_argument("Getting the product of numbers at"
            " other indices requires at least 2 numbers");
    }
    
    
    // create a new vector that will include all the product of the integers before indexed
    vector<int> productsOfAllIntsExceptAtIndex(intVector.size());
        
    
    int productSoFar = 1;
    
    for (size_t i = 0; i < intVector.size(); ++i)
    {   
        productsOfAllIntsExceptAtIndex[i] = productSoFar;
        productSoFar *= intVector[i];
    }

    

    productSoFar = 1;
    for(size_t i = intVector.size(); i > 0; --i)
    {
        size_t j = i-1;
        productsOfAllIntsExceptAtIndex[j] *= productSoFar;
        productSoFar *= intVector[j];
    }
    return productsOfAllIntsExceptAtIndex;
}





int main ()
{
    
    vector<int> integersArray;
    

    integersArray.push_back(1);
    integersArray.push_back(7);
    integersArray.push_back(3);
    integersArray.push_back(4);


    cout << "original is: " << endl;
    for(size_t i = 0; i < integersArray.size(); ++i)
    {
        cout << integersArray[i] << " ";
    }
    vector<int> productMultipliedExceptIndex =  getMultipliedExceptIndex(integersArray);
    

    cout << endl;
    cout << "modifierd array " << endl;
    for(size_t i = 0; i < productMultipliedExceptIndex.size(); ++i)
    {
        cout << productMultipliedExceptIndex[i] << " ";
    }
    cout << endl;
        
    
    return 0;
}