#ifndef gold_decon_hh
#define gold_decon_hh

using namespace std;

class gold_decon {

  public:
    gold_decon(float rM[4096][10],
               float s[4096],
               int sx,
               int sy,
               int nI,
               int nR,
               double b);
    ~gold_decon();

    int i, j, k, lindex, lhx = 0, repet;
   	double lda, ldb, ldc, area;

  // Member initialization list
  private:
    float respMatrix(rM);
    float source(s);
    const int ssizex(sx);
    const int ssizey(sy);
    const int numberIterations(nI);
    const int numberRepetitions(nR);
    const double boost(b);

};

#endif
