//Name:- Shivam Sindhi
//Roll No:- 2010992094
//Group:-20
//Set:- 03
//Q2

#include <iostream>
#include <unordered_map>
using namespace std;

//find a pair in an array
void find(int arr[], int n, int tar){
    //map
    unordered_map<int, int> map;

    for (int i=0; i<n; i++)
    {   //print the pair
        if (map.find(tar-arr[i]) != map.end())
        {
            cout << "Pair found (" << arr[map[tar-arr[i]]]<< ", "
                 << arr[i] << ")\n";
            return;
        }

        //index of the current element
        map[arr[i]] = i;
    }
    // if the pair is not found
    cout << "Pair not found";
}

int main()
{
    int n; //Size of array
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int tar;
    cin>>tar; //target ele

    try
    {
        find(arr, n, tar);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    return 0;
}