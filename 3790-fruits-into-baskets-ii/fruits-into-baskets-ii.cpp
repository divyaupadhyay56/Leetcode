class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
       int n = fruits.size();
    int m = baskets.size();
    std::vector<bool> placedBaskets(m, false);
    int unplacedCount = 0;

    for (int fruitQuantity : fruits) {
        bool placed = false;
        for (int i = 0; i < m; ++i) {
            if (!placedBaskets[i] && baskets[i] >= fruitQuantity) {
                placedBaskets[i] = true;
                placed = true;
                break;
            }
        }
        if (!placed) {
            unplacedCount++;
        }
    }

    return unplacedCount;
    }
};