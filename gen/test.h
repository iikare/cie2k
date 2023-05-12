#pragma once

constexpr unsigned int test00_set_size = 34;
constexpr unsigned int test00_item_size = 20;
constexpr double test00_set[34][20] = {
  {50.0000, 2.6772, -79.7751, 2.6774, 79.8200, 271.9222, 270.9611, 0.0001, 0.6907, 1.0000, 4.6578, 1.8421, -1.7042, 2.0425, 50.0000, 0.0000, -82.7485, 0.0000, 82.7485, 270.0000}, 
  {50.0000, 3.1571, -77.2803, 3.1573, 77.3448, 272.3395, 271.1698, 0.0001, 0.6843, 1.0000, 4.6021, 1.8216, -1.7070, 2.8615, 50.0000, 0.0000, -82.7485, 0.0000, 82.7485, 270.0000}, 
  {50.0000, 2.8361, -74.0200, 2.8363, 74.0743, 272.1944, 271.0972, 0.0001, 0.6865, 1.0000, 4.5285, 1.8074, -1.7060, 3.4412, 50.0000, 0.0000, -82.7485, 0.0000, 82.7485, 270.0000}, 
  {50.0000, -1.3802, -84.2814, -1.3803, 84.2927, 269.0618, 269.5309, 0.0001, 0.7357, 1.0000, 4.7584, 1.9217, -1.6809, 1.0000, 50.0000, 0.0000, -82.7485, 0.0000, 82.7485, 270.0000}, 
  {50.0000, -1.1848, -84.8006, -1.1849, 84.8089, 269.1995, 269.5997, 0.0001, 0.7335, 1.0000, 4.7700, 1.9218, -1.6822, 1.0000, 50.0000, 0.0000, -82.7485, 0.0000, 82.7485, 270.0000}, 
  {50.0000, -0.9009, -85.5211, -0.9009, 85.5258, 269.3964, 269.6982, 0.0001, 0.7303, 1.0000, 4.7862, 1.9217, -1.6840, 1.0000, 50.0000, 0.0000, -82.7485, 0.0000, 82.7485, 270.0000}, 
  {50.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 126.8697, 0.5000, 1.2200, 1.0000, 1.0562, 1.0229, 0.0000, 2.3669, 50.0000, -1.0000, 2.0000, -1.5000, 2.5000, 126.8697}, 
  {50.0000, -1.0000, 2.0000, -1.5000, 2.5000, 126.8697, 126.8697, 0.5000, 1.2200, 1.0000, 1.0562, 1.0229, 0.0000, 2.3669, 50.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000}, 
  {50.0000, 2.4900, -0.0010, 3.7346, 3.7346, 359.9847, 269.9854, 0.4998, 0.7212, 1.0000, 1.1681, 1.0404, -0.0022, 7.1792, 50.0000, -2.4900, 0.0009, -3.7346, 3.7346, 179.9862}, 
  {50.0000, 2.4900, -0.0010, 3.7346, 3.7346, 359.9847, 269.9847, 0.4998, 0.7212, 1.0000, 1.1681, 1.0404, -0.0022, 7.1792, 50.0000, -2.4900, 0.0010, -3.7346, 3.7346, 179.9847}, 
  {50.0000, 2.4900, -0.0010, 3.7346, 3.7346, 359.9847, 89.9839, 0.4998, 0.6175, 1.0000, 1.1681, 1.0346, 0.0000, 7.2195, 50.0000, -2.4900, 0.0011, -3.7346, 3.7346, 179.9831}, 
  {50.0000, 2.4900, -0.0010, 3.7346, 3.7346, 359.9847, 89.9831, 0.4998, 0.6175, 1.0000, 1.1681, 1.0346, 0.0000, 7.2195, 50.0000, -2.4900, 0.0012, -3.7346, 3.7346, 179.9816}, 
  {50.0000, -0.0010, 2.4900, -0.0015, 2.4900, 90.0345, 180.0328, 0.4998, 0.9779, 1.0000, 1.1121, 1.0365, 0.0000, 4.8045, 50.0000, 0.0009, -2.4900, 0.0013, 2.4900, 270.0311}, 
  {50.0000, -0.0010, 2.4900, -0.0015, 2.4900, 90.0345, 180.0345, 0.4998, 0.9779, 1.0000, 1.1121, 1.0365, 0.0000, 4.8045, 50.0000, 0.0010, -2.4900, 0.0015, 2.4900, 270.0345}, 
  {50.0000, -0.0010, 2.4900, -0.0015, 2.4900, 90.0345, 0.0362, 0.4998, 1.3197, 1.0000, 1.1121, 1.0493, 0.0000, 4.7461, 50.0000, 0.0011, -2.4900, 0.0016, 2.4900, 270.0380}, 
  {50.0000, 2.5000, 0.0000, 3.7496, 3.7496, 0.0000, 315.0000, 0.4998, 0.8454, 1.0000, 1.1406, 1.0396, -0.0001, 4.3065, 50.0000, 0.0000, -2.5000, 0.0000, 2.5000, 270.0000}, 
  {50.0000, 2.5000, 0.0000, 3.4569, 3.4569, 0.0000, 346.2470, 0.3827, 1.4453, 1.1608, 1.9547, 1.4599, -0.0003, 27.1492, 73.0000, 25.0000, -18.0000, 34.5687, 38.9743, 332.4939}, 
  {50.0000, 2.5000, 0.0000, 3.4954, 3.4954, 0.0000, 51.7766, 0.3981, 0.6447, 1.0640, 1.7498, 1.1612, 0.0000, 22.8977, 61.0000, -5.0000, 29.0000, -6.9907, 29.8307, 103.5532}, 
  {50.0000, 2.5000, 0.0000, 3.5514, 3.5514, 0.0000, 272.2362, 0.4206, 0.6521, 1.0251, 1.9455, 1.2055, -0.8219, 31.9030, 56.0000, -27.0000, -3.0000, -38.3556, 38.4728, 184.4723}, 
  {50.0000, 2.5000, 0.0000, 3.5244, 3.5244, 0.0000, 11.9548, 0.4098, 1.1031, 1.0400, 1.9120, 1.3353, 0.0000, 19.4535, 58.0000, 24.0000, 15.0000, 33.8342, 37.0102, 23.9095}, 
  {50.0000, 2.5000, 0.0000, 3.7494, 3.7494, 0.0000, 3.5056, 0.4997, 1.2616, 1.0000, 1.1923, 1.0808, 0.0000, 1.0000, 50.0000, 3.1736, 0.5854, 4.7596, 4.7954, 7.0113}, 
  {50.0000, 2.5000, 0.0000, 3.7493, 3.7493, 0.0000, 0.0000, 0.4997, 1.3202, 1.0000, 1.1956, 1.0861, 0.0000, 1.0000, 50.0000, 3.2972, 0.0000, 4.9450, 4.9450, 0.0000}, 
  {50.0000, 2.5000, 0.0000, 3.7497, 3.7497, 0.0000, 5.8190, 0.4999, 1.2197, 1.0000, 1.1486, 1.0604, 0.0000, 1.0000, 50.0000, 1.8634, 0.5757, 2.7949, 2.8536, 11.6380}, 
  {50.0000, 2.5000, 0.0000, 3.7493, 3.7493, 0.0000, 1.9603, 0.4997, 1.2883, 1.0000, 1.1946, 1.0836, 0.0000, 1.0000, 50.0000, 3.2592, 0.3350, 4.8879, 4.8994, 3.9206}, 
  {60.2574, -34.0099, 36.2677, -34.0678, 49.7590, 133.2085, 132.0835, 0.0017, 1.3010, 1.1427, 3.2946, 1.9951, 0.0000, 1.2644, 60.4626, -34.1751, 39.4387, -34.2333, 52.2238, 130.9584}, 
  {63.0109, -31.0961, -5.8663, -32.6194, 33.1427, 190.1951, 188.8221, 0.0490, 0.9402, 1.1831, 2.4549, 1.4560, 0.0000, 1.2630, 62.8187, -29.7946, -4.0864, -31.2542, 31.5202, 187.4490}, 
  {61.2901, 3.7196, -5.3901, 5.5668, 7.7487, 315.9240, 310.0313, 0.4966, 0.6952, 1.1586, 1.3092, 1.0717, -0.0032, 1.8731, 61.4292, 2.2480, -4.9620, 3.3644, 5.9950, 304.1385}, 
  {35.0831, -44.1164, 3.7933, -44.3939, 44.5557, 175.1161, 176.4290, 0.0063, 1.0168, 1.2148, 2.9105, 1.6476, 0.0000, 1.8645, 35.0232, -40.0716, 1.5901, -40.3237, 40.3550, 177.7418}, 
  {22.7233, 20.0904, -46.6940, 20.1424, 50.8532, 293.3339, 291.3809, 0.0026, 0.3636, 1.4014, 3.1597, 1.2617, -1.2537, 2.0373, 23.0331, 14.9730, -42.5619, 15.0118, 45.1317, 289.4279}, 
  {36.4612, 47.8580, 18.3852, 47.9197, 51.3256, 20.9901, 21.8781, 0.0013, 0.9239, 1.1943, 3.3888, 1.7357, 0.0000, 1.4146, 36.2715, 50.5065, 21.2231, 50.5716, 54.8444, 22.7660}, 
  {90.8027, -2.0831, 1.4410, -3.1245, 3.4408, 155.2410, 167.1011, 0.4999, 1.1546, 1.6110, 1.1329, 1.0511, 0.0000, 1.4441, 91.1528, -1.6435, 0.0447, -2.4651, 2.4655, 178.9612}, 
  {90.9257, -0.5406, -0.9208, -0.8109, 1.2270, 228.6315, 218.4363, 0.5000, 1.3916, 1.5930, 1.0620, 1.0288, 0.0000, 1.5381, 88.6381, -0.8985, -0.7239, -1.3477, 1.5298, 208.2412}, 
  {6.7747, -0.2908, -2.4247, -0.4362, 2.4636, 259.8025, 263.0049, 0.4999, 0.9556, 1.6517, 1.1057, 1.0337, -0.0004, 0.6377, 5.8714, -0.0985, -2.2286, -0.1477, 2.2335, 266.2073}, 
  {2.0776, 0.0795, -1.1350, 0.1192, 1.1412, 275.9978, 268.0910, 0.5000, 0.7826, 1.7246, 1.0383, 1.0100, 0.0000, 0.9082, 0.9033, -0.0636, -0.5514, -0.0954, 0.5596, 260.1842}, 
};

constexpr unsigned int test94_set_size = 20;
constexpr unsigned int test94_item_size = 7;
constexpr double test94_set[20][7] = {
  {53.0, 0.65, 0.15, 33.0, -0.45, -0.1, 20.03112}, 
  {42.0, -0.3, 0.1, 74.0, -0.2, -0.15, 32.001118}, 
  {12.0, -1.0, -0.45, 32.0, 0.3, 0.9, 20.084782}, 
  {94.0, -0.1, -0.55, 77.0, 0.5, 0.45, 17.03928}, 
  {75.0, -0.8, 0.35, 46.0, -0.6, -0.85, 29.02483}, 
  {83.0, -0.65, -0.7, 67.0, 0.75, 0.0, 16.074173}, 
  {70.0, -0.7, 0.9, 54.0, 0.35, -0.95, 16.13608}, 
  {81.0, 0.45, -0.8, 53.0, -0.35, 0.05, 28.023375}, 
  {40.0, -0.2, -0.65, 25.0, -1.0, 0.8, 15.088856}, 
  {66.0, 0.85, -0.7, 93.0, 0.55, 0.15, 27.014244}, 
  {44.0, -0.5, 0.5, 23.0, -0.9, 0.5, 21.00363}, 
  {67.0, 0.4, 0.25, 42.0, -0.25, 0.6, 25.010727}, 
  {32.0, 0.6, 0.55, 86.0, 0.0, 0.25, 54.003925}, 
  {96.0, -0.15, -0.9, 87.0, 0.25, -0.3, 9.027307}, 
  {100.0, -0.6, 0.3, 61.0, -0.25, -0.75, 39.015385}, 
  {2.0, -0.2, -0.65, 73.0, -0.3, 0.65, 71.01173}, 
  {74.0, 0.1, -0.65, 96.0, -0.5, 0.8, 22.05474}, 
  {22.0, -0.3, -0.85, 64.0, -0.65, -0.95, 42.0015}, 
  {73.0, -0.35, 0.3, 38.0, 0.25, -1.0, 35.02875}, 
  {91.0, 0.6, 0.45, 82.0, -0.25, 0.2, 9.042115}, 
};
