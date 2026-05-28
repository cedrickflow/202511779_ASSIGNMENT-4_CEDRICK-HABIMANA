#include "notepad.h"


// Function for writing file

void writeFile(string filename)
{
    ofstream file(filename);

    string text;

    cout<<"Type your text"<<endl;
    cout<<"Type END to stop"<<endl;

    cin.ignore();

    while(true)
    {
        getline(cin,text);

        if(text=="END")
        {
            break;
        }

        file<<text<<endl;
    }

    file.close();

    cout<<"File Saved Successfully"<<endl;
}



// Function for reading file

void readFile(string filename)
{
    ifstream file(filename);

    string line;

    if(file.is_open())
    {
        cout<<"\nFile Content:\n";

        while(getline(file,line))
        {
            cout<<line<<endl;
        }

        file.close();
    }
    else
    {
        cout<<"File Not Found"<<endl;
    }
}



// Function for appending file

void appendFile(string filename)
{
    ofstream file(filename,ios::app);

    string text;

    cout<<"Add text"<<endl;
    cout<<"Type END to stop"<<endl;

    cin.ignore();

    while(true)
    {
        getline(cin,text);

        if(text=="END")
        {
            break;
        }

        file<<text<<endl;
    }

    file.close();

    cout<<"Text Added Successfully"<<endl;
}