int pickingNumbers(vector<int> a) {
sort(a.begin(), a.end());

int score = 0,
    strike = 0;

for (int  i = 0; i < a.size(); i++) {
    for (int  j = 0; j < a.size(); j++) {
        if ( a[j] - a[i] <= 1 && a[j] - a[i] >= 0) {
            strike++;
            if (strike > score) {
                score = strike;
            }
        } else {
            strike = 0;
        }
    }
    strike = 0;
}

return score;
}
