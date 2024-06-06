class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int k) {
        
        int n = hand.size();

        if (n % k != 0) {
            return false;
        }

        map<int, int> m;

        for (auto card : hand) {
            m[card]++;
        }

        for (auto it : m) {
            int card = it.first;
            int count = it.second;

            if (count > 0) {
                for (int i = 0; i < k; i++) {
                    if (m.find(card + i) == m.end() || m[card + i] < count) {
                        return false;
                    }
                    m[card + i] -= count;
                }
            }
        }
        
        return true;
    }
};