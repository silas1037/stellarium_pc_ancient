/*// LunarTerms.h - a list of terms needed to do lunar calcs

// author: mark huss (mark@mhuss.com)
// Based on Bill Gray's open-source code at projectpluto.com

#include "Lunar.h"

// Lunar Fundimentals

const double LunarFundimentals_Lp[5] = {
     270.4341640,			//218.3164591,
	 481267.8831,			//481267.88134236,
       -0.001133,			//-0.0013268,
 1.85583502e-006,
-1.53494298e-008
};
const double LunarFundimentals_D[5] = {
      350.737486,			//297.8502042,
	 445267.1142,			//445267.1115168,
       -0.001436,			//-0.00163,
 1.83194472e-006,
   -8.84447e-009
};
const double LunarFundimentals_M[5] = {
      358.475833,			//357.5291092,
	  35999.0498,			//35999.0502909,
       -0.000150,			//-0.0001536,
	  -0.0000033,		    //4.08329931e-008,
             0.0
};
const double LunarFundimentals_Mp[5] = {
      296.104608,			//134.9634114,
     477198.8491,			//477198.8676313,
        0.009192,			//0.008997,
 1.43474081e-005,
-6.79717238e-008
};
const double LunarFundimentals_F[5] = {
       11.250889,			//93.2720993,
	 483202.0251,			//483202.0175273,
       -0.003211,			//-0.0034029,
-2.83607487e-007,
 1.15833246e-009
};


// Lunar longitude & radius terms

const LunarTerms1 LunarLonRad[60] = {

//  D   M   Mp  F    coef                   forme coef*sin(D + M + Mp + F) 
  { 0,  0,  1,  0,  6288774, -20905335 },
  { 2,  0, -1,  0,  1274027,  -3699111 },
  { 2,  0,  0,  0,   658314,  -2955968 },
  { 0,  0,  2,  0,   213618,   -569925 },
  { 0,  1,  0,  0,  -185116,     48888 },
  { 0,  0,  0,  2,  -114332,     -3149 },
  { 2,  0, -2,  0,    58793,    246158 },
  { 2, -1, -1,  0,    57066,   -152138 },
  { 2,  0,  1,  0,    53322,   -170733 },
  { 2, -1,  0,  0,    45758,   -204586 },
  { 0,  1, -1,  0,   -40923,   -129620 },
  { 1,  0,  0,  0,   -34720,    108743 },
  { 0,  1,  1,  0,   -30383,    104755 },
  { 2,  0,  0, -2,    15327,     10321 },
  { 0,  0,  1,  2,   -12528,         0 },
  { 0,  0,  1, -2,    10980,     79661 },
  { 4,  0, -1,  0,    10675,    -34782 },
  { 0,  0,  3,  0,    10034,    -23210 },
  { 4,  0, -2,  0,     8548,    -21636 },
  { 2,  1, -1,  0,    -7888,     24208 },
  { 2,  1,  0,  0,    -6766,     30824 },
  { 1,  0, -1,  0,    -5163,     -8379 },
  { 1,  1,  0,  0,     4987,    -16675 },
  { 2, -1,  1,  0,     4036,    -12831 },
  { 2,  0,  2,  0,     3994,    -10445 },
  { 4,  0,  0,  0,     3861,    -11650 },
  { 2,  0, -3,  0,     3665,     14403 },
  { 0,  1, -2,  0,    -2689,     -7003 },
  { 2,  0, -1,  2,    -2602,         0 },
  { 2, -1, -2,  0,     2390,     10056 },
  { 1,  0,  1,  0,    -2348,      6322 },
  { 2, -2,  0,  0,     2236,     -9884 },
  { 0,  1,  2,  0,    -2120,      5751 },
  { 0,  2,  0,  0,    -2069,         0 },
  { 2, -2, -1,  0,     2048,     -4950 },
  { 2,  0,  1, -2,    -1773,      4130 },
  { 2,  0,  0,  2,    -1595,         0 },
  { 4, -1, -1,  0,     1215,     -3958 },
  { 0,  0,  2,  2,    -1110,         0 },
  { 3,  0, -1,  0,     -892,      3258 },
  { 2,  1,  1,  0,     -810,      2616 },
  { 4, -1, -2,  0,      759,     -1897 },
  { 0,  2, -1,  0,     -713,     -2117 },
  { 2,  2, -1,  0,     -700,      2354 },
  { 2,  1, -2,  0,      691,         0 },
  { 2, -1,  0, -2,      596,         0 },
  { 4,  0,  1,  0,      549,     -1423 },
  { 0,  0,  4,  0,      537,     -1117 },
  { 4, -1,  0,  0,      520,     -1571 },
  { 1,  0, -2,  0,     -487,     -1739 },
  { 2,  1,  0, -2,     -399,         0 },
  { 0,  0,  2, -2,     -381,     -4421 },
  { 1,  1,  1,  0,      351,         0 },
  { 3,  0, -2,  0,     -340,         0 },
  { 4,  0, -3,  0,      330,         0 },
  { 2, -1,  2,  0,      327,         0 },
  { 0,  2,  1,  0,     -323,      1165 },
  { 1,  1, -1,  0,      299,         0 },
  { 2,  0,  3,  0,      294,         0 },
  { 2,  0, -1, -2,        0,      8752 }
};

// Lunar latitude terms

const LunarTerms2 LunarLat[60] = {
  { 0,  0,  0,  1, 5128122 },
  { 0,  0,  1,  1,  280602 },
  { 0,  0,  1, -1,  277693 },
  { 2,  0,  0, -1,  173237 },
  { 2,  0, -1,  1,   55413 },
  { 2,  0, -1, -1,   46271 },
  { 2,  0,  0,  1,   32573 },
  { 0,  0,  2,  1,   17198 },
  { 2,  0,  1, -1,    9266 },
  { 0,  0,  2, -1,    8822 },
  { 2, -1,  0, -1,    8216 },
  { 2,  0, -2, -1,    4324 },
  { 2,  0,  1,  1,    4200 },
  { 2,  1,  0, -1,   -3359 },
  { 2, -1, -1,  1,    2463 },
  { 2, -1,  0,  1,    2211 },
  { 2, -1, -1, -1,    2065 },
  { 0,  1, -1, -1,   -1870 },
  { 4,  0, -1, -1,    1828 },
  { 0,  1,  0,  1,   -1794 },
  { 0,  0,  0,  3,   -1749 },
  { 0,  1, -1,  1,   -1565 },
  { 1,  0,  0,  1,   -1491 },
  { 0,  1,  1,  1,   -1475 },
  { 0,  1,  1, -1,   -1410 },
  { 0,  1,  0, -1,   -1344 },
  { 1,  0,  0, -1,   -1335 },
  { 0,  0,  3,  1,    1107 },
  { 4,  0,  0, -1,    1021 },
  { 4,  0, -1,  1,     833 },
  { 0,  0,  1, -3,     777 },
  { 4,  0, -2,  1,     671 },
  { 2,  0,  0, -3,     607 },
  { 2,  0,  2, -1,     596 },
  { 2, -1,  1, -1,     491 },
  { 2,  0, -2,  1,    -451 },
  { 0,  0,  3, -1,     439 },
  { 2,  0,  2,  1,     422 },
  { 2,  0, -3, -1,     421 },
  { 2,  1, -1,  1,    -366 },
  { 2,  1,  0,  1,    -351 },
  { 4,  0,  0,  1,     331 },
  { 2, -1,  1,  1,     315 },
  { 2, -2,  0, -1,     302 },
  { 0,  0,  1,  3,    -283 },
  { 2,  1,  1, -1,    -229 },
  { 1,  1,  0, -1,     223 },
  { 1,  1,  0,  1,     223 },
  { 0,  1, -2, -1,    -220 },
  { 2,  1, -2, -1,    -220 },
  { 1,  0,  1,  1,    -185 },
  { 2, -1, -2, -1,     181 },
  { 0,  1,  2,  1,    -177 },
  { 4,  0, -2, -1,     176 },
  { 4, -1, -1, -1,     166 },
  { 1,  0,  1, -1,    -164 },
  { 4,  0,  1, -1,     132 },
  { 1,  0, -1, -1,    -119 },
  { 4, -1,  0, -1,     115 },
  { 2, -2,  0,  1,     107 }
};
*/


// LunarTerms.h - a list of terms needed to do lunar calcs

// author: mark huss (mark@mhuss.com)
// Based on Bill Gray's open-source code at projectpluto.com

#include "Lunar.h"

// Lunar Fundimentals

const double LunarFundimentals_Lp[5] = {
     218.3164591,
 481267.88134236,
      -0.0013268,
 1.85583502e-006,
-1.53494298e-008
};
const double LunarFundimentals_D[5] = {
     297.8502042,
  445267.1115168,
        -0.00163,
 1.83194472e-006,
   -8.84447e-009
};
const double LunarFundimentals_M[5] = {
     357.5291092,
   35999.0502909,
      -0.0001536,
 4.08329931e-008,
             0.0
};
const double LunarFundimentals_Mp[5] = {
     134.9634114,
  477198.8676313,
        0.008997,
 1.43474081e-005,
-6.79717238e-008
};
const double LunarFundimentals_F[5] = {
      93.2720993,
  483202.0175273,
      -0.0034029,
-2.83607487e-007,
 1.15833246e-009
};


// Lunar longitude & radius terms

const LunarTerms1 LunarLonRad[60] = {
  { 0,  0,  1,  0,  6288774, -20905335 },
  { 2,  0, -1,  0,  1274027,  -3699111 },
  { 2,  0,  0,  0,   658314,  -2955968 },
  { 0,  0,  2,  0,   213618,   -569925 },
  { 0,  1,  0,  0,  -185116,     48888 },
  { 0,  0,  0,  2,  -114332,     -3149 },
  { 2,  0, -2,  0,    58793,    246158 },
  { 2, -1, -1,  0,    57066,   -152138 },
  { 2,  0,  1,  0,    53322,   -170733 },
  { 2, -1,  0,  0,    45758,   -204586 },
  { 0,  1, -1,  0,   -40923,   -129620 },
  { 1,  0,  0,  0,   -34720,    108743 },
  { 0,  1,  1,  0,   -30383,    104755 },
  { 2,  0,  0, -2,    15327,     10321 },
  { 0,  0,  1,  2,   -12528,         0 },
  { 0,  0,  1, -2,    10980,     79661 },
  { 4,  0, -1,  0,    10675,    -34782 },
  { 0,  0,  3,  0,    10034,    -23210 },
  { 4,  0, -2,  0,     8548,    -21636 },
  { 2,  1, -1,  0,    -7888,     24208 },
  { 2,  1,  0,  0,    -6766,     30824 },
  { 1,  0, -1,  0,    -5163,     -8379 },
  { 1,  1,  0,  0,     4987,    -16675 },
  { 2, -1,  1,  0,     4036,    -12831 },
  { 2,  0,  2,  0,     3994,    -10445 },
  { 4,  0,  0,  0,     3861,    -11650 },
  { 2,  0, -3,  0,     3665,     14403 },
  { 0,  1, -2,  0,    -2689,     -7003 },
  { 2,  0, -1,  2,    -2602,         0 },
  { 2, -1, -2,  0,     2390,     10056 },
  { 1,  0,  1,  0,    -2348,      6322 },
  { 2, -2,  0,  0,     2236,     -9884 },
  { 0,  1,  2,  0,    -2120,      5751 },
  { 0,  2,  0,  0,    -2069,         0 },
  { 2, -2, -1,  0,     2048,     -4950 },
  { 2,  0,  1, -2,    -1773,      4130 },
  { 2,  0,  0,  2,    -1595,         0 },
  { 4, -1, -1,  0,     1215,     -3958 },
  { 0,  0,  2,  2,    -1110,         0 },
  { 3,  0, -1,  0,     -892,      3258 },
  { 2,  1,  1,  0,     -810,      2616 },
  { 4, -1, -2,  0,      759,     -1897 },
  { 0,  2, -1,  0,     -713,     -2117 },
  { 2,  2, -1,  0,     -700,      2354 },
  { 2,  1, -2,  0,      691,         0 },
  { 2, -1,  0, -2,      596,         0 },
  { 4,  0,  1,  0,      549,     -1423 },
  { 0,  0,  4,  0,      537,     -1117 },
  { 4, -1,  0,  0,      520,     -1571 },
  { 1,  0, -2,  0,     -487,     -1739 },
  { 2,  1,  0, -2,     -399,         0 },
  { 0,  0,  2, -2,     -381,     -4421 },
  { 1,  1,  1,  0,      351,         0 },
  { 3,  0, -2,  0,     -340,         0 },
  { 4,  0, -3,  0,      330,         0 },
  { 2, -1,  2,  0,      327,         0 },
  { 0,  2,  1,  0,     -323,      1165 },
  { 1,  1, -1,  0,      299,         0 },
  { 2,  0,  3,  0,      294,         0 },
  { 2,  0, -1, -2,        0,      8752 }
};

// Lunar latitude terms

const LunarTerms2 LunarLat[60] = {
  { 0,  0,  0,  1, 5128122 },
  { 0,  0,  1,  1,  280602 },
  { 0,  0,  1, -1,  277693 },
  { 2,  0,  0, -1,  173237 },
  { 2,  0, -1,  1,   55413 },
  { 2,  0, -1, -1,   46271 },
  { 2,  0,  0,  1,   32573 },
  { 0,  0,  2,  1,   17198 },
  { 2,  0,  1, -1,    9266 },
  { 0,  0,  2, -1,    8822 },
  { 2, -1,  0, -1,    8216 },
  { 2,  0, -2, -1,    4324 },
  { 2,  0,  1,  1,    4200 },
  { 2,  1,  0, -1,   -3359 },
  { 2, -1, -1,  1,    2463 },
  { 2, -1,  0,  1,    2211 },
  { 2, -1, -1, -1,    2065 },
  { 0,  1, -1, -1,   -1870 },
  { 4,  0, -1, -1,    1828 },
  { 0,  1,  0,  1,   -1794 },
  { 0,  0,  0,  3,   -1749 },
  { 0,  1, -1,  1,   -1565 },
  { 1,  0,  0,  1,   -1491 },
  { 0,  1,  1,  1,   -1475 },
  { 0,  1,  1, -1,   -1410 },
  { 0,  1,  0, -1,   -1344 },
  { 1,  0,  0, -1,   -1335 },
  { 0,  0,  3,  1,    1107 },
  { 4,  0,  0, -1,    1021 },
  { 4,  0, -1,  1,     833 },
  { 0,  0,  1, -3,     777 },
  { 4,  0, -2,  1,     671 },
  { 2,  0,  0, -3,     607 },
  { 2,  0,  2, -1,     596 },
  { 2, -1,  1, -1,     491 },
  { 2,  0, -2,  1,    -451 },
  { 0,  0,  3, -1,     439 },
  { 2,  0,  2,  1,     422 },
  { 2,  0, -3, -1,     421 },
  { 2,  1, -1,  1,    -366 },
  { 2,  1,  0,  1,    -351 },
  { 4,  0,  0,  1,     331 },
  { 2, -1,  1,  1,     315 },
  { 2, -2,  0, -1,     302 },
  { 0,  0,  1,  3,    -283 },
  { 2,  1,  1, -1,    -229 },
  { 1,  1,  0, -1,     223 },
  { 1,  1,  0,  1,     223 },
  { 0,  1, -2, -1,    -220 },
  { 2,  1, -2, -1,    -220 },
  { 1,  0,  1,  1,    -185 },
  { 2, -1, -2, -1,     181 },
  { 0,  1,  2,  1,    -177 },
  { 4,  0, -2, -1,     176 },
  { 4, -1, -1, -1,     166 },
  { 1,  0,  1, -1,    -164 },
  { 4,  0,  1, -1,     132 },
  { 1,  0, -1, -1,    -119 },
  { 4, -1,  0, -1,     115 },
  { 2, -2,  0,  1,     107 }
};
