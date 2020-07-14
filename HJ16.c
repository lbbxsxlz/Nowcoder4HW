/*
 * 设计一个满足要求的购物单
 * 输入：
 *     1000 5
 *     800 2 0
 *     400 5 1
 *     300 5 1
 *     400 3 0
 *     500 2 0
 * 输出：
 *     2200
 */

#include <stdio.h>
#include <string.h>

#define _max(a, b) (a > b ? a : b)

struct VP {
    int vp;
    int p;
};

int main() {
    struct VP vp[61][4] = { 0 };
    int N = 0, m = 0, w[3201] = { 0 };
    while (scanf("%d%d", &N, &m) == 2) {
        N /= 10;
        memset(vp, 0, sizeof(vp));
        memset(w, 0, sizeof(w));
        for (int i = 1; i <= m; ++i) {
            int v, p, q;
            scanf("%d%d%d", &v, &p, &q);
            v /= 10;
            if (q == 0) {
                for (int j = 0; j < 4; ++j) {
                    vp[i][j].vp = v * p;
                    vp[i][j].p = v;
                }
            }
            else {
                if (vp[q][1].vp == vp[q][0].vp) {
                    vp[q][1].vp += v * p;
                    vp[q][1].p += v;
                }
   
                if (vp[q][2].vp == vp[q][0].vp) {
                    vp[q][2].vp += v * p;
                    vp[q][2].p += v;
                }
                vp[q][3].vp += v * p;
                vp[q][3].p += v;
            }    
        }

        for (int i = 1; i <= m; ++i) {
            for (int j = N; j >= 0; --j) {
                for (int k = 0; k < 4; ++k) {
                    int val = vp[i][k].vp;
                    int cst = vp[i][k].p;
                    if (cst <= j) 
                        w[j] = _max(w[j], w[j - cst] + val);
                    if(vp[i][0].vp == vp[i][1].vp) 
                        break;
                }
                   
            }
        }
        printf("%d\n", w[N] * 10);
    }
    return 0;
}