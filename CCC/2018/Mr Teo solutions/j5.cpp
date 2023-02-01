#include <bits/stdc++.h>
using namespace std;
//this is a shortest path question
//basically my code below is implementing djikstra's algorithm and adapting for the question
//https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/

//helper function to find the index number of the element with the minimum distance
//out of all the elements that have not been settled
//settled meaning we know the shortest distance to that element
//I'm using arrays here for speed (vectors are slightly slower, but you can use vectors instead)
//dist[] is an array. dist[i] stores the distance from page 1 to page i
//settled[] is an array. settled[i] is true if the distance from page 1 to page i has been found
//int N is the number of pages in the book
//note that while dist[] and bool[] starts from index 0, 
//to make life easier, dist[0] and bool[0] do not represent anything useful
//dist[1] is always 0, its the distance from page 1 to 1
//dist[5] is the distance from page 1 to page 5
int mindistance(int dist[], bool settled[], int N) {
    int min = N, min_index;

    for (int i = 1; i < N+1; ++i) {
        if (settled[i] == false and dist[i] <= min) {
            min = dist[i];
            min_index = i;
        }
    
    }
    return min_index;

}
int main() {
    int N; // total number of pages
    cin >> N;
    int links; // a helper integer that stores the number of links
    int link; //stores the link
    const int max_dist = 10001; //const int is an integer that should never change. the max distance in this question is 10001
    vector<int> endings; //vector to store all the ending pages, meaning pages with 0 links to other pages

    vector<vector<int>> graph; //every row represents the pages that can be reached
    //row 2 will store all the pages page 2 can reach
    //N columns in each row, if it can be reached, graph[row][column] = 1, or else 0
    //create a 2D vector with N+1 rows and N+1 columns
    //every row starts off as 0
    //row 0 will not represent anything useful
    //1st useful row is row 1, representing pages page 1 can reach
    vector<int> v1;
    for (int i = 0; i < N+1; ++i) {
        v1.push_back(0);
    }

    for (int i = 0; i < N+1; ++i) {
        graph.push_back(v1);
    }

    //iterate to cin the number of links for each page
    for (int i = 1; i < N+1; ++i) {
        cin >> links;
        if (links == 0) { //if links == 0, store it in endings vector
            endings.push_back(i);
        }
        //iterate to receive the link for each page and
        //set the appropriate element in graph vector to 1. 
        //graph[i][link] = 1 if page i can lead to page link (link is a page number)
        for (int j = 0; j < links; j++) {
            cin >> link;
            graph[i][link] = 1;
        }
    }

    //dijkstra algo start here
    int dist[N+1]; //dist[i] will hold the sortest distance from page 1 to that page
    bool settled[N+1]; // settled[i] will be true if that page's distance from page 1 is settled
    fill(dist, dist+N+1, max_dist); // initialize all distances as N
    fill(settled, settled+N+1, false); // initialize all settled as false

    dist[1] = 0; //distance of page 1 to page 1 is 0

    for (int i = 1; i < N+1; ++i) {
        //pick the minimum dist page from the unsettled pages
        int u = mindistance(dist,settled,N);

        //mark it as settled
        settled[u] = true;

        //update dist value of the adjacent pages of the picked page
        for (int j = 1; j < N+1; ++j) {
            //update dist[j] only if it is not settled
            //there is a path from u to j
            //and total distance of path from page 1 to j is smaller than current distance
            if ((settled[j]==false) and graph[u][j] and (dist[u] != max_dist) and (dist[u] + 1 < dist[j]) ) {
                dist[j] = dist[u] + 1;
            }
        }
    }

    //if distance is max_dist, then it cannot be reached
    string reach = "Y";
    //iterate to check that every page can be reached
    for (int i = 1; i < N+1; ++i) {
        if (dist[i] == max_dist) { //if any element in dist[] == max_dist, that page cannot be reached
            reach = "N";
            break;
        }
    }
    int min_dist = max_dist; //set min_dist to the largest distance 1st
    //iterate through all the ending pages
    //find the finding page with the shortest distance
    //remember dist[i] stores the shortest distance from page 1 to page i
    for (auto i: endings) {
        if (dist[i] < min_dist) {
            min_dist = dist[i];
        }
    }
    cout << reach<<endl;
    cout<< min_dist+1;//+1 to include page 1

}