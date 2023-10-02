#include <iostream>
using namespace std;
void reachHome(int src, int dest)
{
    //Step by Step Walking 
    cout << "Source: " << src << " Destination: " << dest << endl;
    // base Case
    if (src == dest)
    {
        cout << "Reacged Home" << endl;
        return;
    }

    // Processing one step
    src++;
    // recurcive call
    reachHome(src, dest);
}

int main()
{
    int dest = 10; // dest -> destination
    int src = 1;   // src -> Scorce

    reachHome(src, dest);
    return 0;
}