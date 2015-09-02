#include "world.h"

using namespace std;

int main() {
    Major EE ("Electrical Engineering", 132);
    Major CompE ("Computer Engineering", 132);
    Major CS ("Computer Science", 128);
    Major MP[3] = {EE, CompE, CS};
    Major *mp = &EE;
    *(mp + 1) = CompE;
    *(mp + 2) = CS;
    Address ad1 ("United States", "GA", "Atlanta", "Williams", 640, 30313);
    Address ad2 ("United States", "GA", "Atlanta", "Tenth", 52, 30313);
    Address ad3 ("United States", "GA", "Atlanta", "Techwood", 714, 30313);
    Address *ab1 = &ad1;
    Address *ab2 = &ad2;
    Address *ab3 = &ad3;
    Building Howell ("Howell Hall", ab1);
    Building CLC ("Clough Learning Commons", ab2);
    Building AEPi ("AEPi House", ab3);
    Building *ba1 = &Howell;
    Building *ba2 = &CLC;
    Building *ba3 = &AEPi;
    School GT ("Georgia Tech", 1885, mp, ba1, ba2, ba3, ab2);
    School *gt = &GT;
    Student yotam("Yotam Mosinzon", 23, mp + 1, gt, 2017);
    
    yotam.speak();
    
    getchar();
    return 0;
}
