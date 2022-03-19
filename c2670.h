#ifndef c2670_H
#define c2670_H

#include "component.h"

class c2670:public component {
private:
    /********** input **********/
    input N1, N2, N3, N4, N5, N6, N7, N8, N11, N14, N15, N16, N19, N20, N21, N22, N23, N24, N25, N26, N27, N28, N29, N32, N33, N34, N35, N36, N37, N40, N43, N44, N47, N48, N49, N50, N51, N52, N53, N54, N55, N56, N57, N60, N61, N62, N63, N64, N65, N66, N67, N68, N69, N72, N73, N74, N75, N76, N77, N78, N79, N80, N81, N82, N85, N86, N87, N88, N89, N90, N91, N92, N93, N94, N95, N96, N99, N100, N101, N102, N103, N104, N105, N106, N107, N108, N111, N112, N113, N114, N115, N116, N117, N118, N119, N120, N123, N124, N125, N126, N127, N128, N129, N130, N131, N132, N135, N136, N137, N138, N139, N140, N141, N142, N219, N224, N227, N230, N231, N234, N237, N241, N246, N253, N256, N259, N262, N263, N266, N269, N272, N275, N278, N281, N284, N287, N290, N294, N297, N301, N305, N309, N313, N316, N319, N322, N325, N328, N331, N334, N337, N340, N343, N346, N349, N352, N355, N143_I, N144_I, N145_I, N146_I, N147_I, N148_I, N149_I, N150_I, N151_I, N152_I, N153_I, N154_I, N155_I, N156_I, N157_I, N158_I, N159_I, N160_I, N161_I, N162_I, N163_I, N164_I, N165_I, N166_I, N167_I, N168_I, N169_I, N170_I, N171_I, N172_I, N173_I, N174_I, N175_I, N176_I, N177_I, N178_I, N179_I, N180_I, N181_I, N182_I, N183_I, N184_I, N185_I, N186_I, N187_I, N188_I, N189_I, N190_I, N191_I, N192_I, N193_I, N194_I, N195_I, N196_I, N197_I, N198_I, N199_I, N200_I, N201_I, N202_I, N203_I, N204_I, N205_I, N206_I, N207_I, N208_I, N209_I, N210_I, N211_I, N212_I, N213_I, N214_I, N215_I, N216_I, N217_I, N218_I;

    /********** output **********/
    output N398, N400, N401, N419, N420, N456, N457, N458, N487, N488, N489, N490, N491, N492, N493, N494, N792, N799, N805, N1026, N1028, N1029, N1269, N1277, N1448, N1726, N1816, N1817, N1818, N1819, N1820, N1821, N1969, N1970, N1971, N2010, N2012, N2014, N2016, N2018, N2020, N2022, N2387, N2388, N2389, N2390, N2496, N2643, N2644, N2891, N2925, N2970, N2971, N3038, N3079, N3546, N3671, N3803, N3804, N3809, N3851, N3875, N3881, N3882, N143_O, N144_O, N145_O, N146_O, N147_O, N148_O, N149_O, N150_O, N151_O, N152_O, N153_O, N154_O, N155_O, N156_O, N157_O, N158_O, N159_O, N160_O, N161_O, N162_O, N163_O, N164_O, N165_O, N166_O, N167_O, N168_O, N169_O, N170_O, N171_O, N172_O, N173_O, N174_O, N175_O, N176_O, N177_O, N178_O, N179_O, N180_O, N181_O, N182_O, N183_O, N184_O, N185_O, N186_O, N187_O, N188_O, N189_O, N190_O, N191_O, N192_O, N193_O, N194_O, N195_O, N196_O, N197_O, N198_O, N199_O, N200_O, N201_O, N202_O, N203_O, N204_O, N205_O, N206_O, N207_O, N208_O, N209_O, N210_O, N211_O, N212_O, N213_O, N214_O, N215_O, N216_O, N217_O, N218_O;

    /********** wires **********/
    wire N405, N408, N425, N485, N486, N495, N496, N499, N500, N503, N506, N509, N521, N533, N537, N543, N544, N547, N550, N562, N574, N578, N582, N594, N606, N607, N608, N609, N610, N611, N612, N613, N625, N637, N643, N650, N651, N655, N659, N663, N667, N671, N675, N679, N683, N687, N693, N699, N705, N711, N715, N719, N723, N727, N730, N733, N734, N735, N738, N741, N744, N747, N750, N753, N756, N759, N762, N765, N768, N771, N774, N777, N780, N783, N786, N800, N900, N901, N902, N903, N904, N905, N998, N999, N1027, N1032, N1033, N1034, N1037, N1042, N1053, N1064, N1065, N1066, N1067, N1068, N1069, N1070, N1075, N1086, N1097, N1098, N1099, N1100, N1101, N1102, N1113, N1124, N1125, N1126, N1127, N1128, N1129, N1133, N1137, N1140, N1141, N1142, N1143, N1144, N1145, N1146, N1157, N1168, N1169, N1170, N1171, N1172, N1173, N1178, N1184, N1185, N1186, N1187, N1188, N1189, N1190, N1195, N1200, N1205, N1210, N1211, N1212, N1213, N1214, N1215, N1216, N1219, N1222, N1225, N1228, N1231, N1234, N1237, N1240, N1243, N1246, N1249, N1250, N1251, N1254, N1257, N1260, N1263, N1266, N1275, N1276, N1302, N1351, N1352, N1353, N1354, N1355, N1395, N1396, N1397, N1398, N1399, N1422, N1423, N1424, N1425, N1426, N1427, N1440, N1441, N1449, N1450, N1451, N1452, N1453, N1454, N1455, N1456, N1457, N1458, N1459, N1460, N1461, N1462, N1463, N1464, N1465, N1466, N1467, N1468, N1469, N1470, N1471, N1472, N1473, N1474, N1475, N1476, N1477, N1478, N1479, N1480, N1481, N1482, N1483, N1484, N1485, N1486, N1487, N1488, N1489, N1490, N1491, N1492, N1493, N1494, N1495, N1496, N1499, N1502, N1506, N1510, N1513, N1516, N1519, N1520, N1521, N1522, N1523, N1524, N1525, N1526, N1527, N1528, N1529, N1530, N1531, N1532, N1533, N1534, N1535, N1536, N1537, N1538, N1539, N1540, N1541, N1542, N1543, N1544, N1545, N1546, N1547, N1548, N1549, N1550, N1551, N1552, N1553, N1557, N1561, N1564, N1565, N1566, N1567, N1568, N1569, N1570, N1571, N1572, N1573, N1574, N1575, N1576, N1577, N1578, N1581, N1582, N1585, N1588, N1591, N1596, N1600, N1606, N1612, N1615, N1619, N1624, N1628, N1631, N1634, N1637, N1642, N1647, N1651, N1656, N1676, N1681, N1686, N1690, N1708, N1770, N1773, N1776, N1777, N1778, N1781, N1784, N1785, N1795, N1798, N1801, N1804, N1807, N1808, N1809, N1810, N1811, N1813, N1814, N1815, N1822, N1823, N1824, N1827, N1830, N1831, N1832, N1833, N1836, N1841, N1848, N1852, N1856, N1863, N1870, N1875, N1880, N1885, N1888, N1891, N1894, N1897, N1908, N1909, N1910, N1911, N1912, N1913, N1914, N1915, N1916, N1917, N1918, N1919, N1928, N1929, N1930, N1931, N1932, N1933, N1934, N1935, N1936, N1939, N1940, N1941, N1942, N1945, N1948, N1951, N1954, N1957, N1960, N1963, N1966, N2028, N2029, N2030, N2031, N2032, N2033, N2034, N2040, N2041, N2042, N2043, N2046, N2049, N2052, N2055, N2058, N2061, N2064, N2067, N2070, N2073, N2076, N2079, N2095, N2098, N2101, N2104, N2107, N2110, N2113, N2119, N2120, N2125, N2126, N2127, N2128, N2135, N2141, N2144, N2147, N2150, N2153, N2154, N2155, N2156, N2157, N2158, N2171, N2172, N2173, N2174, N2175, N2176, N2177, N2178, N2185, N2188, N2191, N2194, N2197, N2200, N2201, N2204, N2207, N2210, N2213, N2216, N2219, N2234, N2235, N2236, N2237, N2250, N2266, N2269, N2291, N2294, N2297, N2298, N2300, N2301, N2302, N2303, N2304, N2305, N2306, N2307, N2308, N2309, N2310, N2311, N2312, N2313, N2314, N2315, N2316, N2317, N2318, N2319, N2320, N2321, N2322, N2323, N2324, N2325, N2326, N2327, N2328, N2329, N2330, N2331, N2332, N2333, N2334, N2335, N2336, N2337, N2338, N2339, N2340, N2354, N2355, N2356, N2357, N2358, N2359, N2364, N2365, N2366, N2367, N2368, N2372, N2373, N2374, N2375, N2376, N2377, N2382, N2386, N2391, N2395, N2400, N2403, N2406, N2407, N2408, N2409, N2410, N2411, N2412, N2413, N2414, N2415, N2416, N2417, N2421, N2425, N2428, N2429, N2430, N2431, N2432, N2433, N2434, N2437, N2440, N2443, N2446, N2449, N2452, N2453, N2454, N2457, N2460, N2463, N2466, N2469, N2472, N2475, N2478, N2481, N2484, N2487, N2490, N2493, N2503, N2504, N2510, N2511, N2521, N2528, N2531, N2534, N2537, N2540, N2544, N2545, N2546, N2547, N2548, N2549, N2550, N2551, N2552, N2553, N2563, N2564, N2565, N2566, N2567, N2568, N2579, N2603, N2607, N2608, N2609, N2610, N2611, N2612, N2613, N2617, N2618, N2619, N2620, N2621, N2624, N2628, N2629, N2630, N2631, N2632, N2633, N2634, N2635, N2636, N2638, N2645, N2646, N2652, N2655, N2656, N2659, N2663, N2664, N2665, N2666, N2667, N2668, N2669, N2670, N2671, N2672, N2673, N2674, N2675, N2676, N2677, N2678, N2679, N2680, N2681, N2684, N2687, N2690, N2693, N2694, N2695, N2696, N2697, N2698, N2699, N2700, N2701, N2702, N2703, N2706, N2707, N2708, N2709, N2710, N2719, N2720, N2726, N2729, N2738, N2743, N2747, N2748, N2749, N2750, N2751, N2760, N2761, N2766, N2771, N2772, N2773, N2774, N2775, N2776, N2777, N2778, N2781, N2782, N2783, N2784, N2789, N2790, N2791, N2792, N2793, N2796, N2800, N2803, N2806, N2809, N2810, N2811, N2812, N2817, N2820, N2826, N2829, N2830, N2831, N2837, N2838, N2839, N2840, N2841, N2844, N2854, N2859, N2869, N2874, N2877, N2880, N2881, N2882, N2885, N2888, N2894, N2895, N2896, N2897, N2898, N2899, N2900, N2901, N2914, N2915, N2916, N2917, N2918, N2919, N2920, N2921, N2931, N2938, N2939, N2963, N2972, N2975, N2978, N2981, N2984, N2985, N2986, N2989, N2992, N2995, N2998, N3001, N3004, N3007, N3008, N3009, N3010, N3013, N3016, N3019, N3022, N3025, N3028, N3029, N3030, N3035, N3036, N3037, N3039, N3044, N3045, N3046, N3047, N3048, N3049, N3050, N3053, N3054, N3055, N3056, N3057, N3058, N3059, N3060, N3061, N3064, N3065, N3066, N3067, N3068, N3069, N3070, N3071, N3072, N3073, N3074, N3075, N3076, N3088, N3091, N3110, N3113, N3137, N3140, N3143, N3146, N3149, N3152, N3157, N3160, N3163, N3166, N3169, N3172, N3175, N3176, N3177, N3178, N3180, N3187, N3188, N3189, N3190, N3191, N3192, N3193, N3194, N3195, N3196, N3197, N3208, N3215, N3216, N3217, N3218, N3219, N3220, N3222, N3223, N3230, N3231, N3238, N3241, N3244, N3247, N3250, N3253, N3256, N3259, N3262, N3265, N3268, N3271, N3274, N3277, N3281, N3282, N3283, N3284, N3286, N3288, N3289, N3291, N3293, N3295, N3296, N3299, N3301, N3302, N3304, N3306, N3308, N3309, N3312, N3314, N3315, N3318, N3321, N3324, N3327, N3330, N3333, N3334, N3335, N3336, N3337, N3340, N3344, N3348, N3352, N3356, N3360, N3364, N3367, N3370, N3374, N3378, N3382, N3386, N3390, N3394, N3397, N3400, N3401, N3402, N3403, N3404, N3405, N3406, N3409, N3410, N3412, N3414, N3416, N3418, N3420, N3422, N3428, N3430, N3432, N3434, N3436, N3438, N3440, N3450, N3453, N3456, N3459, N3478, N3479, N3480, N3481, N3482, N3483, N3484, N3485, N3486, N3487, N3488, N3489, N3490, N3491, N3492, N3493, N3494, N3496, N3498, N3499, N3500, N3501, N3502, N3503, N3504, N3505, N3506, N3507, N3508, N3509, N3510, N3511, N3512, N3513, N3515, N3517, N3522, N3525, N3528, N3531, N3534, N3537, N3540, N3543, N3551, N3552, N3553, N3554, N3555, N3556, N3557, N3558, N3559, N3563, N3564, N3565, N3566, N3567, N3568, N3569, N3570, N3576, N3579, N3585, N3588, N3592, N3593, N3594, N3595, N3596, N3597, N3598, N3599, N3600, N3603, N3608, N3612, N3615, N3616, N3622, N3629, N3630, N3631, N3632, N3633, N3634, N3635, N3640, N3644, N3647, N3648, N3654, N3661, N3662, N3667, N3668, N3669, N3670, N3691, N3692, N3693, N3694, N3695, N3696, N3697, N3716, N3717, N3718, N3719, N3720, N3721, N3722, N3723, N3726, N3727, N3728, N3729, N3730, N3731, N3732, N3733, N3734, N3735, N3736, N3737, N3740, N3741, N3742, N3743, N3744, N3745, N3746, N3747, N3748, N3749, N3750, N3753, N3754, N3758, N3761, N3762, N3767, N3771, N3774, N3775, N3778, N3779, N3780, N3790, N3793, N3794, N3802, N3805, N3806, N3807, N3808, N3811, N3812, N3813, N3814, N3815, N3816, N3817, N3818, N3819, N3820, N3821, N3822, N3823, N3826, N3827, N3834, N3835, N3836, N3837, N3838, N3839, N3840, N3843, N3852, N3857, N3858, N3859, N3864, N3869, N3870, N3876, N3877;

public:
    int n_input, n_output, n_wire;
    
    c2670();
    ~c2670();
    void propagate();
    void calculateP0andP1();
};

#endif