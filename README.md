# cie2k
ciede2000 algorithm implementation.

following the algorithm described in _The CIEDE2000 Color-Difference Formula: Implementation Notes, 
Supplementary Test Data, and Mathematical Observations" by Gaurav Sharma, Wencheng Wu, Edul N. Dalal_

run `make` to run a test program.

this test program uses data supplied by the paper authors.

to use the algorithm call `cie2k::deltaE<T>()` (in `src/cie2k.h`) following the specifications given.
