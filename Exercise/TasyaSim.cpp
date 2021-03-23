//Random program to test my knowledge
// Have Fun!! :D

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

//Prototype fx
void getMenu();
void getName();
void createFile();
void readFile();
int selectedChoice();
void totalScore(int x);

//main fx
int main(){

    int loop=0;
    createFile();
    getMenu();
    getName();
    readFile();
    int choice = selectedChoice();

    while(choice != 10 && loop < 5){

        
    //Different choices outcome
        switch(choice){
            case 1:
                cout << "Haha... I'm not a great singer but okay.\n\n";
                //totalScore(1);
                break;
            case 2:
                cout << "I don't feel like doing math right now~\n\n";
                //totalScore(2);
                break;
            case 3:
                cout << "Definitely!!!\n\n";
                //totalScore(3);
                break;
            case 4:
                cout << "How about no...\n\n";
                //totalScore(4);
                break;
            case 5:
                cout << "Of course! I am chatting with you right now, duhhh.\n\n";
                //totalScore(5);
                break;  
            case 6:
                cout << "Genshin, jom. :D\n\n";
                //totalScore(6);
                break;
            case 7:
                cout << "None of my YouTuber upload any new content. Sadge\n\n";
                //totalScore(7);
                break;
            case 8:
                cout << "There's no food at my home T^T\n\n";
                //totalScore(8);
                break;
            case 9:
                cout << "Kewl\n\n";
                //totalScore(9);
                break; 
            default:
                cout << "Ooopsie... I think that is an invalid option\n";  
                break;               
        }
        //cin.ignore();
        //cin.clear();
        loop++;
        if(loop < 5)
            choice = selectedChoice();
    }

    cout << "GAME OVER... Please wait for updates ^^";
    return 0;
}

//display menu fx
void getMenu(){
    int x;
    cout << "Hi there!! :D \nOddly enough u got this program.\n";
    cout << "You are now playing TasyaSim, a game where u try to score her heart\n\n";
    cout << "U//W//U\n\n\n";
    cout << "Let me introduced myself. \nMy name is Natasya Nadhira! U can call me Tasya or Back.\n";
}

//get name fx
void getName(){

    string name;
    bool set;

    //asking user's name
    do{
        cout << "\nSo, what is your name? ";
        cin.clear();
        getline(cin, name);
        string s1("Should I call you name then? ");
        s1.replace(18, 4, name);
        cout << endl << s1 << endl;
        cout << "(if yes, type 1. otherwise, type 0) ";
        cin >> set;
        cin.ignore();
    }while(set == 0);

    string s2("Hi name! Nice to meet you~");
    s2.replace(3,4,name);
    cout << endl << s2 << endl;

    string s3("What do you think I should do right now, name?");
    s3.replace(41, 4, name);
    cout << s3 << "\n\n";
}

void createFile(){
    ofstream gameFile("GameObject.txt");
    
        gameFile << "1 Singing 0" << endl
                 << "2 Math? -33" << endl
                 << "3 Sleep 99" << endl
                 << "4 Exercise -3" << endl
                 << "5 Chatting 39" << endl
                 << "6 Gaming 51" << endl
                 << "7 YouTube 0" << endl
                 << "8 Eating -49" << endl
                 << "9 Texting! 0" << endl;
                 
    gameFile.close();
}

void readFile(){
    ifstream gameFile("GameObject.txt");
    int bil, score;
    string act;

    cout << "No." << "   " << "Activity\n";
    while(gameFile >> bil >> act >> score){
        cout << bil << " --- " << act << endl;
    }

    cout << "10 --- Quit\n\n";
   
}

int selectedChoice(){
    int x;
    cout << endl << "Choose 1 activity: ";
    cin >> x;

    return x;
}

/*
void totalScore(int x){
    ifstream gameFile("GameObject.txt");
    int bil, score, total;

    string act;

    gameFile >> bil >> act >> score;
    int matrix[bil][score];

    //2D array (bil, score)
    for(int row =0; row < 9; row++){
        for(int column = 0; column < 2; column++){
            matrix[row][column];
       }
    }

    cout << "Score gained: " << matrix[][];
    total += score;
    cout << "Total score: " << total;

}
*/