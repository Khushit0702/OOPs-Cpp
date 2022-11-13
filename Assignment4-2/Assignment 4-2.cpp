//Assignment 4-2
//Cricket control board

#include <iostream>
#include<string>
using namespace std;

class Player
{
    public:
    string name, reg;//Name and region
    float bat_avg, bowl_avg;//batting and bowling average
    int numplayer;//number of player selected
    
    void readData()//taking user's input
    {
        cout << "Enter name of the player: " << endl;
        getline(cin >> ws, name);
        cout << "Enter name of the region: " << endl;
        getline(cin >> ws, reg);
        cout << "Enter batting avg: " << endl;
        cin >> bat_avg;
        cout << "Enter bowling avg: " << endl;
        cin >> bowl_avg;
        cout << "\n";
    }
    
    Player* generateList(Player p_list[])//creating a function to generate list of player, using array of object as parameter
    {
        int j = 0;
        for(int i = 0; i < 8; i++)
        {
            p_list[i].readData();//callling read function to take user's input
            if(p_list[i].bowl_avg < 25 && p_list[i].bat_avg > 30)
            {
                j++;//number of players selected
            }
        }

        Player* sel_list = new Player[j]; //creating an array of object to store the details of selected players and dynamically allocating its size
        numplayer = j;
        int k = 0;
        for(int i = 0; i < 8; i++)
        {
            if(p_list[i].bowl_avg < 25 && p_list[i].bat_avg > 30)
            {
                sel_list[k] = p_list[i];//storing the selected palyers information in the array of the objects
                k++;
            }
        }
        return sel_list;// returing the selected array to pointer 
    }    
};

int sortList(Player sel_list[], Player* bowl_sort, Player* bat_sort, int numplayer)//Using  sortList function the generated list of player 
    {//insertion sort to sort the list according to batting and bowling average 
    for (int i = 1; i <  numplayer; i++)//Sorting according to bowling average
    {
        Player key = sel_list[i];//Temproray storage
        int pos = i-1;
        while(pos >= 0 && sel_list[pos ].bowl_avg > key.bowl_avg)// If value at current pos is > than next position
        {   
            sel_list[pos+1] = sel_list[pos];//Swap the values
            pos--; 
        }
        sel_list[pos+1] = key;
    }
    for(int i = 0; i < numplayer; i++)
    {
        bowl_sort[i] = sel_list[i];//storing the sorted array in bowl sort
    }

    for (int i = 1; i <  numplayer; i++)//Sorting according to batting average
    {
        Player key = sel_list[i];//Temproray storage
        int pos = i-1;
        while(pos >= 0 && sel_list[pos ].bat_avg > key.bat_avg)// If value at current pos is > than next position
        {   
            sel_list[pos + 1] = sel_list[pos ]; // Swap the values
            pos--;
        }
        sel_list[pos+1] = key;
    }
    for(int i = 0; i < numplayer; i++)
    {
        bat_sort[i] = sel_list[i];//storing the sorted array in bat sort
    }
    return 0;
}

int displayList(Player* bowl_sort, Player* bat_sort, int numplayer)//Displaying the list of selected player after sorting them according to their batting and boeling average
    {
    cout<<"Players by batting average"<<endl;
    for(int i=0; i < numplayer; i++)
    {
        cout<<"Name: " << bat_sort[i].name << "\t Batting avgrage: " << bat_sort[i].bat_avg << endl;
    }
    cout<<"\n"<<endl;
    cout<<"Players by bowling average"<<endl;
    for(int i=0; i < numplayer; i++)
    {
        cout<< "Name: " <<bowl_sort[i].name<< "\t Bowling avgrage: " << bowl_sort[i].bowl_avg<<endl;
    }
    return 0;
}

int main()
{
    Player p1;//creating an object of class player
    Player bowl_sort[8], bat_sort[8];//creating 2 arrays of object to store sorted list
    Player player_list[8];//creating an array of object to pass as argument which will store the data
    Player *p = p1.generateList(player_list);//function call to generate a list and storing the selected array of players to p and passing array of object to the member function
    cout<<"Selected players: "<<p1.numplayer<<"\n" << endl;
    sortList(p, bowl_sort, bat_sort, p1.numplayer);//fuction call to sort the list
    displayList(bowl_sort, bat_sort, p1.numplayer);//fuction call to print the sorted list
    return 0;
}