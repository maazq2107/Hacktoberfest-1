#include <iostream>
#include <vector>
#include<stack>
using namespace std;
/*
here i have implemented Depth First Search by Stack and vector

1.in main there is firstly i have made one vector,then user input
	in vector i am storing all the adjacent nodes in 2D matrix 
	like 2 and 3 is adjacent to 1 then vector[1]={2,3};
	in DFS function using stock intially i am pushing first Node assusme 0 here.
	then as DFS rule while stack is not empty we r keep doing the same process.

*/


void DFS(int u,vector<vector<int>> &adjacent,vector<bool> &visited)
{
    stack<int> count;
    count.push(u);
        int temp;

     while(!count.empty())
    {
        temp=count.top();
        count.pop();
        if(!visited[temp])
        {
        visited[temp]=true;
         cout<<"visited node: "<<temp<<endl;
        }
        

        for(int i:adjacent[temp])
        {
            if(!visited[i])
            {
                count.push(i);
            }
           
        }
       
    }
    
}


int main()
{
    int nodes,edges,u,v;

    cout<<"enter total number of nodes:"<<endl;
    cin>>nodes;
    vector<vector<int>> adjacent(100);
    vector<bool> visited(nodes,false);
    

    while((nodes--)>0)
    {
        cout<<"enter value of node:"<<endl;
        cin>>u;
        
        cout<<"enter how many edges are there in this node:"<<endl;
        cin>>edges;
   
        while(edges>0)
        {
            cout<<"enter value of edge:"<<edges<<":";
            cin>>v;
            adjacent[u].push_back(v);
            // adjacent[v].push_back(u);
            edges--;
        }
    }

    cout<<endl<<"------------DFS---------"<<endl;
    DFS(0,adjacent,visited);
}
