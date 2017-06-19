/*
 * Precalculated log2 values
 * Shifting used for avoiding floating point
 * Fraction must be left shifted by 16
 * Return of log are left shifted by 4
*/
int log2_lshift16(long long unsigned lshift16){
    if (lshift16 < 1) return -241;
    if (lshift16 < 2) return -231;
    if (lshift16 < 3) return -225;
    if (lshift16 < 4) return -219;
    if (lshift16 < 5) return -215;
    if (lshift16 < 6) return -212;
    if (lshift16 < 7) return -209;
    if (lshift16 < 8) return -206;
    if (lshift16 < 9) return -203;
    if (lshift16 < 10) return -201;
    if (lshift16 < 11) return -199;
    if (lshift16 < 12) return -197;
    if (lshift16 < 13) return -196;
    if (lshift16 < 14) return -194;
    if (lshift16 < 15) return -193;
    if (lshift16 < 16) return -191;
    if (lshift16 < 17) return -190;
    if (lshift16 < 18) return -189;
    if (lshift16 < 19) return -187;
    if (lshift16 < 20) return -186;
    if (lshift16 < 21) return -185;
    if (lshift16 < 22) return -184;
    if (lshift16 < 23) return -183;
    if (lshift16 < 24) return -182;
    if (lshift16 < 25) return -181;
    if (lshift16 < 26) return -180;
    if (lshift16 < 28) return -179;
    if (lshift16 < 29) return -178;
    if (lshift16 < 30) return -177;
    if (lshift16 < 32) return -176;
    if (lshift16 < 33) return -175;
    if (lshift16 < 34) return -174;
    if (lshift16 < 36) return -173;
    if (lshift16 < 38) return -172;
    if (lshift16 < 39) return -171;
    if (lshift16 < 41) return -170;
    if (lshift16 < 43) return -169;
    if (lshift16 < 45) return -168;
    if (lshift16 < 47) return -167;
    if (lshift16 < 49) return -166;
    if (lshift16 < 51) return -165;
    if (lshift16 < 53) return -164;
    if (lshift16 < 56) return -163;
    if (lshift16 < 58) return -162;
    if (lshift16 < 61) return -161;
    if (lshift16 < 64) return -160;
    if (lshift16 < 66) return -159;
    if (lshift16 < 69) return -158;
    if (lshift16 < 72) return -157;
    if (lshift16 < 76) return -156;
    if (lshift16 < 79) return -155;
    if (lshift16 < 82) return -154;
    if (lshift16 < 86) return -153;
    if (lshift16 < 90) return -152;
    if (lshift16 < 94) return -151;
    if (lshift16 < 98) return -150;
    if (lshift16 < 103) return -149;
    if (lshift16 < 107) return -148;
    if (lshift16 < 112) return -147;
    if (lshift16 < 117) return -146;
    if (lshift16 < 122) return -145;
    if (lshift16 < 128) return -144;
    if (lshift16 < 133) return -143;
    if (lshift16 < 139) return -142;
    if (lshift16 < 145) return -141;
    if (lshift16 < 152) return -140;
    if (lshift16 < 158) return -139;
    if (lshift16 < 165) return -138;
    if (lshift16 < 173) return -137;
    if (lshift16 < 181) return -136;
    if (lshift16 < 189) return -135;
    if (lshift16 < 197) return -134;
    if (lshift16 < 206) return -133;
    if (lshift16 < 215) return -132;
    if (lshift16 < 224) return -131;
    if (lshift16 < 234) return -130;
    if (lshift16 < 245) return -129;
    if (lshift16 < 256) return -128;
    if (lshift16 < 267) return -127;
    if (lshift16 < 279) return -126;
    if (lshift16 < 291) return -125;
    if (lshift16 < 304) return -124;
    if (lshift16 < 317) return -123;
    if (lshift16 < 331) return -122;
    if (lshift16 < 346) return -121;
    if (lshift16 < 362) return -120;
    if (lshift16 < 378) return -119;
    if (lshift16 < 394) return -118;
    if (lshift16 < 412) return -117;
    if (lshift16 < 430) return -116;
    if (lshift16 < 449) return -115;
    if (lshift16 < 469) return -114;
    if (lshift16 < 490) return -113;
    if (lshift16 < 512) return -112;
    if (lshift16 < 534) return -111;
    if (lshift16 < 558) return -110;
    if (lshift16 < 583) return -109;
    if (lshift16 < 608) return -108;
    if (lshift16 < 635) return -107;
    if (lshift16 < 663) return -106;
    if (lshift16 < 693) return -105;
    if (lshift16 < 724) return -104;
    if (lshift16 < 756) return -103;
    if (lshift16 < 789) return -102;
    if (lshift16 < 824) return -101;
    if (lshift16 < 861) return -100;
    if (lshift16 < 899) return -99;
    if (lshift16 < 939) return -98;
    if (lshift16 < 980) return -97;
    if (lshift16 < 1024) return -96;
    if (lshift16 < 1069) return -95;
    if (lshift16 < 1116) return -94;
    if (lshift16 < 1166) return -93;
    if (lshift16 < 1217) return -92;
    if (lshift16 < 1271) return -91;
    if (lshift16 < 1327) return -90;
    if (lshift16 < 1386) return -89;
    if (lshift16 < 1448) return -88;
    if (lshift16 < 1512) return -87;
    if (lshift16 < 1579) return -86;
    if (lshift16 < 1649) return -85;
    if (lshift16 < 1722) return -84;
    if (lshift16 < 1798) return -83;
    if (lshift16 < 1878) return -82;
    if (lshift16 < 1961) return -81;
    if (lshift16 < 2048) return -80;
    if (lshift16 < 2138) return -79;
    if (lshift16 < 2233) return -78;
    if (lshift16 < 2332) return -77;
    if (lshift16 < 2435) return -76;
    if (lshift16 < 2543) return -75;
    if (lshift16 < 2655) return -74;
    if (lshift16 < 2773) return -73;
    if (lshift16 < 2896) return -72;
    if (lshift16 < 3024) return -71;
    if (lshift16 < 3158) return -70;
    if (lshift16 < 3298) return -69;
    if (lshift16 < 3444) return -68;
    if (lshift16 < 3596) return -67;
    if (lshift16 < 3756) return -66;
    if (lshift16 < 3922) return -65;
    if (lshift16 < 4096) return -64;
    if (lshift16 < 4277) return -63;
    if (lshift16 < 4466) return -62;
    if (lshift16 < 4664) return -61;
    if (lshift16 < 4870) return -60;
    if (lshift16 < 5086) return -59;
    if (lshift16 < 5311) return -58;
    if (lshift16 < 5547) return -57;
    if (lshift16 < 5792) return -56;
    if (lshift16 < 6049) return -55;
    if (lshift16 < 6316) return -54;
    if (lshift16 < 6596) return -53;
    if (lshift16 < 6888) return -52;
    if (lshift16 < 7193) return -51;
    if (lshift16 < 7512) return -50;
    if (lshift16 < 7844) return -49;
    if (lshift16 < 8192) return -48;
    if (lshift16 < 8554) return -47;
    if (lshift16 < 8933) return -46;
    if (lshift16 < 9328) return -45;
    if (lshift16 < 9741) return -44;
    if (lshift16 < 10173) return -43;
    if (lshift16 < 10623) return -42;
    if (lshift16 < 11094) return -41;
    if (lshift16 < 11585) return -40;
    if (lshift16 < 12098) return -39;
    if (lshift16 < 12633) return -38;
    if (lshift16 < 13193) return -37;
    if (lshift16 < 13777) return -36;
    if (lshift16 < 14387) return -35;
    if (lshift16 < 15024) return -34;
    if (lshift16 < 15689) return -33;
    if (lshift16 < 16384) return -32;
    if (lshift16 < 17109) return -31;
    if (lshift16 < 17866) return -30;
    if (lshift16 < 18657) return -29;
    if (lshift16 < 19483) return -28;
    if (lshift16 < 20346) return -27;
    if (lshift16 < 21247) return -26;
    if (lshift16 < 22188) return -25;
    if (lshift16 < 23170) return -24;
    if (lshift16 < 24196) return -23;
    if (lshift16 < 25267) return -22;
    if (lshift16 < 26386) return -21;
    if (lshift16 < 27554) return -20;
    if (lshift16 < 28774) return -19;
    if (lshift16 < 30048) return -18;
    if (lshift16 < 31378) return -17;
    if (lshift16 < 32768) return -16;
    if (lshift16 < 34218) return -15;
    if (lshift16 < 35733) return -14;
    if (lshift16 < 37315) return -13;
    if (lshift16 < 38967) return -12;
    if (lshift16 < 40693) return -11;
    if (lshift16 < 42494) return -10;
    if (lshift16 < 44376) return -9;
    if (lshift16 < 46340) return -8;
    if (lshift16 < 48392) return -7;
    if (lshift16 < 50535) return -6;
    if (lshift16 < 52772) return -5;
    if (lshift16 < 55108) return -4;
    if (lshift16 < 57548) return -3;
    if (lshift16 < 60096) return -2;
    if (lshift16 < 62757) return -1;
    return  0;
}