#include <stdio.h>
int main(void) {
    int competiter = 0, winner = 0;
    double best = 0.0;
    // loop while until scanf doesnt return 5
    while (1) {
        double a, b, c, d, e; // judges scores
        int read = scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
        if (read != 5) break; // exit when done
        double scores[5] = {a, b, c, d, e};
        competiter++;
        double min = 11.0, max = 0.0, sum = 0.0;
        for (int i = 0; i < 5; i++)
        {
            if (scores[i] < min) min = scores[i];
            if (scores[i] > max) max = scores[i];
            sum += scores[i];
        }
        double avg = (sum - min - max) / 3.0; // average without min and max
        if (avg > best) {
            best = avg; // update best score
            winner = competiter; // update winner
        }
        
    }
    printf("Competitor %d: %.2lf\n", winner, best);
    return 0;
    
}