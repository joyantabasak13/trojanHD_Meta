#ifndef c5315_H
#define c5315_H

#include "component.h"

class c5315:public component {
    /********** input **********/
	input N1, N4, N11, N14, N17, N20, N23, N24, N25, N26, N27, N31, N34, N37, N40, N43, N46, N49, N52, N53, N54, N61, N64, N67, N70, N73, N76, N79, N80, N81, N82, N83, N86, N87, N88, N91, N94, N97, N100, N103, N106, N109, N112, N113, N114, N115, N116, N117, N118, N119, N120, N121, N122, N123, N126, N127, N128, N129, N130, N131, N132, N135, N136, N137, N140, N141, N145, N146, N149, N152, N155, N158, N161, N164, N167, N170, N173, N176, N179, N182, N185, N188, N191, N194, N197, N200, N203, N206, N209, N210, N217, N218, N225, N226, N233, N234, N241, N242, N245, N248, N251, N254, N257, N264, N265, N272, N273, N280, N281, N288, N289, N292, N293, N299, N302, N307, N308, N315, N316, N323, N324, N331, N332, N335, N338, N341, N348, N351, N358, N361, N366, N369, N372, N373, N374, N386, N389, N400, N411, N422, N435, N446, N457, N468, N479, N490, N503, N514, N523, N534, N545, N549, N552, N556, N559, N562, N566, N571, N574, N577, N580, N583, N588, N591, N592, N595, N596, N597, N598, N599, N603, N607, N610, N613, N616, N619, N625, N631;

    /********** output **********/
	output N709, N816, N1066, N1137, N1138, N1139, N1140, N1141, N1142, N1143, N1144, N1145, N1147, N1152, N1153, N1154, N1155, N1972, N2054, N2060, N2061, N2139, N2142, N2309, N2387, N2527, N2584, N2590, N2623, N3357, N3358, N3359, N3360, N3604, N3613, N4272, N4275, N4278, N4279, N4737, N4738, N4739, N4740, N5240, N5388, N6641, N6643, N6646, N6648, N6716, N6877, N6924, N6925, N6926, N6927, N7015, N7363, N7365, N7432, N7449, N7465, N7466, N7467, N7469, N7470, N7471, N7472, N7473, N7474, N7476, N7503, N7504, N7506, N7511, N7515, N7516, N7517, N7518, N7519, N7520, N7521, N7522, N7600, N7601, N7602, N7603, N7604, N7605, N7606, N7607, N7626, N7698, N7699, N7700, N7701, N7702, N7703, N7704, N7705, N7706, N7707, N7735, N7736, N7737, N7738, N7739, N7740, N7741, N7742, N7754, N7755, N7756, N7757, N7758, N7759, N7760, N7761, N8075, N8076, N8123, N8124, N8127, N8128;

    /********** wires **********/
	wire N1042, N1043, N1067, N1080, N1092, N1104, N1146, N1148, N1149, N1150, N1151, N1156, N1157, N1161, N1173, N1185, N1197, N1209, N1213, N1216, N1219, N1223, N1235, N1247, N1259, N1271, N1280, N1292, N1303, N1315, N1327, N1339, N1351, N1363, N1375, N1378, N1381, N1384, N1387, N1390, N1393, N1396, N1415, N1418, N1421, N1424, N1427, N1430, N1433, N1436, N1455, N1462, N1469, N1475, N1479, N1482, N1492, N1495, N1498, N1501, N1504, N1507, N1510, N1513, N1516, N1519, N1522, N1525, N1542, N1545, N1548, N1551, N1554, N1557, N1560, N1563, N1566, N1573, N1580, N1583, N1588, N1594, N1597, N1600, N1603, N1606, N1609, N1612, N1615, N1618, N1621, N1624, N1627, N1630, N1633, N1636, N1639, N1642, N1645, N1648, N1651, N1654, N1657, N1660, N1663, N1675, N1685, N1697, N1709, N1721, N1727, N1731, N1743, N1755, N1758, N1761, N1769, N1777, N1785, N1793, N1800, N1807, N1814, N1821, N1824, N1827, N1830, N1833, N1836, N1839, N1842, N1845, N1848, N1851, N1854, N1857, N1860, N1863, N1866, N1869, N1872, N1875, N1878, N1881, N1884, N1887, N1890, N1893, N1896, N1899, N1902, N1905, N1908, N1911, N1914, N1917, N1920, N1923, N1926, N1929, N1932, N1935, N1938, N1941, N1944, N1947, N1950, N1953, N1956, N1959, N1962, N1965, N1968, N2349, N2350, N2585, N2586, N2587, N2588, N2589, N2591, N2592, N2593, N2594, N2595, N2596, N2597, N2598, N2599, N2600, N2601, N2602, N2603, N2604, N2605, N2606, N2607, N2608, N2609, N2610, N2611, N2612, N2613, N2614, N2615, N2616, N2617, N2618, N2619, N2620, N2621, N2622, N2624, N2625, N2626, N2627, N2628, N2629, N2630, N2631, N2632, N2633, N2634, N2635, N2636, N2637, N2638, N2639, N2640, N2641, N2642, N2643, N2644, N2645, N2646, N2647, N2653, N2664, N2675, N2681, N2692, N2703, N2704, N2709, N2710, N2711, N2712, N2713, N2714, N2715, N2716, N2717, N2718, N2719, N2720, N2721, N2722, N2728, N2739, N2750, N2756, N2767, N2778, N2779, N2790, N2801, N2812, N2823, N2824, N2825, N2826, N2827, N2828, N2829, N2830, N2831, N2832, N2833, N2834, N2835, N2836, N2837, N2838, N2839, N2840, N2841, N2842, N2843, N2844, N2845, N2846, N2847, N2848, N2849, N2850, N2851, N2852, N2853, N2854, N2855, N2861, N2867, N2868, N2869, N2870, N2871, N2872, N2873, N2874, N2875, N2876, N2877, N2882, N2891, N2901, N2902, N2903, N2904, N2905, N2906, N2907, N2908, N2909, N2910, N2911, N2912, N2913, N2914, N2915, N2916, N2917, N2918, N2919, N2920, N2921, N2922, N2923, N2924, N2925, N2926, N2927, N2928, N2929, N2930, N2931, N2932, N2933, N2934, N2935, N2936, N2937, N2938, N2939, N2940, N2941, N2942, N2948, N2954, N2955, N2956, N2957, N2958, N2959, N2960, N2961, N2962, N2963, N2964, N2969, N2970, N2971, N2972, N2973, N2974, N2975, N2976, N2977, N2978, N2979, N2980, N2981, N2982, N2983, N2984, N2985, N2986, N2987, N2988, N2989, N2990, N2991, N2992, N2993, N2994, N2995, N2996, N2997, N2998, N2999, N3000, N3003, N3006, N3007, N3010, N3013, N3014, N3015, N3016, N3017, N3018, N3019, N3020, N3021, N3022, N3023, N3024, N3025, N3026, N3027, N3028, N3029, N3030, N3031, N3032, N3033, N3034, N3035, N3038, N3041, N3052, N3063, N3068, N3071, N3072, N3073, N3074, N3075, N3086, N3097, N3108, N3119, N3130, N3141, N3142, N3143, N3144, N3145, N3146, N3147, N3158, N3169, N3180, N3191, N3194, N3195, N3196, N3197, N3198, N3199, N3200, N3203, N3401, N3402, N3403, N3404, N3405, N3406, N3407, N3408, N3409, N3410, N3411, N3412, N3413, N3414, N3415, N3416, N3444, N3445, N3446, N3447, N3448, N3449, N3450, N3451, N3452, N3453, N3454, N3455, N3456, N3459, N3460, N3461, N3462, N3463, N3464, N3465, N3466, N3481, N3482, N3483, N3484, N3485, N3486, N3487, N3488, N3489, N3490, N3491, N3492, N3493, N3502, N3503, N3504, N3505, N3506, N3507, N3508, N3509, N3510, N3511, N3512, N3513, N3514, N3515, N3558, N3559, N3560, N3561, N3562, N3563, N3605, N3606, N3607, N3608, N3609, N3610, N3614, N3615, N3616, N3617, N3618, N3619, N3620, N3621, N3622, N3623, N3624, N3625, N3626, N3627, N3628, N3629, N3630, N3631, N3632, N3633, N3634, N3635, N3636, N3637, N3638, N3639, N3640, N3641, N3642, N3643, N3644, N3645, N3646, N3647, N3648, N3649, N3650, N3651, N3652, N3653, N3654, N3655, N3656, N3657, N3658, N3659, N3660, N3661, N3662, N3663, N3664, N3665, N3666, N3667, N3668, N3669, N3670, N3671, N3672, N3673, N3674, N3675, N3676, N3677, N3678, N3679, N3680, N3681, N3682, N3683, N3684, N3685, N3686, N3687, N3688, N3689, N3691, N3700, N3701, N3702, N3703, N3704, N3705, N3708, N3709, N3710, N3711, N3712, N3713, N3715, N3716, N3717, N3718, N3719, N3720, N3721, N3722, N3723, N3724, N3725, N3726, N3727, N3728, N3729, N3730, N3731, N3732, N3738, N3739, N3740, N3741, N3742, N3743, N3744, N3745, N3746, N3747, N3748, N3749, N3750, N3751, N3752, N3753, N3754, N3755, N3756, N3757, N3758, N3759, N3760, N3761, N3762, N3763, N3764, N3765, N3766, N3767, N3768, N3769, N3770, N3771, N3775, N3779, N3780, N3781, N3782, N3783, N3784, N3785, N3786, N3787, N3788, N3789, N3793, N3797, N3800, N3801, N3802, N3803, N3804, N3805, N3806, N3807, N3808, N3809, N3810, N3813, N3816, N3819, N3822, N3823, N3824, N3827, N3828, N3829, N3830, N3831, N3834, N3835, N3836, N3837, N3838, N3839, N3840, N3841, N3842, N3849, N3855, N3861, N3867, N3873, N3881, N3887, N3893, N3908, N3909, N3911, N3914, N3915, N3916, N3917, N3918, N3919, N3920, N3921, N3927, N3933, N3942, N3948, N3956, N3962, N3968, N3975, N3976, N3977, N3978, N3979, N3980, N3981, N3982, N3983, N3984, N3987, N3988, N3989, N3990, N3991, N3998, N4008, N4011, N4021, N4024, N4027, N4031, N4032, N4033, N4034, N4035, N4036, N4037, N4038, N4039, N4040, N4041, N4042, N4067, N4080, N4088, N4091, N4094, N4097, N4100, N4103, N4106, N4109, N4144, N4147, N4150, N4153, N4156, N4159, N4183, N4184, N4185, N4186, N4188, N4191, N4196, N4197, N4198, N4199, N4200, N4203, N4206, N4209, N4212, N4215, N4219, N4223, N4224, N4225, N4228, N4231, N4234, N4237, N4240, N4243, N4246, N4249, N4252, N4255, N4258, N4263, N4264, N4267, N4268, N4269, N4270, N4271, N4273, N4274, N4276, N4277, N4280, N4284, N4290, N4297, N4298, N4301, N4305, N4310, N4316, N4320, N4325, N4331, N4332, N4336, N4342, N4349, N4357, N4364, N4375, N4379, N4385, N4392, N4396, N4400, N4405, N4412, N4418, N4425, N4436, N4440, N4445, N4451, N4456, N4462, N4469, N4477, N4512, N4515, N4516, N4521, N4523, N4524, N4532, N4547, N4548, N4551, N4554, N4557, N4560, N4563, N4566, N4569, N4572, N4575, N4578, N4581, N4584, N4587, N4590, N4593, N4596, N4599, N4602, N4605, N4608, N4611, N4614, N4617, N4621, N4624, N4627, N4630, N4633, N4637, N4640, N4643, N4646, N4649, N4652, N4655, N4658, N4662, N4665, N4668, N4671, N4674, N4677, N4680, N4683, N4686, N4689, N4692, N4695, N4698, N4701, N4702, N4720, N4721, N4724, N4725, N4726, N4727, N4728, N4729, N4730, N4731, N4732, N4733, N4734, N4735, N4736, N4741, N4855, N4856, N4908, N4909, N4939, N4942, N4947, N4953, N4954, N4955, N4956, N4957, N4958, N4959, N4960, N4961, N4965, N4966, N4967, N4968, N4972, N4973, N4974, N4975, N4976, N4977, N4978, N4979, N4980, N4981, N4982, N4983, N4984, N4985, N4986, N4987, N5049, N5052, N5053, N5054, N5055, N5056, N5057, N5058, N5059, N5060, N5061, N5062, N5063, N5065, N5066, N5067, N5068, N5069, N5070, N5071, N5072, N5073, N5074, N5075, N5076, N5077, N5078, N5079, N5080, N5081, N5082, N5083, N5084, N5085, N5086, N5087, N5088, N5089, N5090, N5091, N5092, N5093, N5094, N5095, N5096, N5097, N5098, N5099, N5100, N5101, N5102, N5103, N5104, N5105, N5106, N5107, N5108, N5109, N5110, N5111, N5112, N5113, N5114, N5115, N5116, N5117, N5118, N5119, N5120, N5121, N5122, N5123, N5124, N5125, N5126, N5127, N5128, N5129, N5130, N5131, N5132, N5133, N5135, N5136, N5137, N5138, N5139, N5140, N5141, N5142, N5143, N5144, N5145, N5146, N5147, N5148, N5150, N5153, N5154, N5155, N5156, N5157, N5160, N5161, N5162, N5163, N5164, N5165, N5166, N5169, N5172, N5173, N5176, N5177, N5180, N5183, N5186, N5189, N5192, N5195, N5198, N5199, N5202, N5205, N5208, N5211, N5214, N5217, N5220, N5223, N5224, N5225, N5226, N5227, N5228, N5229, N5230, N5232, N5233, N5234, N5235, N5236, N5239, N5241, N5242, N5243, N5244, N5245, N5246, N5247, N5248, N5249, N5250, N5252, N5253, N5254, N5255, N5256, N5257, N5258, N5259, N5260, N5261, N5262, N5263, N5264, N5274, N5275, N5282, N5283, N5284, N5298, N5299, N5300, N5303, N5304, N5305, N5306, N5307, N5308, N5309, N5310, N5311, N5312, N5315, N5319, N5324, N5328, N5331, N5332, N5346, N5363, N5364, N5365, N5366, N5367, N5368, N5369, N5370, N5371, N5374, N5377, N5382, N5385, N5389, N5396, N5407, N5418, N5424, N5431, N5441, N5452, N5462, N5469, N5470, N5477, N5488, N5498, N5506, N5520, N5536, N5549, N5555, N5562, N5573, N5579, N5595, N5606, N5616, N5617, N5618, N5619, N5620, N5621, N5622, N5624, N5634, N5655, N5671, N5684, N5690, N5691, N5692, N5696, N5700, N5703, N5707, N5711, N5726, N5727, N5728, N5730, N5731, N5732, N5733, N5734, N5735, N5736, N5739, N5742, N5745, N5755, N5756, N5954, N5955, N5956, N6005, N6006, N6023, N6024, N6025, N6028, N6031, N6034, N6037, N6040, N6044, N6045, N6048, N6051, N6054, N6065, N6066, N6067, N6068, N6069, N6071, N6072, N6073, N6074, N6075, N6076, N6077, N6078, N6079, N6080, N6083, N6084, N6085, N6086, N6087, N6088, N6089, N6090, N6091, N6094, N6095, N6096, N6097, N6098, N6099, N6100, N6101, N6102, N6103, N6104, N6105, N6106, N6107, N6108, N6111, N6112, N6113, N6114, N6115, N6116, N6117, N6120, N6121, N6122, N6123, N6124, N6125, N6126, N6127, N6128, N6129, N6130, N6131, N6132, N6133, N6134, N6135, N6136, N6137, N6138, N6139, N6140, N6143, N6144, N6145, N6146, N6147, N6148, N6149, N6152, N6153, N6154, N6155, N6156, N6157, N6158, N6159, N6160, N6161, N6162, N6163, N6164, N6168, N6171, N6172, N6173, N6174, N6175, N6178, N6179, N6180, N6181, N6182, N6183, N6184, N6185, N6186, N6187, N6188, N6189, N6190, N6191, N6192, N6193, N6194, N6197, N6200, N6203, N6206, N6209, N6212, N6215, N6218, N6221, N6234, N6235, N6238, N6241, N6244, N6247, N6250, N6253, N6256, N6259, N6262, N6265, N6268, N6271, N6274, N6277, N6280, N6283, N6286, N6289, N6292, N6295, N6298, N6301, N6304, N6307, N6310, N6313, N6316, N6319, N6322, N6325, N6328, N6331, N6335, N6338, N6341, N6344, N6347, N6350, N6353, N6356, N6359, N6364, N6367, N6370, N6373, N6374, N6375, N6376, N6377, N6378, N6382, N6386, N6388, N6392, N6397, N6411, N6415, N6419, N6427, N6434, N6437, N6441, N6445, N6448, N6449, N6466, N6469, N6470, N6471, N6472, N6473, N6474, N6475, N6476, N6477, N6478, N6482, N6486, N6490, N6494, N6500, N6504, N6508, N6512, N6516, N6526, N6536, N6539, N6553, N6556, N6566, N6569, N6572, N6575, N6580, N6584, N6587, N6592, N6599, N6606, N6609, N6619, N6622, N6630, N6631, N6632, N6633, N6634, N6637, N6640, N6650, N6651, N6653, N6655, N6657, N6659, N6660, N6661, N6662, N6663, N6664, N6666, N6668, N6670, N6672, N6675, N6680, N6681, N6682, N6683, N6689, N6690, N6691, N6692, N6693, N6695, N6698, N6699, N6700, N6703, N6708, N6709, N6710, N6711, N6712, N6713, N6714, N6715, N6718, N6719, N6720, N6721, N6722, N6724, N6739, N6740, N6741, N6744, N6745, N6746, N6751, N6752, N6753, N6754, N6755, N6760, N6761, N6762, N6772, N6773, N6776, N6777, N6782, N6783, N6784, N6785, N6790, N6791, N6792, N6795, N6801, N6802, N6803, N6804, N6805, N6806, N6807, N6808, N6809, N6810, N6811, N6812, N6813, N6814, N6815, N6816, N6817, N6823, N6824, N6825, N6826, N6827, N6828, N6829, N6830, N6831, N6834, N6835, N6836, N6837, N6838, N6839, N6840, N6841, N6842, N6843, N6844, N6850, N6851, N6852, N6853, N6854, N6855, N6856, N6857, N6860, N6861, N6862, N6863, N6866, N6872, N6873, N6874, N6875, N6876, N6879, N6880, N6881, N6884, N6885, N6888, N6889, N6890, N6891, N6894, N6895, N6896, N6897, N6900, N6901, N6904, N6905, N6908, N6909, N6912, N6913, N6914, N6915, N6916, N6919, N6922, N6923, N6930, N6932, N6935, N6936, N6937, N6938, N6939, N6940, N6946, N6947, N6948, N6949, N6953, N6954, N6955, N6956, N6957, N6958, N6964, N6965, N6966, N6967, N6973, N6974, N6975, N6976, N6977, N6978, N6979, N6987, N6990, N6999, N7002, N7003, N7006, N7011, N7012, N7013, N7016, N7018, N7019, N7020, N7021, N7022, N7023, N7028, N7031, N7034, N7037, N7040, N7041, N7044, N7045, N7046, N7047, N7048, N7049, N7054, N7057, N7060, N7064, N7065, N7072, N7073, N7074, N7075, N7076, N7079, N7080, N7083, N7084, N7085, N7086, N7087, N7088, N7089, N7090, N7093, N7094, N7097, N7101, N7105, N7110, N7114, N7115, N7116, N7125, N7126, N7127, N7130, N7131, N7139, N7140, N7141, N7146, N7147, N7149, N7150, N7151, N7152, N7153, N7158, N7159, N7160, N7166, N7167, N7168, N7169, N7170, N7171, N7172, N7173, N7174, N7175, N7176, N7177, N7178, N7179, N7180, N7181, N7182, N7183, N7184, N7185, N7186, N7187, N7188, N7189, N7190, N7196, N7197, N7198, N7204, N7205, N7206, N7207, N7208, N7209, N7212, N7215, N7216, N7217, N7218, N7219, N7222, N7225, N7228, N7229, N7236, N7239, N7242, N7245, N7250, N7257, N7260, N7263, N7268, N7269, N7270, N7276, N7282, N7288, N7294, N7300, N7301, N7304, N7310, N7320, N7321, N7328, N7338, N7339, N7340, N7341, N7342, N7349, N7357, N7364, N7394, N7397, N7402, N7405, N7406, N7407, N7408, N7409, N7412, N7415, N7416, N7417, N7418, N7419, N7420, N7421, N7424, N7425, N7426, N7427, N7428, N7429, N7430, N7431, N7433, N7434, N7435, N7436, N7437, N7438, N7439, N7440, N7441, N7442, N7443, N7444, N7445, N7446, N7447, N7448, N7450, N7451, N7452, N7453, N7454, N7455, N7456, N7457, N7458, N7459, N7460, N7461, N7462, N7463, N7464, N7468, N7479, N7481, N7482, N7483, N7484, N7485, N7486, N7487, N7488, N7489, N7492, N7493, N7498, N7499, N7500, N7505, N7507, N7508, N7509, N7510, N7512, N7513, N7514, N7525, N7526, N7527, N7528, N7529, N7530, N7531, N7537, N7543, N7549, N7555, N7561, N7567, N7573, N7579, N7582, N7585, N7586, N7587, N7588, N7589, N7592, N7595, N7598, N7599, N7624, N7625, N7631, N7636, N7657, N7658, N7665, N7666, N7667, N7668, N7669, N7670, N7671, N7672, N7673, N7674, N7675, N7676, N7677, N7678, N7679, N7680, N7681, N7682, N7683, N7684, N7685, N7686, N7687, N7688, N7689, N7690, N7691, N7692, N7693, N7694, N7695, N7696, N7697, N7708, N7709, N7710, N7711, N7712, N7715, N7718, N7719, N7720, N7721, N7722, N7723, N7724, N7727, N7728, N7729, N7730, N7731, N7732, N7733, N7734, N7743, N7744, N7749, N7750, N7751, N7762, N7765, N7768, N7769, N7770, N7771, N7772, N7775, N7778, N7781, N7782, N7787, N7788, N7795, N7796, N7797, N7798, N7799, N7800, N7803, N7806, N7807, N7808, N7809, N7810, N7811, N7812, N7815, N7816, N7821, N7822, N7823, N7826, N7829, N7832, N7833, N7834, N7835, N7836, N7839, N7842, N7845, N7846, N7851, N7852, N7859, N7860, N7861, N7862, N7863, N7864, N7867, N7870, N7871, N7872, N7873, N7874, N7875, N7876, N7879, N7880, N7885, N7886, N7887, N7890, N7893, N7896, N7897, N7898, N7899, N7900, N7903, N7906, N7909, N7910, N7917, N7918, N7923, N7924, N7925, N7926, N7927, N7928, N7929, N7930, N7931, N7932, N7935, N7938, N7939, N7940, N7943, N7944, N7945, N7946, N7951, N7954, N7957, N7960, N7963, N7966, N7967, N7968, N7969, N7970, N7973, N7974, N7984, N7985, N7987, N7988, N7989, N7990, N7991, N7992, N7993, N7994, N7995, N7996, N7997, N7998, N8001, N8004, N8009, N8013, N8017, N8020, N8021, N8022, N8023, N8025, N8026, N8027, N8031, N8032, N8033, N8034, N8035, N8036, N8037, N8038, N8039, N8040, N8041, N8042, N8043, N8044, N8045, N8048, N8055, N8056, N8057, N8058, N8059, N8060, N8061, N8064, N8071, N8072, N8073, N8074, N8077, N8078, N8079, N8082, N8089, N8090, N8091, N8092, N8093, N8096, N8099, N8102, N8113, N8114, N8115, N8116, N8117, N8118, N8119, N8120, N8121, N8122, N8125, N8126;

public:
    c5315();
    ~c5315();
    void propagate();
    void calculateTransitionProbability();
};

#endif