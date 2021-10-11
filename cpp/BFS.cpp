#include <iostream>
#include <vector>
#include<queue>
using namespace std;
/*
here i have implemented breadth First Search by Stack and vector

1.in main there is firstly i have made one vector,then user input
	in vector i am storing all the adjacent nodes in 2D matrix 
	like 2 and 3 is adjacent to 1 then vector[1]={2,3};
	in BFS function using queue intially i am pushing first Node assusme 0 here.
	then as BFS rule while queue is not empty we r keep doing the same process.
	refer to : back 2 back SWE channel for clear explanation 
*/



void DFS(int u,vector<vector<int>> &adjacent,vector<bool> &visited)
{
    queue<int> count;
    count.push(u);
        int temp;

     while(!count.empty())
    {
        temp=count.front();
        count.pop();
        visited[temp]=true;

        for(int i:adjacent[temp])
        {
            if(!visited[i])
            {
                visited[i]=true;
                count.push(i);
            }
           
        }
         cout<<"visited node: "<<temp<<endl;
    }
    
}


int main()
{
    int nodes,edges,u,v;

    cout<<" total number of nodes:"<<endl;
    cin>>nodes;
    vector<vector<int>> adjacent(100);
    vector<bool> visited(nodes,false);
    

    for(int i=0;i<nodes;i++)
    {
        cout<<"enter value of node:"<<i+1<<" "<<endl;
        cin>>u;
        
        cout<<"enter total edges of node:"<<i+1<<":"<<endl;
        cin>>edges;
   
        for(int i=0;i<edges;i++)
        {
            cout<<"edge:"<<i+1<<":";
            cin>>v;
            adjacent[u].push_back(v);
        }
    }

    cout<<endl<<"---->BFS:"<<endl;
    DFS(0,adjacent,visited);
}
