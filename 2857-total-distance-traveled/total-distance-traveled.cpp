class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        if(mainTank<=4) return mainTank*10;
        int distance=0;
        while(mainTank>=5){
            distance+=50;
            mainTank-=5;
            if(additionalTank){
                additionalTank--;
                mainTank++;
            }
        }
        distance+=(mainTank*10);
        return distance;
    }
};