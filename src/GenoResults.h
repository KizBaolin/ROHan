/*
 * GenoResults
 * Date: Mar-21-2016 
 * Author : Gabriel Renaud gabriel.reno [at sign here] gmail.com
 *
 */

#ifndef GenoResults_h
#define GenoResults_h


#include "PositionResult.h"

using namespace std;



class GenoResults{
private:
    
public:

    long double  rrll;
    long double  rall;
    long double  aall;

    long double  lqual;
    long double  llCov;
    int          geno;

    //computed
    long double  probAccurate;
    long double  expectedH;
    
    GenoResults();
    GenoResults(long double  rrll ,
		long double  rall ,
		long double  aall ,
		long double  lqual,
		long double  llCov,
		int          geno);
    GenoResults(const PositionResult * pr);
    GenoResults(const GenoResults    & other);
    ~GenoResults();
    GenoResults & operator= (const GenoResults & other);
};


#endif