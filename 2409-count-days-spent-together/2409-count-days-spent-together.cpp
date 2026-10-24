class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {

        int a1=convert(arriveAlice);
        int a2=convert(leaveAlice);
        int b1=convert(arriveBob);
        int b2=convert(leaveBob);
        int start=max(a1,b1);
        int end=min(a2,b2);
        return max(0,end-start+1); //total no of days match
    }
    int convert(string date){
    int len[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int days=stoi(date.substr(3));
    int months=stoi(date.substr(0,2));
    int total=days;
    for(int i=0;i<months-1;i++){
        total+=len[i];
    }
    return total;        
    }
};