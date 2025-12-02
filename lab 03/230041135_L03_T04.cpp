#include<iostream>
#include<string>
using namespace std;

int main()
{
    string answer, predict; cin >>answer >>predict;
    int rotation=0, possible=0;

    if(answer.size()!=predict.size()) cout <<"No" <<endl;
    else if(!answer.compare(predict)) cout <<"Yes. Rotation not needed." <<endl;
    else
    {
        for(int i=0; i<answer.size()-1; i++)
        {
            answer.insert(0,1,answer.at(answer.size()-1));
            answer.pop_back();            
            rotation++;
            if(!answer.compare(predict)) {possible=1; break;}
        }
        if(possible) cout <<"Yes. After " <<rotation <<" clockwise rotations" <<endl;
        else cout <<"No" <<endl;       
    }

    return 0;
}