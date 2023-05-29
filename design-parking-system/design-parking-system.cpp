class ParkingSystem {
public:
    int cnt1,cnt2,cnt3;
    ParkingSystem(int big, int medium, int small) {
        cnt1=big;
        cnt2=medium;
        cnt3=small;
    }
    
    bool addCar(int cT) {
        if(cT==1) if(cnt1==0) return false; else cnt1--;
        else if(cT==2) if(cnt2==0) return false; else cnt2--;
        else if(cT==3) if(cnt3==0) return false; else cnt3--;
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */