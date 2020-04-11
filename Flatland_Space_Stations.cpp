/*
question is-> if n=4, then cities name are 0,1,2,3,4.  if n=2  names are 0,2
          and if m=3 means there are 3 space stations for ex at 1,3,4
          each city has distance 1 unit , ex. 1-0=1 , 2-1=1
 we have to find maximum distance for any of city to space station
 example cities are   (0)----1----2----3-----(4)
 in this example space stations are at 0 and 4
 maximum distance will be 2 unit for city 2 , there for answer is 2
 
 sample input:   5 2     // here n=5(number of cities) ,m=2(no. of stations)      
                 0 4     // cities who have space stations
 output: 2    //max distance have to travel for any of city
 
*/

int flatlandSpaceStations(int n, vector<int> c) {
sort(c.begin(),c.end());
    int maxDistance = c[0];
    for(int i = 1; i < c.size(); i++)
    {
        int distance = (c[i] - c[i-1]) / 2;
        if(maxDistance < distance) 
            maxDistance = distance;
    }
    int lastGap = (n-1) - c[c.size() - 1];
    if(lastGap < maxDistance)
        return maxDistance;
    else
        return lastGap;

}
