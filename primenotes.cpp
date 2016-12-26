#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;

int isPrime(int num);
int getNote(int num);

int main()
{
    vector<int> notes;
    int numNotes = 1000;
    int generated = 0;
    int i = 5700;
    int note;
    int past;
    int current;
    int duration = 160;

    //notes.push_back(82.41);
   //notes.push_back(92.50);
    //notes.push_back(103.83);
   // notes.push_back(110.00); // e
    notes.push_back(123.47); // f
    notes.push_back(138.59); // g
    notes.push_back(146.83); // a
    notes.push_back(164.81); // b
    notes.push_back(185.00); // c
    notes.push_back(207.65);
    notes.push_back(220.00);
    notes.push_back(246.94);
    notes.push_back(277.18);
    notes.push_back(293.66);
    notes.push_back(329.63);
    notes.push_back(369.99); // e
    notes.push_back(415.30); // f

    Beep(110.00,1000);

    while(isPrime(i) == false)
        {
            i++;
        }
    current = i;
    past = current;
    i = 5700;

    while(true)
    {

        while(isPrime(i) == false)
        {
            i++;
        }
        cout << "playing--"<< i <<endl;
        current = i;
        note = current - past;
        note = getNote(note);
        note = note/2;
        cout << note << endl;
        Beep(notes[note],duration);
        past = current;
        generated++;
        i++;
        if(generated == numNotes)
        {
            break;
        }


    }
}


int isPrime(int num)
{
    for (int i = 2; i <= num/2; i++)
    {
        if(num%i == 0)
        {
            return false;
        }
    }
    return true;

}

int getNote(int num)
{
    if (num <= 16)
    {
        return num;
    }

    if((num/16)%2 != 0)
    {
        return (16-(num%16));

    }
    else
    {
        return (num%16);
    }


}



