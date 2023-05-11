# cie2k
template-based header-only CIE algorithm implementations.

this library supports CIEDE2000, CIE94, and CIE76 color distance algorithms.

implementation of CIEDE2000 follows the algorithm described in _The CIEDE2000 Color-Difference Formula: Implementation Notes, 
Supplementary Test Data, and Mathematical Observations" by Gaurav Sharma, Wencheng Wu, Edul N. Dalal_.

run `make` to run a test program.

this test program uses data supplied by the authors of the aforementioned paper.

to use the algorithm call `cie2k::deltaE<T>()` (implemented in `src/cie2k.h`) following the specifications given.

to specify an explicit algorithm to use (default is CIEDE2000), use `cie2k::deltaE<T, cie2k::TYPE::*>()`.
