#include <iostream>
#include "c880.h"

c880::c880() {
    /********** Populate in_map **********/
    in_map["N1"] = &N1;
    in_map["N8"] = &N8;
    in_map["N13"] = &N13;
    in_map["N17"] = &N17;
    in_map["N26"] = &N26;
    in_map["N29"] = &N29;
    in_map["N36"] = &N36;
    in_map["N42"] = &N42;
    in_map["N51"] = &N51;
    in_map["N55"] = &N55;
    in_map["N59"] = &N59;
    in_map["N68"] = &N68;
    in_map["N72"] = &N72;
    in_map["N73"] = &N73;
    in_map["N74"] = &N74;
    in_map["N75"] = &N75;
    in_map["N80"] = &N80;
    in_map["N85"] = &N85;
    in_map["N86"] = &N86;
    in_map["N87"] = &N87;
    in_map["N88"] = &N88;
    in_map["N89"] = &N89;
    in_map["N90"] = &N90;
    in_map["N91"] = &N91;
    in_map["N96"] = &N96;
    in_map["N101"] = &N101;
    in_map["N106"] = &N106;
    in_map["N111"] = &N111;
    in_map["N116"] = &N116;
    in_map["N121"] = &N121;
    in_map["N126"] = &N126;
    in_map["N130"] = &N130;
    in_map["N135"] = &N135;
    in_map["N138"] = &N138;
    in_map["N143"] = &N143;
    in_map["N146"] = &N146;
    in_map["N149"] = &N149;
    in_map["N152"] = &N152;
    in_map["N153"] = &N153;
    in_map["N156"] = &N156;
    in_map["N159"] = &N159;
    in_map["N165"] = &N165;
    in_map["N171"] = &N171;
    in_map["N177"] = &N177;
    in_map["N183"] = &N183;
    in_map["N189"] = &N189;
    in_map["N195"] = &N195;
    in_map["N201"] = &N201;
    in_map["N207"] = &N207;
    in_map["N210"] = &N210;
    in_map["N219"] = &N219;
    in_map["N228"] = &N228;
    in_map["N237"] = &N237;
    in_map["N246"] = &N246;
    in_map["N255"] = &N255;
    in_map["N259"] = &N259;
    in_map["N260"] = &N260;
    in_map["N261"] = &N261;
    in_map["N267"] = &N267;
    in_map["N268"] = &N268;

    /********** Size of input **********/
    n_input = in_map.size();

    /********** Populate out_map **********/
    out_map["N388"] = &N388;
    out_map["N389"] = &N389;
    out_map["N390"] = &N390;
    out_map["N391"] = &N391;
    out_map["N418"] = &N418;
    out_map["N419"] = &N419;
    out_map["N420"] = &N420;
    out_map["N421"] = &N421;
    out_map["N422"] = &N422;
    out_map["N423"] = &N423;
    out_map["N446"] = &N446;
    out_map["N447"] = &N447;
    out_map["N448"] = &N448;
    out_map["N449"] = &N449;
    out_map["N450"] = &N450;
    out_map["N767"] = &N767;
    out_map["N768"] = &N768;
    out_map["N850"] = &N850;
    out_map["N863"] = &N863;
    out_map["N864"] = &N864;
    out_map["N865"] = &N865;
    out_map["N866"] = &N866;
    out_map["N874"] = &N874;
    out_map["N878"] = &N878;
    out_map["N879"] = &N879;
    out_map["N880"] = &N880;

    /********** Size of output **********/
    n_output = out_map.size();

    /********** Populate wire_map **********/
    wire_map["N269"] = &N269;
    wire_map["N270"] = &N270;
    wire_map["N273"] = &N273;
    wire_map["N276"] = &N276;
    wire_map["N279"] = &N279;
    wire_map["N280"] = &N280;
    wire_map["N284"] = &N284;
    wire_map["N285"] = &N285;
    wire_map["N286"] = &N286;
    wire_map["N287"] = &N287;
    wire_map["N290"] = &N290;
    wire_map["N291"] = &N291;
    wire_map["N292"] = &N292;
    wire_map["N293"] = &N293;
    wire_map["N294"] = &N294;
    wire_map["N295"] = &N295;
    wire_map["N296"] = &N296;
    wire_map["N297"] = &N297;
    wire_map["N298"] = &N298;
    wire_map["N301"] = &N301;
    wire_map["N302"] = &N302;
    wire_map["N303"] = &N303;
    wire_map["N304"] = &N304;
    wire_map["N305"] = &N305;
    wire_map["N306"] = &N306;
    wire_map["N307"] = &N307;
    wire_map["N308"] = &N308;
    wire_map["N309"] = &N309;
    wire_map["N310"] = &N310;
    wire_map["N316"] = &N316;
    wire_map["N317"] = &N317;
    wire_map["N318"] = &N318;
    wire_map["N319"] = &N319;
    wire_map["N322"] = &N322;
    wire_map["N323"] = &N323;
    wire_map["N324"] = &N324;
    wire_map["N325"] = &N325;
    wire_map["N326"] = &N326;
    wire_map["N327"] = &N327;
    wire_map["N328"] = &N328;
    wire_map["N329"] = &N329;
    wire_map["N330"] = &N330;
    wire_map["N331"] = &N331;
    wire_map["N332"] = &N332;
    wire_map["N333"] = &N333;
    wire_map["N334"] = &N334;
    wire_map["N335"] = &N335;
    wire_map["N336"] = &N336;
    wire_map["N337"] = &N337;
    wire_map["N338"] = &N338;
    wire_map["N339"] = &N339;
    wire_map["N340"] = &N340;
    wire_map["N341"] = &N341;
    wire_map["N342"] = &N342;
    wire_map["N343"] = &N343;
    wire_map["N344"] = &N344;
    wire_map["N345"] = &N345;
    wire_map["N346"] = &N346;
    wire_map["N347"] = &N347;
    wire_map["N348"] = &N348;
    wire_map["N349"] = &N349;
    wire_map["N350"] = &N350;
    wire_map["N351"] = &N351;
    wire_map["N352"] = &N352;
    wire_map["N353"] = &N353;
    wire_map["N354"] = &N354;
    wire_map["N355"] = &N355;
    wire_map["N356"] = &N356;
    wire_map["N357"] = &N357;
    wire_map["N360"] = &N360;
    wire_map["N363"] = &N363;
    wire_map["N366"] = &N366;
    wire_map["N369"] = &N369;
    wire_map["N375"] = &N375;
    wire_map["N376"] = &N376;
    wire_map["N379"] = &N379;
    wire_map["N382"] = &N382;
    wire_map["N385"] = &N385;
    wire_map["N392"] = &N392;
    wire_map["N393"] = &N393;
    wire_map["N399"] = &N399;
    wire_map["N400"] = &N400;
    wire_map["N401"] = &N401;
    wire_map["N402"] = &N402;
    wire_map["N403"] = &N403;
    wire_map["N404"] = &N404;
    wire_map["N405"] = &N405;
    wire_map["N406"] = &N406;
    wire_map["N407"] = &N407;
    wire_map["N408"] = &N408;
    wire_map["N409"] = &N409;
    wire_map["N410"] = &N410;
    wire_map["N411"] = &N411;
    wire_map["N412"] = &N412;
    wire_map["N413"] = &N413;
    wire_map["N414"] = &N414;
    wire_map["N415"] = &N415;
    wire_map["N416"] = &N416;
    wire_map["N417"] = &N417;
    wire_map["N424"] = &N424;
    wire_map["N425"] = &N425;
    wire_map["N426"] = &N426;
    wire_map["N427"] = &N427;
    wire_map["N432"] = &N432;
    wire_map["N437"] = &N437;
    wire_map["N442"] = &N442;
    wire_map["N443"] = &N443;
    wire_map["N444"] = &N444;
    wire_map["N445"] = &N445;
    wire_map["N451"] = &N451;
    wire_map["N460"] = &N460;
    wire_map["N463"] = &N463;
    wire_map["N466"] = &N466;
    wire_map["N475"] = &N475;
    wire_map["N476"] = &N476;
    wire_map["N477"] = &N477;
    wire_map["N478"] = &N478;
    wire_map["N479"] = &N479;
    wire_map["N480"] = &N480;
    wire_map["N481"] = &N481;
    wire_map["N482"] = &N482;
    wire_map["N483"] = &N483;
    wire_map["N488"] = &N488;
    wire_map["N489"] = &N489;
    wire_map["N490"] = &N490;
    wire_map["N491"] = &N491;
    wire_map["N492"] = &N492;
    wire_map["N495"] = &N495;
    wire_map["N498"] = &N498;
    wire_map["N499"] = &N499;
    wire_map["N500"] = &N500;
    wire_map["N501"] = &N501;
    wire_map["N502"] = &N502;
    wire_map["N503"] = &N503;
    wire_map["N504"] = &N504;
    wire_map["N505"] = &N505;
    wire_map["N506"] = &N506;
    wire_map["N507"] = &N507;
    wire_map["N508"] = &N508;
    wire_map["N509"] = &N509;
    wire_map["N510"] = &N510;
    wire_map["N511"] = &N511;
    wire_map["N512"] = &N512;
    wire_map["N513"] = &N513;
    wire_map["N514"] = &N514;
    wire_map["N515"] = &N515;
    wire_map["N516"] = &N516;
    wire_map["N517"] = &N517;
    wire_map["N518"] = &N518;
    wire_map["N519"] = &N519;
    wire_map["N520"] = &N520;
    wire_map["N521"] = &N521;
    wire_map["N522"] = &N522;
    wire_map["N523"] = &N523;
    wire_map["N524"] = &N524;
    wire_map["N525"] = &N525;
    wire_map["N526"] = &N526;
    wire_map["N527"] = &N527;
    wire_map["N528"] = &N528;
    wire_map["N529"] = &N529;
    wire_map["N530"] = &N530;
    wire_map["N533"] = &N533;
    wire_map["N536"] = &N536;
    wire_map["N537"] = &N537;
    wire_map["N538"] = &N538;
    wire_map["N539"] = &N539;
    wire_map["N540"] = &N540;
    wire_map["N541"] = &N541;
    wire_map["N542"] = &N542;
    wire_map["N543"] = &N543;
    wire_map["N544"] = &N544;
    wire_map["N547"] = &N547;
    wire_map["N550"] = &N550;
    wire_map["N551"] = &N551;
    wire_map["N552"] = &N552;
    wire_map["N553"] = &N553;
    wire_map["N557"] = &N557;
    wire_map["N561"] = &N561;
    wire_map["N565"] = &N565;
    wire_map["N569"] = &N569;
    wire_map["N573"] = &N573;
    wire_map["N577"] = &N577;
    wire_map["N581"] = &N581;
    wire_map["N585"] = &N585;
    wire_map["N586"] = &N586;
    wire_map["N587"] = &N587;
    wire_map["N588"] = &N588;
    wire_map["N589"] = &N589;
    wire_map["N590"] = &N590;
    wire_map["N593"] = &N593;
    wire_map["N596"] = &N596;
    wire_map["N597"] = &N597;
    wire_map["N600"] = &N600;
    wire_map["N605"] = &N605;
    wire_map["N606"] = &N606;
    wire_map["N609"] = &N609;
    wire_map["N615"] = &N615;
    wire_map["N616"] = &N616;
    wire_map["N619"] = &N619;
    wire_map["N624"] = &N624;
    wire_map["N625"] = &N625;
    wire_map["N628"] = &N628;
    wire_map["N631"] = &N631;
    wire_map["N632"] = &N632;
    wire_map["N635"] = &N635;
    wire_map["N640"] = &N640;
    wire_map["N641"] = &N641;
    wire_map["N644"] = &N644;
    wire_map["N650"] = &N650;
    wire_map["N651"] = &N651;
    wire_map["N654"] = &N654;
    wire_map["N659"] = &N659;
    wire_map["N660"] = &N660;
    wire_map["N661"] = &N661;
    wire_map["N662"] = &N662;
    wire_map["N665"] = &N665;
    wire_map["N669"] = &N669;
    wire_map["N670"] = &N670;
    wire_map["N673"] = &N673;
    wire_map["N677"] = &N677;
    wire_map["N678"] = &N678;
    wire_map["N682"] = &N682;
    wire_map["N686"] = &N686;
    wire_map["N687"] = &N687;
    wire_map["N692"] = &N692;
    wire_map["N696"] = &N696;
    wire_map["N697"] = &N697;
    wire_map["N700"] = &N700;
    wire_map["N704"] = &N704;
    wire_map["N705"] = &N705;
    wire_map["N708"] = &N708;
    wire_map["N712"] = &N712;
    wire_map["N713"] = &N713;
    wire_map["N717"] = &N717;
    wire_map["N721"] = &N721;
    wire_map["N722"] = &N722;
    wire_map["N727"] = &N727;
    wire_map["N731"] = &N731;
    wire_map["N732"] = &N732;
    wire_map["N733"] = &N733;
    wire_map["N734"] = &N734;
    wire_map["N735"] = &N735;
    wire_map["N736"] = &N736;
    wire_map["N737"] = &N737;
    wire_map["N738"] = &N738;
    wire_map["N739"] = &N739;
    wire_map["N740"] = &N740;
    wire_map["N741"] = &N741;
    wire_map["N742"] = &N742;
    wire_map["N743"] = &N743;
    wire_map["N744"] = &N744;
    wire_map["N745"] = &N745;
    wire_map["N746"] = &N746;
    wire_map["N747"] = &N747;
    wire_map["N748"] = &N748;
    wire_map["N749"] = &N749;
    wire_map["N750"] = &N750;
    wire_map["N751"] = &N751;
    wire_map["N752"] = &N752;
    wire_map["N753"] = &N753;
    wire_map["N754"] = &N754;
    wire_map["N755"] = &N755;
    wire_map["N756"] = &N756;
    wire_map["N757"] = &N757;
    wire_map["N758"] = &N758;
    wire_map["N759"] = &N759;
    wire_map["N760"] = &N760;
    wire_map["N761"] = &N761;
    wire_map["N762"] = &N762;
    wire_map["N763"] = &N763;
    wire_map["N764"] = &N764;
    wire_map["N765"] = &N765;
    wire_map["N766"] = &N766;
    wire_map["N769"] = &N769;
    wire_map["N770"] = &N770;
    wire_map["N771"] = &N771;
    wire_map["N772"] = &N772;
    wire_map["N773"] = &N773;
    wire_map["N777"] = &N777;
    wire_map["N778"] = &N778;
    wire_map["N781"] = &N781;
    wire_map["N782"] = &N782;
    wire_map["N785"] = &N785;
    wire_map["N786"] = &N786;
    wire_map["N787"] = &N787;
    wire_map["N788"] = &N788;
    wire_map["N789"] = &N789;
    wire_map["N790"] = &N790;
    wire_map["N791"] = &N791;
    wire_map["N792"] = &N792;
    wire_map["N793"] = &N793;
    wire_map["N794"] = &N794;
    wire_map["N795"] = &N795;
    wire_map["N796"] = &N796;
    wire_map["N802"] = &N802;
    wire_map["N803"] = &N803;
    wire_map["N804"] = &N804;
    wire_map["N805"] = &N805;
    wire_map["N806"] = &N806;
    wire_map["N807"] = &N807;
    wire_map["N808"] = &N808;
    wire_map["N809"] = &N809;
    wire_map["N810"] = &N810;
    wire_map["N811"] = &N811;
    wire_map["N812"] = &N812;
    wire_map["N813"] = &N813;
    wire_map["N814"] = &N814;
    wire_map["N815"] = &N815;
    wire_map["N819"] = &N819;
    wire_map["N822"] = &N822;
    wire_map["N825"] = &N825;
    wire_map["N826"] = &N826;
    wire_map["N827"] = &N827;
    wire_map["N828"] = &N828;
    wire_map["N829"] = &N829;
    wire_map["N830"] = &N830;
    wire_map["N831"] = &N831;
    wire_map["N832"] = &N832;
    wire_map["N833"] = &N833;
    wire_map["N834"] = &N834;
    wire_map["N835"] = &N835;
    wire_map["N836"] = &N836;
    wire_map["N837"] = &N837;
    wire_map["N838"] = &N838;
    wire_map["N839"] = &N839;
    wire_map["N840"] = &N840;
    wire_map["N841"] = &N841;
    wire_map["N842"] = &N842;
    wire_map["N843"] = &N843;
    wire_map["N844"] = &N844;
    wire_map["N845"] = &N845;
    wire_map["N846"] = &N846;
    wire_map["N847"] = &N847;
    wire_map["N848"] = &N848;
    wire_map["N849"] = &N849;
    wire_map["N851"] = &N851;
    wire_map["N852"] = &N852;
    wire_map["N853"] = &N853;
    wire_map["N854"] = &N854;
    wire_map["N855"] = &N855;
    wire_map["N856"] = &N856;
    wire_map["N857"] = &N857;
    wire_map["N858"] = &N858;
    wire_map["N859"] = &N859;
    wire_map["N860"] = &N860;
    wire_map["N861"] = &N861;
    wire_map["N862"] = &N862;
    wire_map["N867"] = &N867;
    wire_map["N868"] = &N868;
    wire_map["N869"] = &N869;
    wire_map["N870"] = &N870;
    wire_map["N871"] = &N871;
    wire_map["N872"] = &N872;
    wire_map["N873"] = &N873;
    wire_map["N875"] = &N875;
    wire_map["N876"] = &N876;
    wire_map["N877"] = &N877;

    /********** Size of wires **********/
    n_wire = wire_map.size();
	
	/********** Calculate transition probability **********/
	for(auto x:in_map) { // Initialize p0 and p1 for input with 0.5
        x.second->p0 = 0.5;
        x.second->p1 = 0.5;
    }
    calculateP0andP1();
}

c880::~c880(){}

void c880::propagate() {
    N269.state = ~(N1.state & N8.state & N13.state & N17.state);
	N270.state = ~(N1.state & N26.state & N13.state & N17.state);
	N273.state = N29.state & N36.state & N42.state;
	N276.state = N1.state & N26.state & N51.state;
	N279.state = ~(N1.state & N8.state & N51.state & N17.state);
	N280.state = ~(N1.state & N8.state & N13.state & N55.state);
	N284.state = ~(N59.state & N42.state & N68.state & N72.state);
	N285.state = ~(N29.state & N68.state);
	N286.state = ~(N59.state & N68.state & N74.state);
	N287.state = N29.state & N75.state & N80.state;
	N290.state = N29.state & N75.state & N42.state;
	N291.state = N29.state & N36.state & N80.state;
	N292.state = N29.state & N36.state & N42.state;
	N293.state = N59.state & N75.state & N80.state;
	N294.state = N59.state & N75.state & N42.state;
	N295.state = N59.state & N36.state & N80.state;
	N296.state = N59.state & N36.state & N42.state;
	N297.state = N85.state & N86.state;
	N298.state = N87.state | N88.state;
	N301.state = ~(N91.state & N96.state);
	N302.state = N91.state | N96.state;
	N303.state = ~(N101.state & N106.state);
	N304.state = N101.state | N106.state;
	N305.state = ~(N111.state & N116.state);
	N306.state = N111.state | N116.state;
	N307.state = ~(N121.state & N126.state);
	N308.state = N121.state | N126.state;
	N309.state = N8.state & N138.state;
	N310.state = ~N268.state;
	N316.state = N51.state & N138.state;
	N317.state = N17.state & N138.state;
	N318.state = N152.state & N138.state;
	N319.state = ~(N59.state & N156.state);
	N322.state = ~(N17.state | N42.state);
	N323.state = N17.state & N42.state;
	N324.state = ~(N159.state & N165.state);
	N325.state = N159.state | N165.state;
	N326.state = ~(N171.state & N177.state);
	N327.state = N171.state | N177.state;
	N328.state = ~(N183.state & N189.state);
	N329.state = N183.state | N189.state;
	N330.state = ~(N195.state & N201.state);
	N331.state = N195.state | N201.state;
	N332.state = N210.state & N91.state;
	N333.state = N210.state & N96.state;
	N334.state = N210.state & N101.state;
	N335.state = N210.state & N106.state;
	N336.state = N210.state & N111.state;
	N337.state = N255.state & N259.state;
	N338.state = N210.state & N116.state;
	N339.state = N255.state & N260.state;
	N340.state = N210.state & N121.state;
	N341.state = N255.state & N267.state;
	N342.state = ~N269.state;
	N343.state = ~N273.state;
	N344.state = N270.state | N273.state;
	N345.state = ~N276.state;
	N346.state = ~N276.state;
	N347.state = ~N279.state;
	N348.state = ~(N280.state | N284.state);
	N349.state = N280.state | N285.state;
	N350.state = N280.state | N286.state;
	N351.state = ~N293.state;
	N352.state = ~N294.state;
	N353.state = ~N295.state;
	N354.state = ~N296.state;
	N355.state = ~(N89.state & N298.state);
	N356.state = N90.state & N298.state;
	N357.state = ~(N301.state & N302.state);
	N360.state = ~(N303.state & N304.state);
	N363.state = ~(N305.state & N306.state);
	N366.state = ~(N307.state & N308.state);
	N369.state = ~N310.state;
	N375.state = ~(N322.state | N323.state);
	N376.state = ~(N324.state & N325.state);
	N379.state = ~(N326.state & N327.state);
	N382.state = ~(N328.state & N329.state);
	N385.state = ~(N330.state & N331.state);
	N388.state = N290.state;
	N389.state = N291.state;
	N390.state = N292.state;
	N391.state = N297.state;
	N392.state = N270.state | N343.state;
	N393.state = ~N345.state;
	N399.state = ~N346.state;
	N400.state = N348.state & N73.state;
	N401.state = ~N349.state;
	N402.state = ~N350.state;
	N403.state = ~N355.state;
	N404.state = ~N357.state;
	N405.state = ~N360.state;
	N406.state = N357.state & N360.state;
	N407.state = ~N363.state;
	N408.state = ~N366.state;
	N409.state = N363.state & N366.state;
	N410.state = ~(N347.state & N352.state);
	N411.state = ~N376.state;
	N412.state = ~N379.state;
	N413.state = N376.state & N379.state;
	N414.state = ~N382.state;
	N415.state = ~N385.state;
	N416.state = N382.state & N385.state;
	N417.state = N210.state & N369.state;
	N418.state = N342.state;
	N419.state = N344.state;
	N420.state = N351.state;
	N421.state = N353.state;
	N422.state = N354.state;
	N423.state = N356.state;
	N424.state = ~N400.state;
	N425.state = N404.state & N405.state;
	N426.state = N407.state & N408.state;
	N427.state = N319.state & N393.state & N55.state;
	N432.state = N393.state & N17.state & N287.state;
	N437.state = ~(N393.state & N287.state & N55.state);
	N442.state = ~(N375.state & N59.state & N156.state & N393.state);
	N443.state = ~(N393.state & N319.state & N17.state);
	N444.state = N411.state & N412.state;
	N445.state = N414.state & N415.state;
	N446.state = N392.state;
	N447.state = N399.state;
	N448.state = N401.state;
	N449.state = N402.state;
	N450.state = N403.state;
	N451.state = ~N424.state;
	N460.state = ~(N406.state | N425.state);
	N463.state = ~(N409.state | N426.state);
	N466.state = ~(N442.state & N410.state);
	N475.state = N143.state & N427.state;
	N476.state = N310.state & N432.state;
	N477.state = N146.state & N427.state;
	N478.state = N310.state & N432.state;
	N479.state = N149.state & N427.state;
	N480.state = N310.state & N432.state;
	N481.state = N153.state & N427.state;
	N482.state = N310.state & N432.state;
	N483.state = ~(N443.state & N1.state);
	N488.state = N369.state | N437.state;
	N489.state = N369.state | N437.state;
	N490.state = N369.state | N437.state;
	N491.state = N369.state | N437.state;
	N492.state = ~(N413.state | N444.state);
	N495.state = ~(N416.state | N445.state);
	N498.state = ~(N130.state & N460.state);
	N499.state = N130.state | N460.state;
	N500.state = ~(N463.state & N135.state);
	N501.state = N463.state | N135.state;
	N502.state = N91.state & N466.state;
	N503.state = ~(N475.state | N476.state);
	N504.state = N96.state & N466.state;
	N505.state = ~(N477.state | N478.state);
	N506.state = N101.state & N466.state;
	N507.state = ~(N479.state | N480.state);
	N508.state = N106.state & N466.state;
	N509.state = ~(N481.state | N482.state);
	N510.state = N143.state & N483.state;
	N511.state = N111.state & N466.state;
	N512.state = N146.state & N483.state;
	N513.state = N116.state & N466.state;
	N514.state = N149.state & N483.state;
	N515.state = N121.state & N466.state;
	N516.state = N153.state & N483.state;
	N517.state = N126.state & N466.state;
	N518.state = ~(N130.state & N492.state);
	N519.state = N130.state | N492.state;
	N520.state = ~(N495.state & N207.state);
	N521.state = N495.state | N207.state;
	N522.state = N451.state & N159.state;
	N523.state = N451.state & N165.state;
	N524.state = N451.state & N171.state;
	N525.state = N451.state & N177.state;
	N526.state = N451.state & N183.state;
	N527.state = ~(N451.state & N189.state);
	N528.state = ~(N451.state & N195.state);
	N529.state = ~(N451.state & N201.state);
	N530.state = ~(N498.state & N499.state);
	N533.state = ~(N500.state & N501.state);
	N536.state = ~(N309.state | N502.state);
	N537.state = ~(N316.state | N504.state);
	N538.state = ~(N317.state | N506.state);
	N539.state = ~(N318.state | N508.state);
	N540.state = ~(N510.state | N511.state);
	N541.state = ~(N512.state | N513.state);
	N542.state = ~(N514.state | N515.state);
	N543.state = ~(N516.state | N517.state);
	N544.state = ~(N518.state & N519.state);
	N547.state = ~(N520.state & N521.state);
	N550.state = ~N530.state;
	N551.state = ~N533.state;
	N552.state = N530.state & N533.state;
	N553.state = ~(N536.state & N503.state);
	N557.state = ~(N537.state & N505.state);
	N561.state = ~(N538.state & N507.state);
	N565.state = ~(N539.state & N509.state);
	N569.state = ~(N488.state & N540.state);
	N573.state = ~(N489.state & N541.state);
	N577.state = ~(N490.state & N542.state);
	N581.state = ~(N491.state & N543.state);
	N585.state = ~N544.state;
	N586.state = ~N547.state;
	N587.state = N544.state & N547.state;
	N588.state = N550.state & N551.state;
	N589.state = N585.state & N586.state;
	N590.state = ~(N553.state & N159.state);
	N593.state = N553.state | N159.state;
	N596.state = N246.state & N553.state;
	N597.state = ~(N557.state & N165.state);
	N600.state = N557.state | N165.state;
	N605.state = N246.state & N557.state;
	N606.state = ~(N561.state & N171.state);
	N609.state = N561.state | N171.state;
	N615.state = N246.state & N561.state;
	N616.state = ~(N565.state & N177.state);
	N619.state = N565.state | N177.state;
	N624.state = N246.state & N565.state;
	N625.state = ~(N569.state & N183.state);
	N628.state = N569.state | N183.state;
	N631.state = N246.state & N569.state;
	N632.state = ~(N573.state & N189.state);
	N635.state = N573.state | N189.state;
	N640.state = N246.state & N573.state;
	N641.state = ~(N577.state & N195.state);
	N644.state = N577.state | N195.state;
	N650.state = N246.state & N577.state;
	N651.state = ~(N581.state & N201.state);
	N654.state = N581.state | N201.state;
	N659.state = N246.state & N581.state;
	N660.state = ~(N552.state | N588.state);
	N661.state = ~(N587.state | N589.state);
	N662.state = ~N590.state;
	N665.state = N593.state & N590.state;
	N669.state = ~(N596.state | N522.state);
	N670.state = ~N597.state;
	N673.state = N600.state & N597.state;
	N677.state = ~(N605.state | N523.state);
	N678.state = ~N606.state;
	N682.state = N609.state & N606.state;
	N686.state = ~(N615.state | N524.state);
	N687.state = ~N616.state;
	N692.state = N619.state & N616.state;
	N696.state = ~(N624.state | N525.state);
	N697.state = ~N625.state;
	N700.state = N628.state & N625.state;
	N704.state = ~(N631.state | N526.state);
	N705.state = ~N632.state;
	N708.state = N635.state & N632.state;
	N712.state = ~(N337.state | N640.state);
	N713.state = ~N641.state;
	N717.state = N644.state & N641.state;
	N721.state = ~(N339.state | N650.state);
	N722.state = ~N651.state;
	N727.state = N654.state & N651.state;
	N731.state = ~(N341.state | N659.state);
	N732.state = ~(N654.state & N261.state);
	N733.state = ~(N644.state & N654.state & N261.state);
	N734.state = ~(N635.state & N644.state & N654.state & N261.state);
	N735.state = ~N662.state;
	N736.state = N228.state & N665.state;
	N737.state = N237.state & N662.state;
	N738.state = ~N670.state;
	N739.state = N228.state & N673.state;
	N740.state = N237.state & N670.state;
	N741.state = ~N678.state;
	N742.state = N228.state & N682.state;
	N743.state = N237.state & N678.state;
	N744.state = ~N687.state;
	N745.state = N228.state & N692.state;
	N746.state = N237.state & N687.state;
	N747.state = ~N697.state;
	N748.state = N228.state & N700.state;
	N749.state = N237.state & N697.state;
	N750.state = ~N705.state;
	N751.state = N228.state & N708.state;
	N752.state = N237.state & N705.state;
	N753.state = ~N713.state;
	N754.state = N228.state & N717.state;
	N755.state = N237.state & N713.state;
	N756.state = ~N722.state;
	N757.state = ~(N727.state | N261.state);
	N758.state = N727.state & N261.state;
	N759.state = N228.state & N727.state;
	N760.state = N237.state & N722.state;
	N761.state = ~(N644.state & N722.state);
	N762.state = ~(N635.state & N713.state);
	N763.state = ~(N635.state & N644.state & N722.state);
	N764.state = ~(N609.state & N687.state);
	N765.state = ~(N600.state & N678.state);
	N766.state = ~(N600.state & N609.state & N687.state);
	N767.state = N660.state;
	N768.state = N661.state;
	N769.state = ~(N736.state | N737.state);
	N770.state = ~(N739.state | N740.state);
	N771.state = ~(N742.state | N743.state);
	N772.state = ~(N745.state | N746.state);
	N773.state = ~(N750.state & N762.state & N763.state & N734.state);
	N777.state = ~(N748.state | N749.state);
	N778.state = ~(N753.state & N761.state & N733.state);
	N781.state = ~(N751.state | N752.state);
	N782.state = ~(N756.state & N732.state);
	N785.state = ~(N754.state | N755.state);
	N786.state = ~(N757.state | N758.state);
	N787.state = ~(N759.state | N760.state);
	N788.state = ~(N700.state | N773.state);
	N789.state = N700.state & N773.state;
	N790.state = ~(N708.state | N778.state);
	N791.state = N708.state & N778.state;
	N792.state = ~(N717.state | N782.state);
	N793.state = N717.state & N782.state;
	N794.state = N219.state & N786.state;
	N795.state = ~(N628.state & N773.state);
	N796.state = ~(N795.state & N747.state);
	N802.state = ~(N788.state | N789.state);
	N803.state = ~(N790.state | N791.state);
	N804.state = ~(N792.state | N793.state);
	N805.state = ~(N340.state | N794.state);
	N806.state = ~(N692.state | N796.state);
	N807.state = N692.state & N796.state;
	N808.state = N219.state & N802.state;
	N809.state = N219.state & N803.state;
	N810.state = N219.state & N804.state;
	N811.state = ~(N805.state & N787.state & N731.state & N529.state);
	N812.state = ~(N619.state & N796.state);
	N813.state = ~(N609.state & N619.state & N796.state);
	N814.state = ~(N600.state & N609.state & N619.state & N796.state);
	N815.state = ~(N738.state & N765.state & N766.state & N814.state);
	N819.state = ~(N741.state & N764.state & N813.state);
	N822.state = ~(N744.state & N812.state);
	N825.state = ~(N806.state | N807.state);
	N826.state = ~(N335.state | N808.state);
	N827.state = ~(N336.state | N809.state);
	N828.state = ~(N338.state | N810.state);
	N829.state = ~N811.state;
	N830.state = ~(N665.state | N815.state);
	N831.state = N665.state & N815.state;
	N832.state = ~(N673.state | N819.state);
	N833.state = N673.state & N819.state;
	N834.state = ~(N682.state | N822.state);
	N835.state = N682.state & N822.state;
	N836.state = N219.state & N825.state;
	N837.state = ~(N826.state & N777.state & N704.state);
	N838.state = ~(N827.state & N781.state & N712.state & N527.state);
	N839.state = ~(N828.state & N785.state & N721.state & N528.state);
	N840.state = ~N829.state;
	N841.state = ~(N815.state & N593.state);
	N842.state = ~(N830.state | N831.state);
	N843.state = ~(N832.state | N833.state);
	N844.state = ~(N834.state | N835.state);
	N845.state = ~(N334.state | N836.state);
	N846.state = ~N837.state;
	N847.state = ~N838.state;
	N848.state = ~N839.state;
	N849.state = N735.state & N841.state;
	N850.state = N840.state;
	N851.state = N219.state & N842.state;
	N852.state = N219.state & N843.state;
	N853.state = N219.state & N844.state;
	N854.state = ~(N845.state & N772.state & N696.state);
	N855.state = ~N846.state;
	N856.state = ~N847.state;
	N857.state = ~N848.state;
	N858.state = ~N849.state;
	N859.state = ~(N417.state | N851.state);
	N860.state = ~(N332.state | N852.state);
	N861.state = ~(N333.state | N853.state);
	N862.state = ~N854.state;
	N863.state = N855.state;
	N864.state = N856.state;
	N865.state = N857.state;
	N866.state = N858.state;
	N867.state = ~(N859.state & N769.state & N669.state);
	N868.state = ~(N860.state & N770.state & N677.state);
	N869.state = ~(N861.state & N771.state & N686.state);
	N870.state = ~N862.state;
	N871.state = ~N867.state;
	N872.state = ~N868.state;
	N873.state = ~N869.state;
	N874.state = N870.state;
	N875.state = ~N871.state;
	N876.state = ~N872.state;
	N877.state = ~N873.state;
	N878.state = N875.state;
	N879.state = N876.state;
	N880.state = N877.state;
}

void c880::calculateP0andP1() {
    // nand
	N269.p0 = N1.p1 * N8.p1 * N13.p1 * N17.p1;
	N269.p1 = 1 - N269.p0;

	// nand
	N270.p0 = N1.p1 * N26.p1 * N13.p1 * N17.p1;
	N270.p1 = 1 - N270.p0;

	// and
	N273.p1 = N29.p1 * N36.p1 * N42.p1;
	N273.p0 = 1 - N273.p1;

	// and
	N276.p1 = N1.p1 * N26.p1 * N51.p1;
	N276.p0 = 1 - N276.p1;

	// nand
	N279.p0 = N1.p1 * N8.p1 * N51.p1 * N17.p1;
	N279.p1 = 1 - N279.p0;

	// nand
	N280.p0 = N1.p1 * N8.p1 * N13.p1 * N55.p1;
	N280.p1 = 1 - N280.p0;

	// nand
	N284.p0 = N59.p1 * N42.p1 * N68.p1 * N72.p1;
	N284.p1 = 1 - N284.p0;

	// nand
	N285.p0 = N29.p1 * N68.p1;
	N285.p1 = 1 - N285.p0;

	// nand
	N286.p0 = N59.p1 * N68.p1 * N74.p1;
	N286.p1 = 1 - N286.p0;

	// and
	N287.p1 = N29.p1 * N75.p1 * N80.p1;
	N287.p0 = 1 - N287.p1;

	// and
	N290.p1 = N29.p1 * N75.p1 * N42.p1;
	N290.p0 = 1 - N290.p1;

	// and
	N291.p1 = N29.p1 * N36.p1 * N80.p1;
	N291.p0 = 1 - N291.p1;

	// and
	N292.p1 = N29.p1 * N36.p1 * N42.p1;
	N292.p0 = 1 - N292.p1;

	// and
	N293.p1 = N59.p1 * N75.p1 * N80.p1;
	N293.p0 = 1 - N293.p1;

	// and
	N294.p1 = N59.p1 * N75.p1 * N42.p1;
	N294.p0 = 1 - N294.p1;

	// and
	N295.p1 = N59.p1 * N36.p1 * N80.p1;
	N295.p0 = 1 - N295.p1;

	// and
	N296.p1 = N59.p1 * N36.p1 * N42.p1;
	N296.p0 = 1 - N296.p1;

	// and
	N297.p1 = N85.p1 * N86.p1;
	N297.p0 = 1 - N297.p1;

	// or
	N298.p0 = N87.p0 * N88.p0;
	N298.p1 = 1 - N298.p0;

	// nand
	N301.p0 = N91.p1 * N96.p1;
	N301.p1 = 1 - N301.p0;

	// or
	N302.p0 = N91.p0 * N96.p0;
	N302.p1 = 1 - N302.p0;

	// nand
	N303.p0 = N101.p1 * N106.p1;
	N303.p1 = 1 - N303.p0;

	// or
	N304.p0 = N101.p0 * N106.p0;
	N304.p1 = 1 - N304.p0;

	// nand
	N305.p0 = N111.p1 * N116.p1;
	N305.p1 = 1 - N305.p0;

	// or
	N306.p0 = N111.p0 * N116.p0;
	N306.p1 = 1 - N306.p0;

	// nand
	N307.p0 = N121.p1 * N126.p1;
	N307.p1 = 1 - N307.p0;

	// or
	N308.p0 = N121.p0 * N126.p0;
	N308.p1 = 1 - N308.p0;

	// and
	N309.p1 = N8.p1 * N138.p1;
	N309.p0 = 1 - N309.p1;

	// not
	N310.p0 = N268.p1;
	N310.p1 = 1 - N310.p0;

	// and
	N316.p1 = N51.p1 * N138.p1;
	N316.p0 = 1 - N316.p1;

	// and
	N317.p1 = N17.p1 * N138.p1;
	N317.p0 = 1 - N317.p1;

	// and
	N318.p1 = N152.p1 * N138.p1;
	N318.p0 = 1 - N318.p1;

	// nand
	N319.p0 = N59.p1 * N156.p1;
	N319.p1 = 1 - N319.p0;

	// nor
	N322.p1 = N17.p0 * N42.p0;
	N322.p0 = 1 - N322.p1;

	// and
	N323.p1 = N17.p1 * N42.p1;
	N323.p0 = 1 - N323.p1;

	// nand
	N324.p0 = N159.p1 * N165.p1;
	N324.p1 = 1 - N324.p0;

	// or
	N325.p0 = N159.p0 * N165.p0;
	N325.p1 = 1 - N325.p0;

	// nand
	N326.p0 = N171.p1 * N177.p1;
	N326.p1 = 1 - N326.p0;

	// or
	N327.p0 = N171.p0 * N177.p0;
	N327.p1 = 1 - N327.p0;

	// nand
	N328.p0 = N183.p1 * N189.p1;
	N328.p1 = 1 - N328.p0;

	// or
	N329.p0 = N183.p0 * N189.p0;
	N329.p1 = 1 - N329.p0;

	// nand
	N330.p0 = N195.p1 * N201.p1;
	N330.p1 = 1 - N330.p0;

	// or
	N331.p0 = N195.p0 * N201.p0;
	N331.p1 = 1 - N331.p0;

	// and
	N332.p1 = N210.p1 * N91.p1;
	N332.p0 = 1 - N332.p1;

	// and
	N333.p1 = N210.p1 * N96.p1;
	N333.p0 = 1 - N333.p1;

	// and
	N334.p1 = N210.p1 * N101.p1;
	N334.p0 = 1 - N334.p1;

	// and
	N335.p1 = N210.p1 * N106.p1;
	N335.p0 = 1 - N335.p1;

	// and
	N336.p1 = N210.p1 * N111.p1;
	N336.p0 = 1 - N336.p1;

	// and
	N337.p1 = N255.p1 * N259.p1;
	N337.p0 = 1 - N337.p1;

	// and
	N338.p1 = N210.p1 * N116.p1;
	N338.p0 = 1 - N338.p1;

	// and
	N339.p1 = N255.p1 * N260.p1;
	N339.p0 = 1 - N339.p1;

	// and
	N340.p1 = N210.p1 * N121.p1;
	N340.p0 = 1 - N340.p1;

	// and
	N341.p1 = N255.p1 * N267.p1;
	N341.p0 = 1 - N341.p1;

	// not
	N342.p0 = N269.p1;
	N342.p1 = 1 - N342.p0;

	// not
	N343.p0 = N273.p1;
	N343.p1 = 1 - N343.p0;

	// or
	N344.p0 = N270.p0 * N273.p0;
	N344.p1 = 1 - N344.p0;

	// not
	N345.p0 = N276.p1;
	N345.p1 = 1 - N345.p0;

	// not
	N346.p0 = N276.p1;
	N346.p1 = 1 - N346.p0;

	// not
	N347.p0 = N279.p1;
	N347.p1 = 1 - N347.p0;

	// nor
	N348.p1 = N280.p0 * N284.p0;
	N348.p0 = 1 - N348.p1;

	// or
	N349.p0 = N280.p0 * N285.p0;
	N349.p1 = 1 - N349.p0;

	// or
	N350.p0 = N280.p0 * N286.p0;
	N350.p1 = 1 - N350.p0;

	// not
	N351.p0 = N293.p1;
	N351.p1 = 1 - N351.p0;

	// not
	N352.p0 = N294.p1;
	N352.p1 = 1 - N352.p0;

	// not
	N353.p0 = N295.p1;
	N353.p1 = 1 - N353.p0;

	// not
	N354.p0 = N296.p1;
	N354.p1 = 1 - N354.p0;

	// nand
	N355.p0 = N89.p1 * N298.p1;
	N355.p1 = 1 - N355.p0;

	// and
	N356.p1 = N90.p1 * N298.p1;
	N356.p0 = 1 - N356.p1;

	// nand
	N357.p0 = N301.p1 * N302.p1;
	N357.p1 = 1 - N357.p0;

	// nand
	N360.p0 = N303.p1 * N304.p1;
	N360.p1 = 1 - N360.p0;

	// nand
	N363.p0 = N305.p1 * N306.p1;
	N363.p1 = 1 - N363.p0;

	// nand
	N366.p0 = N307.p1 * N308.p1;
	N366.p1 = 1 - N366.p0;

	// not
	N369.p0 = N310.p1;
	N369.p1 = 1 - N369.p0;

	// nor
	N375.p1 = N322.p0 * N323.p0;
	N375.p0 = 1 - N375.p1;

	// nand
	N376.p0 = N324.p1 * N325.p1;
	N376.p1 = 1 - N376.p0;

	// nand
	N379.p0 = N326.p1 * N327.p1;
	N379.p1 = 1 - N379.p0;

	// nand
	N382.p0 = N328.p1 * N329.p1;
	N382.p1 = 1 - N382.p0;

	// nand
	N385.p0 = N330.p1 * N331.p1;
	N385.p1 = 1 - N385.p0;

	// buf
	N388.p1 = N290.p1;
	N388.p0 = 1 - N388.p1;

	// buf
	N389.p1 = N291.p1;
	N389.p0 = 1 - N389.p1;

	// buf
	N390.p1 = N292.p1;
	N390.p0 = 1 - N390.p1;

	// buf
	N391.p1 = N297.p1;
	N391.p0 = 1 - N391.p1;

	// or
	N392.p0 = N270.p0 * N343.p0;
	N392.p1 = 1 - N392.p0;

	// not
	N393.p0 = N345.p1;
	N393.p1 = 1 - N393.p0;

	// not
	N399.p0 = N346.p1;
	N399.p1 = 1 - N399.p0;

	// and
	N400.p1 = N348.p1 * N73.p1;
	N400.p0 = 1 - N400.p1;

	// not
	N401.p0 = N349.p1;
	N401.p1 = 1 - N401.p0;

	// not
	N402.p0 = N350.p1;
	N402.p1 = 1 - N402.p0;

	// not
	N403.p0 = N355.p1;
	N403.p1 = 1 - N403.p0;

	// not
	N404.p0 = N357.p1;
	N404.p1 = 1 - N404.p0;

	// not
	N405.p0 = N360.p1;
	N405.p1 = 1 - N405.p0;

	// and
	N406.p1 = N357.p1 * N360.p1;
	N406.p0 = 1 - N406.p1;

	// not
	N407.p0 = N363.p1;
	N407.p1 = 1 - N407.p0;

	// not
	N408.p0 = N366.p1;
	N408.p1 = 1 - N408.p0;

	// and
	N409.p1 = N363.p1 * N366.p1;
	N409.p0 = 1 - N409.p1;

	// nand
	N410.p0 = N347.p1 * N352.p1;
	N410.p1 = 1 - N410.p0;

	// not
	N411.p0 = N376.p1;
	N411.p1 = 1 - N411.p0;

	// not
	N412.p0 = N379.p1;
	N412.p1 = 1 - N412.p0;

	// and
	N413.p1 = N376.p1 * N379.p1;
	N413.p0 = 1 - N413.p1;

	// not
	N414.p0 = N382.p1;
	N414.p1 = 1 - N414.p0;

	// not
	N415.p0 = N385.p1;
	N415.p1 = 1 - N415.p0;

	// and
	N416.p1 = N382.p1 * N385.p1;
	N416.p0 = 1 - N416.p1;

	// and
	N417.p1 = N210.p1 * N369.p1;
	N417.p0 = 1 - N417.p1;

	// buf
	N418.p1 = N342.p1;
	N418.p0 = 1 - N418.p1;

	// buf
	N419.p1 = N344.p1;
	N419.p0 = 1 - N419.p1;

	// buf
	N420.p1 = N351.p1;
	N420.p0 = 1 - N420.p1;

	// buf
	N421.p1 = N353.p1;
	N421.p0 = 1 - N421.p1;

	// buf
	N422.p1 = N354.p1;
	N422.p0 = 1 - N422.p1;

	// buf
	N423.p1 = N356.p1;
	N423.p0 = 1 - N423.p1;

	// not
	N424.p0 = N400.p1;
	N424.p1 = 1 - N424.p0;

	// and
	N425.p1 = N404.p1 * N405.p1;
	N425.p0 = 1 - N425.p1;

	// and
	N426.p1 = N407.p1 * N408.p1;
	N426.p0 = 1 - N426.p1;

	// and
	N427.p1 = N319.p1 * N393.p1 * N55.p1;
	N427.p0 = 1 - N427.p1;

	// and
	N432.p1 = N393.p1 * N17.p1 * N287.p1;
	N432.p0 = 1 - N432.p1;

	// nand
	N437.p0 = N393.p1 * N287.p1 * N55.p1;
	N437.p1 = 1 - N437.p0;

	// nand
	N442.p0 = N375.p1 * N59.p1 * N156.p1 * N393.p1;
	N442.p1 = 1 - N442.p0;

	// nand
	N443.p0 = N393.p1 * N319.p1 * N17.p1;
	N443.p1 = 1 - N443.p0;

	// and
	N444.p1 = N411.p1 * N412.p1;
	N444.p0 = 1 - N444.p1;

	// and
	N445.p1 = N414.p1 * N415.p1;
	N445.p0 = 1 - N445.p1;

	// buf
	N446.p1 = N392.p1;
	N446.p0 = 1 - N446.p1;

	// buf
	N447.p1 = N399.p1;
	N447.p0 = 1 - N447.p1;

	// buf
	N448.p1 = N401.p1;
	N448.p0 = 1 - N448.p1;

	// buf
	N449.p1 = N402.p1;
	N449.p0 = 1 - N449.p1;

	// buf
	N450.p1 = N403.p1;
	N450.p0 = 1 - N450.p1;

	// not
	N451.p0 = N424.p1;
	N451.p1 = 1 - N451.p0;

	// nor
	N460.p1 = N406.p0 * N425.p0;
	N460.p0 = 1 - N460.p1;

	// nor
	N463.p1 = N409.p0 * N426.p0;
	N463.p0 = 1 - N463.p1;

	// nand
	N466.p0 = N442.p1 * N410.p1;
	N466.p1 = 1 - N466.p0;

	// and
	N475.p1 = N143.p1 * N427.p1;
	N475.p0 = 1 - N475.p1;

	// and
	N476.p1 = N310.p1 * N432.p1;
	N476.p0 = 1 - N476.p1;

	// and
	N477.p1 = N146.p1 * N427.p1;
	N477.p0 = 1 - N477.p1;

	// and
	N478.p1 = N310.p1 * N432.p1;
	N478.p0 = 1 - N478.p1;

	// and
	N479.p1 = N149.p1 * N427.p1;
	N479.p0 = 1 - N479.p1;

	// and
	N480.p1 = N310.p1 * N432.p1;
	N480.p0 = 1 - N480.p1;

	// and
	N481.p1 = N153.p1 * N427.p1;
	N481.p0 = 1 - N481.p1;

	// and
	N482.p1 = N310.p1 * N432.p1;
	N482.p0 = 1 - N482.p1;

	// nand
	N483.p0 = N443.p1 * N1.p1;
	N483.p1 = 1 - N483.p0;

	// or
	N488.p0 = N369.p0 * N437.p0;
	N488.p1 = 1 - N488.p0;

	// or
	N489.p0 = N369.p0 * N437.p0;
	N489.p1 = 1 - N489.p0;

	// or
	N490.p0 = N369.p0 * N437.p0;
	N490.p1 = 1 - N490.p0;

	// or
	N491.p0 = N369.p0 * N437.p0;
	N491.p1 = 1 - N491.p0;

	// nor
	N492.p1 = N413.p0 * N444.p0;
	N492.p0 = 1 - N492.p1;

	// nor
	N495.p1 = N416.p0 * N445.p0;
	N495.p0 = 1 - N495.p1;

	// nand
	N498.p0 = N130.p1 * N460.p1;
	N498.p1 = 1 - N498.p0;

	// or
	N499.p0 = N130.p0 * N460.p0;
	N499.p1 = 1 - N499.p0;

	// nand
	N500.p0 = N463.p1 * N135.p1;
	N500.p1 = 1 - N500.p0;

	// or
	N501.p0 = N463.p0 * N135.p0;
	N501.p1 = 1 - N501.p0;

	// and
	N502.p1 = N91.p1 * N466.p1;
	N502.p0 = 1 - N502.p1;

	// nor
	N503.p1 = N475.p0 * N476.p0;
	N503.p0 = 1 - N503.p1;

	// and
	N504.p1 = N96.p1 * N466.p1;
	N504.p0 = 1 - N504.p1;

	// nor
	N505.p1 = N477.p0 * N478.p0;
	N505.p0 = 1 - N505.p1;

	// and
	N506.p1 = N101.p1 * N466.p1;
	N506.p0 = 1 - N506.p1;

	// nor
	N507.p1 = N479.p0 * N480.p0;
	N507.p0 = 1 - N507.p1;

	// and
	N508.p1 = N106.p1 * N466.p1;
	N508.p0 = 1 - N508.p1;

	// nor
	N509.p1 = N481.p0 * N482.p0;
	N509.p0 = 1 - N509.p1;

	// and
	N510.p1 = N143.p1 * N483.p1;
	N510.p0 = 1 - N510.p1;

	// and
	N511.p1 = N111.p1 * N466.p1;
	N511.p0 = 1 - N511.p1;

	// and
	N512.p1 = N146.p1 * N483.p1;
	N512.p0 = 1 - N512.p1;

	// and
	N513.p1 = N116.p1 * N466.p1;
	N513.p0 = 1 - N513.p1;

	// and
	N514.p1 = N149.p1 * N483.p1;
	N514.p0 = 1 - N514.p1;

	// and
	N515.p1 = N121.p1 * N466.p1;
	N515.p0 = 1 - N515.p1;

	// and
	N516.p1 = N153.p1 * N483.p1;
	N516.p0 = 1 - N516.p1;

	// and
	N517.p1 = N126.p1 * N466.p1;
	N517.p0 = 1 - N517.p1;

	// nand
	N518.p0 = N130.p1 * N492.p1;
	N518.p1 = 1 - N518.p0;

	// or
	N519.p0 = N130.p0 * N492.p0;
	N519.p1 = 1 - N519.p0;

	// nand
	N520.p0 = N495.p1 * N207.p1;
	N520.p1 = 1 - N520.p0;

	// or
	N521.p0 = N495.p0 * N207.p0;
	N521.p1 = 1 - N521.p0;

	// and
	N522.p1 = N451.p1 * N159.p1;
	N522.p0 = 1 - N522.p1;

	// and
	N523.p1 = N451.p1 * N165.p1;
	N523.p0 = 1 - N523.p1;

	// and
	N524.p1 = N451.p1 * N171.p1;
	N524.p0 = 1 - N524.p1;

	// and
	N525.p1 = N451.p1 * N177.p1;
	N525.p0 = 1 - N525.p1;

	// and
	N526.p1 = N451.p1 * N183.p1;
	N526.p0 = 1 - N526.p1;

	// nand
	N527.p0 = N451.p1 * N189.p1;
	N527.p1 = 1 - N527.p0;

	// nand
	N528.p0 = N451.p1 * N195.p1;
	N528.p1 = 1 - N528.p0;

	// nand
	N529.p0 = N451.p1 * N201.p1;
	N529.p1 = 1 - N529.p0;

	// nand
	N530.p0 = N498.p1 * N499.p1;
	N530.p1 = 1 - N530.p0;

	// nand
	N533.p0 = N500.p1 * N501.p1;
	N533.p1 = 1 - N533.p0;

	// nor
	N536.p1 = N309.p0 * N502.p0;
	N536.p0 = 1 - N536.p1;

	// nor
	N537.p1 = N316.p0 * N504.p0;
	N537.p0 = 1 - N537.p1;

	// nor
	N538.p1 = N317.p0 * N506.p0;
	N538.p0 = 1 - N538.p1;

	// nor
	N539.p1 = N318.p0 * N508.p0;
	N539.p0 = 1 - N539.p1;

	// nor
	N540.p1 = N510.p0 * N511.p0;
	N540.p0 = 1 - N540.p1;

	// nor
	N541.p1 = N512.p0 * N513.p0;
	N541.p0 = 1 - N541.p1;

	// nor
	N542.p1 = N514.p0 * N515.p0;
	N542.p0 = 1 - N542.p1;

	// nor
	N543.p1 = N516.p0 * N517.p0;
	N543.p0 = 1 - N543.p1;

	// nand
	N544.p0 = N518.p1 * N519.p1;
	N544.p1 = 1 - N544.p0;

	// nand
	N547.p0 = N520.p1 * N521.p1;
	N547.p1 = 1 - N547.p0;

	// not
	N550.p0 = N530.p1;
	N550.p1 = 1 - N550.p0;

	// not
	N551.p0 = N533.p1;
	N551.p1 = 1 - N551.p0;

	// and
	N552.p1 = N530.p1 * N533.p1;
	N552.p0 = 1 - N552.p1;

	// nand
	N553.p0 = N536.p1 * N503.p1;
	N553.p1 = 1 - N553.p0;

	// nand
	N557.p0 = N537.p1 * N505.p1;
	N557.p1 = 1 - N557.p0;

	// nand
	N561.p0 = N538.p1 * N507.p1;
	N561.p1 = 1 - N561.p0;

	// nand
	N565.p0 = N539.p1 * N509.p1;
	N565.p1 = 1 - N565.p0;

	// nand
	N569.p0 = N488.p1 * N540.p1;
	N569.p1 = 1 - N569.p0;

	// nand
	N573.p0 = N489.p1 * N541.p1;
	N573.p1 = 1 - N573.p0;

	// nand
	N577.p0 = N490.p1 * N542.p1;
	N577.p1 = 1 - N577.p0;

	// nand
	N581.p0 = N491.p1 * N543.p1;
	N581.p1 = 1 - N581.p0;

	// not
	N585.p0 = N544.p1;
	N585.p1 = 1 - N585.p0;

	// not
	N586.p0 = N547.p1;
	N586.p1 = 1 - N586.p0;

	// and
	N587.p1 = N544.p1 * N547.p1;
	N587.p0 = 1 - N587.p1;

	// and
	N588.p1 = N550.p1 * N551.p1;
	N588.p0 = 1 - N588.p1;

	// and
	N589.p1 = N585.p1 * N586.p1;
	N589.p0 = 1 - N589.p1;

	// nand
	N590.p0 = N553.p1 * N159.p1;
	N590.p1 = 1 - N590.p0;

	// or
	N593.p0 = N553.p0 * N159.p0;
	N593.p1 = 1 - N593.p0;

	// and
	N596.p1 = N246.p1 * N553.p1;
	N596.p0 = 1 - N596.p1;

	// nand
	N597.p0 = N557.p1 * N165.p1;
	N597.p1 = 1 - N597.p0;

	// or
	N600.p0 = N557.p0 * N165.p0;
	N600.p1 = 1 - N600.p0;

	// and
	N605.p1 = N246.p1 * N557.p1;
	N605.p0 = 1 - N605.p1;

	// nand
	N606.p0 = N561.p1 * N171.p1;
	N606.p1 = 1 - N606.p0;

	// or
	N609.p0 = N561.p0 * N171.p0;
	N609.p1 = 1 - N609.p0;

	// and
	N615.p1 = N246.p1 * N561.p1;
	N615.p0 = 1 - N615.p1;

	// nand
	N616.p0 = N565.p1 * N177.p1;
	N616.p1 = 1 - N616.p0;

	// or
	N619.p0 = N565.p0 * N177.p0;
	N619.p1 = 1 - N619.p0;

	// and
	N624.p1 = N246.p1 * N565.p1;
	N624.p0 = 1 - N624.p1;

	// nand
	N625.p0 = N569.p1 * N183.p1;
	N625.p1 = 1 - N625.p0;

	// or
	N628.p0 = N569.p0 * N183.p0;
	N628.p1 = 1 - N628.p0;

	// and
	N631.p1 = N246.p1 * N569.p1;
	N631.p0 = 1 - N631.p1;

	// nand
	N632.p0 = N573.p1 * N189.p1;
	N632.p1 = 1 - N632.p0;

	// or
	N635.p0 = N573.p0 * N189.p0;
	N635.p1 = 1 - N635.p0;

	// and
	N640.p1 = N246.p1 * N573.p1;
	N640.p0 = 1 - N640.p1;

	// nand
	N641.p0 = N577.p1 * N195.p1;
	N641.p1 = 1 - N641.p0;

	// or
	N644.p0 = N577.p0 * N195.p0;
	N644.p1 = 1 - N644.p0;

	// and
	N650.p1 = N246.p1 * N577.p1;
	N650.p0 = 1 - N650.p1;

	// nand
	N651.p0 = N581.p1 * N201.p1;
	N651.p1 = 1 - N651.p0;

	// or
	N654.p0 = N581.p0 * N201.p0;
	N654.p1 = 1 - N654.p0;

	// and
	N659.p1 = N246.p1 * N581.p1;
	N659.p0 = 1 - N659.p1;

	// nor
	N660.p1 = N552.p0 * N588.p0;
	N660.p0 = 1 - N660.p1;

	// nor
	N661.p1 = N587.p0 * N589.p0;
	N661.p0 = 1 - N661.p1;

	// not
	N662.p0 = N590.p1;
	N662.p1 = 1 - N662.p0;

	// and
	N665.p1 = N593.p1 * N590.p1;
	N665.p0 = 1 - N665.p1;

	// nor
	N669.p1 = N596.p0 * N522.p0;
	N669.p0 = 1 - N669.p1;

	// not
	N670.p0 = N597.p1;
	N670.p1 = 1 - N670.p0;

	// and
	N673.p1 = N600.p1 * N597.p1;
	N673.p0 = 1 - N673.p1;

	// nor
	N677.p1 = N605.p0 * N523.p0;
	N677.p0 = 1 - N677.p1;

	// not
	N678.p0 = N606.p1;
	N678.p1 = 1 - N678.p0;

	// and
	N682.p1 = N609.p1 * N606.p1;
	N682.p0 = 1 - N682.p1;

	// nor
	N686.p1 = N615.p0 * N524.p0;
	N686.p0 = 1 - N686.p1;

	// not
	N687.p0 = N616.p1;
	N687.p1 = 1 - N687.p0;

	// and
	N692.p1 = N619.p1 * N616.p1;
	N692.p0 = 1 - N692.p1;

	// nor
	N696.p1 = N624.p0 * N525.p0;
	N696.p0 = 1 - N696.p1;

	// not
	N697.p0 = N625.p1;
	N697.p1 = 1 - N697.p0;

	// and
	N700.p1 = N628.p1 * N625.p1;
	N700.p0 = 1 - N700.p1;

	// nor
	N704.p1 = N631.p0 * N526.p0;
	N704.p0 = 1 - N704.p1;

	// not
	N705.p0 = N632.p1;
	N705.p1 = 1 - N705.p0;

	// and
	N708.p1 = N635.p1 * N632.p1;
	N708.p0 = 1 - N708.p1;

	// nor
	N712.p1 = N337.p0 * N640.p0;
	N712.p0 = 1 - N712.p1;

	// not
	N713.p0 = N641.p1;
	N713.p1 = 1 - N713.p0;

	// and
	N717.p1 = N644.p1 * N641.p1;
	N717.p0 = 1 - N717.p1;

	// nor
	N721.p1 = N339.p0 * N650.p0;
	N721.p0 = 1 - N721.p1;

	// not
	N722.p0 = N651.p1;
	N722.p1 = 1 - N722.p0;

	// and
	N727.p1 = N654.p1 * N651.p1;
	N727.p0 = 1 - N727.p1;

	// nor
	N731.p1 = N341.p0 * N659.p0;
	N731.p0 = 1 - N731.p1;

	// nand
	N732.p0 = N654.p1 * N261.p1;
	N732.p1 = 1 - N732.p0;

	// nand
	N733.p0 = N644.p1 * N654.p1 * N261.p1;
	N733.p1 = 1 - N733.p0;

	// nand
	N734.p0 = N635.p1 * N644.p1 * N654.p1 * N261.p1;
	N734.p1 = 1 - N734.p0;

	// not
	N735.p0 = N662.p1;
	N735.p1 = 1 - N735.p0;

	// and
	N736.p1 = N228.p1 * N665.p1;
	N736.p0 = 1 - N736.p1;

	// and
	N737.p1 = N237.p1 * N662.p1;
	N737.p0 = 1 - N737.p1;

	// not
	N738.p0 = N670.p1;
	N738.p1 = 1 - N738.p0;

	// and
	N739.p1 = N228.p1 * N673.p1;
	N739.p0 = 1 - N739.p1;

	// and
	N740.p1 = N237.p1 * N670.p1;
	N740.p0 = 1 - N740.p1;

	// not
	N741.p0 = N678.p1;
	N741.p1 = 1 - N741.p0;

	// and
	N742.p1 = N228.p1 * N682.p1;
	N742.p0 = 1 - N742.p1;

	// and
	N743.p1 = N237.p1 * N678.p1;
	N743.p0 = 1 - N743.p1;

	// not
	N744.p0 = N687.p1;
	N744.p1 = 1 - N744.p0;

	// and
	N745.p1 = N228.p1 * N692.p1;
	N745.p0 = 1 - N745.p1;

	// and
	N746.p1 = N237.p1 * N687.p1;
	N746.p0 = 1 - N746.p1;

	// not
	N747.p0 = N697.p1;
	N747.p1 = 1 - N747.p0;

	// and
	N748.p1 = N228.p1 * N700.p1;
	N748.p0 = 1 - N748.p1;

	// and
	N749.p1 = N237.p1 * N697.p1;
	N749.p0 = 1 - N749.p1;

	// not
	N750.p0 = N705.p1;
	N750.p1 = 1 - N750.p0;

	// and
	N751.p1 = N228.p1 * N708.p1;
	N751.p0 = 1 - N751.p1;

	// and
	N752.p1 = N237.p1 * N705.p1;
	N752.p0 = 1 - N752.p1;

	// not
	N753.p0 = N713.p1;
	N753.p1 = 1 - N753.p0;

	// and
	N754.p1 = N228.p1 * N717.p1;
	N754.p0 = 1 - N754.p1;

	// and
	N755.p1 = N237.p1 * N713.p1;
	N755.p0 = 1 - N755.p1;

	// not
	N756.p0 = N722.p1;
	N756.p1 = 1 - N756.p0;

	// nor
	N757.p1 = N727.p0 * N261.p0;
	N757.p0 = 1 - N757.p1;

	// and
	N758.p1 = N727.p1 * N261.p1;
	N758.p0 = 1 - N758.p1;

	// and
	N759.p1 = N228.p1 * N727.p1;
	N759.p0 = 1 - N759.p1;

	// and
	N760.p1 = N237.p1 * N722.p1;
	N760.p0 = 1 - N760.p1;

	// nand
	N761.p0 = N644.p1 * N722.p1;
	N761.p1 = 1 - N761.p0;

	// nand
	N762.p0 = N635.p1 * N713.p1;
	N762.p1 = 1 - N762.p0;

	// nand
	N763.p0 = N635.p1 * N644.p1 * N722.p1;
	N763.p1 = 1 - N763.p0;

	// nand
	N764.p0 = N609.p1 * N687.p1;
	N764.p1 = 1 - N764.p0;

	// nand
	N765.p0 = N600.p1 * N678.p1;
	N765.p1 = 1 - N765.p0;

	// nand
	N766.p0 = N600.p1 * N609.p1 * N687.p1;
	N766.p1 = 1 - N766.p0;

	// buf
	N767.p1 = N660.p1;
	N767.p0 = 1 - N767.p1;

	// buf
	N768.p1 = N661.p1;
	N768.p0 = 1 - N768.p1;

	// nor
	N769.p1 = N736.p0 * N737.p0;
	N769.p0 = 1 - N769.p1;

	// nor
	N770.p1 = N739.p0 * N740.p0;
	N770.p0 = 1 - N770.p1;

	// nor
	N771.p1 = N742.p0 * N743.p0;
	N771.p0 = 1 - N771.p1;

	// nor
	N772.p1 = N745.p0 * N746.p0;
	N772.p0 = 1 - N772.p1;

	// nand
	N773.p0 = N750.p1 * N762.p1 * N763.p1 * N734.p1;
	N773.p1 = 1 - N773.p0;

	// nor
	N777.p1 = N748.p0 * N749.p0;
	N777.p0 = 1 - N777.p1;

	// nand
	N778.p0 = N753.p1 * N761.p1 * N733.p1;
	N778.p1 = 1 - N778.p0;

	// nor
	N781.p1 = N751.p0 * N752.p0;
	N781.p0 = 1 - N781.p1;

	// nand
	N782.p0 = N756.p1 * N732.p1;
	N782.p1 = 1 - N782.p0;

	// nor
	N785.p1 = N754.p0 * N755.p0;
	N785.p0 = 1 - N785.p1;

	// nor
	N786.p1 = N757.p0 * N758.p0;
	N786.p0 = 1 - N786.p1;

	// nor
	N787.p1 = N759.p0 * N760.p0;
	N787.p0 = 1 - N787.p1;

	// nor
	N788.p1 = N700.p0 * N773.p0;
	N788.p0 = 1 - N788.p1;

	// and
	N789.p1 = N700.p1 * N773.p1;
	N789.p0 = 1 - N789.p1;

	// nor
	N790.p1 = N708.p0 * N778.p0;
	N790.p0 = 1 - N790.p1;

	// and
	N791.p1 = N708.p1 * N778.p1;
	N791.p0 = 1 - N791.p1;

	// nor
	N792.p1 = N717.p0 * N782.p0;
	N792.p0 = 1 - N792.p1;

	// and
	N793.p1 = N717.p1 * N782.p1;
	N793.p0 = 1 - N793.p1;

	// and
	N794.p1 = N219.p1 * N786.p1;
	N794.p0 = 1 - N794.p1;

	// nand
	N795.p0 = N628.p1 * N773.p1;
	N795.p1 = 1 - N795.p0;

	// nand
	N796.p0 = N795.p1 * N747.p1;
	N796.p1 = 1 - N796.p0;

	// nor
	N802.p1 = N788.p0 * N789.p0;
	N802.p0 = 1 - N802.p1;

	// nor
	N803.p1 = N790.p0 * N791.p0;
	N803.p0 = 1 - N803.p1;

	// nor
	N804.p1 = N792.p0 * N793.p0;
	N804.p0 = 1 - N804.p1;

	// nor
	N805.p1 = N340.p0 * N794.p0;
	N805.p0 = 1 - N805.p1;

	// nor
	N806.p1 = N692.p0 * N796.p0;
	N806.p0 = 1 - N806.p1;

	// and
	N807.p1 = N692.p1 * N796.p1;
	N807.p0 = 1 - N807.p1;

	// and
	N808.p1 = N219.p1 * N802.p1;
	N808.p0 = 1 - N808.p1;

	// and
	N809.p1 = N219.p1 * N803.p1;
	N809.p0 = 1 - N809.p1;

	// and
	N810.p1 = N219.p1 * N804.p1;
	N810.p0 = 1 - N810.p1;

	// nand
	N811.p0 = N805.p1 * N787.p1 * N731.p1 * N529.p1;
	N811.p1 = 1 - N811.p0;

	// nand
	N812.p0 = N619.p1 * N796.p1;
	N812.p1 = 1 - N812.p0;

	// nand
	N813.p0 = N609.p1 * N619.p1 * N796.p1;
	N813.p1 = 1 - N813.p0;

	// nand
	N814.p0 = N600.p1 * N609.p1 * N619.p1 * N796.p1;
	N814.p1 = 1 - N814.p0;

	// nand
	N815.p0 = N738.p1 * N765.p1 * N766.p1 * N814.p1;
	N815.p1 = 1 - N815.p0;

	// nand
	N819.p0 = N741.p1 * N764.p1 * N813.p1;
	N819.p1 = 1 - N819.p0;

	// nand
	N822.p0 = N744.p1 * N812.p1;
	N822.p1 = 1 - N822.p0;

	// nor
	N825.p1 = N806.p0 * N807.p0;
	N825.p0 = 1 - N825.p1;

	// nor
	N826.p1 = N335.p0 * N808.p0;
	N826.p0 = 1 - N826.p1;

	// nor
	N827.p1 = N336.p0 * N809.p0;
	N827.p0 = 1 - N827.p1;

	// nor
	N828.p1 = N338.p0 * N810.p0;
	N828.p0 = 1 - N828.p1;

	// not
	N829.p0 = N811.p1;
	N829.p1 = 1 - N829.p0;

	// nor
	N830.p1 = N665.p0 * N815.p0;
	N830.p0 = 1 - N830.p1;

	// and
	N831.p1 = N665.p1 * N815.p1;
	N831.p0 = 1 - N831.p1;

	// nor
	N832.p1 = N673.p0 * N819.p0;
	N832.p0 = 1 - N832.p1;

	// and
	N833.p1 = N673.p1 * N819.p1;
	N833.p0 = 1 - N833.p1;

	// nor
	N834.p1 = N682.p0 * N822.p0;
	N834.p0 = 1 - N834.p1;

	// and
	N835.p1 = N682.p1 * N822.p1;
	N835.p0 = 1 - N835.p1;

	// and
	N836.p1 = N219.p1 * N825.p1;
	N836.p0 = 1 - N836.p1;

	// nand
	N837.p0 = N826.p1 * N777.p1 * N704.p1;
	N837.p1 = 1 - N837.p0;

	// nand
	N838.p0 = N827.p1 * N781.p1 * N712.p1 * N527.p1;
	N838.p1 = 1 - N838.p0;

	// nand
	N839.p0 = N828.p1 * N785.p1 * N721.p1 * N528.p1;
	N839.p1 = 1 - N839.p0;

	// not
	N840.p0 = N829.p1;
	N840.p1 = 1 - N840.p0;

	// nand
	N841.p0 = N815.p1 * N593.p1;
	N841.p1 = 1 - N841.p0;

	// nor
	N842.p1 = N830.p0 * N831.p0;
	N842.p0 = 1 - N842.p1;

	// nor
	N843.p1 = N832.p0 * N833.p0;
	N843.p0 = 1 - N843.p1;

	// nor
	N844.p1 = N834.p0 * N835.p0;
	N844.p0 = 1 - N844.p1;

	// nor
	N845.p1 = N334.p0 * N836.p0;
	N845.p0 = 1 - N845.p1;

	// not
	N846.p0 = N837.p1;
	N846.p1 = 1 - N846.p0;

	// not
	N847.p0 = N838.p1;
	N847.p1 = 1 - N847.p0;

	// not
	N848.p0 = N839.p1;
	N848.p1 = 1 - N848.p0;

	// and
	N849.p1 = N735.p1 * N841.p1;
	N849.p0 = 1 - N849.p1;

	// buf
	N850.p1 = N840.p1;
	N850.p0 = 1 - N850.p1;

	// and
	N851.p1 = N219.p1 * N842.p1;
	N851.p0 = 1 - N851.p1;

	// and
	N852.p1 = N219.p1 * N843.p1;
	N852.p0 = 1 - N852.p1;

	// and
	N853.p1 = N219.p1 * N844.p1;
	N853.p0 = 1 - N853.p1;

	// nand
	N854.p0 = N845.p1 * N772.p1 * N696.p1;
	N854.p1 = 1 - N854.p0;

	// not
	N855.p0 = N846.p1;
	N855.p1 = 1 - N855.p0;

	// not
	N856.p0 = N847.p1;
	N856.p1 = 1 - N856.p0;

	// not
	N857.p0 = N848.p1;
	N857.p1 = 1 - N857.p0;

	// not
	N858.p0 = N849.p1;
	N858.p1 = 1 - N858.p0;

	// nor
	N859.p1 = N417.p0 * N851.p0;
	N859.p0 = 1 - N859.p1;

	// nor
	N860.p1 = N332.p0 * N852.p0;
	N860.p0 = 1 - N860.p1;

	// nor
	N861.p1 = N333.p0 * N853.p0;
	N861.p0 = 1 - N861.p1;

	// not
	N862.p0 = N854.p1;
	N862.p1 = 1 - N862.p0;

	// buf
	N863.p1 = N855.p1;
	N863.p0 = 1 - N863.p1;

	// buf
	N864.p1 = N856.p1;
	N864.p0 = 1 - N864.p1;

	// buf
	N865.p1 = N857.p1;
	N865.p0 = 1 - N865.p1;

	// buf
	N866.p1 = N858.p1;
	N866.p0 = 1 - N866.p1;

	// nand
	N867.p0 = N859.p1 * N769.p1 * N669.p1;
	N867.p1 = 1 - N867.p0;

	// nand
	N868.p0 = N860.p1 * N770.p1 * N677.p1;
	N868.p1 = 1 - N868.p0;

	// nand
	N869.p0 = N861.p1 * N771.p1 * N686.p1;
	N869.p1 = 1 - N869.p0;

	// not
	N870.p0 = N862.p1;
	N870.p1 = 1 - N870.p0;

	// not
	N871.p0 = N867.p1;
	N871.p1 = 1 - N871.p0;

	// not
	N872.p0 = N868.p1;
	N872.p1 = 1 - N872.p0;

	// not
	N873.p0 = N869.p1;
	N873.p1 = 1 - N873.p0;

	// buf
	N874.p1 = N870.p1;
	N874.p0 = 1 - N874.p1;

	// not
	N875.p0 = N871.p1;
	N875.p1 = 1 - N875.p0;

	// not
	N876.p0 = N872.p1;
	N876.p1 = 1 - N876.p0;

	// not
	N877.p0 = N873.p1;
	N877.p1 = 1 - N877.p0;

	// buf
	N878.p1 = N875.p1;
	N878.p0 = 1 - N878.p1;

	// buf
	N879.p1 = N876.p1;
	N879.p0 = 1 - N879.p1;

	// buf
	N880.p1 = N877.p1;
	N880.p0 = 1 - N880.p1;
}