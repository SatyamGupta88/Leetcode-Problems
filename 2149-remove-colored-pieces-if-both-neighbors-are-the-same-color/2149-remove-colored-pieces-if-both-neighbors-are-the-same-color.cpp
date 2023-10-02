class Solution {
public:
    bool winnerOfGame(string colors) 
    {
        int aliceScore=0, bobScore=0;
        for(int i=1;i<colors.size()-1;i++)
        {
            char currColor = colors[i];
            char prevColor= colors[i-1];
            char nextColor= colors[i+1];
            if(currColor == 'A' && prevColor=='A' && nextColor=='A') aliceScore++;

            if(currColor == 'B' && prevColor=='B' && nextColor=='B') bobScore++;
        }
        return aliceScore > bobScore;
    }
};