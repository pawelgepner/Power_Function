const float alpha[2]={ 0.8284271247f, 1.171572875f};
const int beta[2]={ 0,-1439258};
float exp_P1_2p(float x) 
{ 
float y;
int  j ; 
int z=x*0xb8aa3b + 0x3f800000;
int zii=z&0x7f800000; 
int zif=z&0x007fffff;
j=zif>>22;
zif=(int)(zif*alpha[j]+beta[j]);
zii |=zif; 
y=*(float*)&zii;
return y; 
}

const float alpha[2]={ 0.8284271247f, 1.171572875f};
const int beta[2]={ 0,-1439258};
float exp_P1_2pM(float x) 
{ 
float y;
int  j ; 
int z=x*0xb8aa3b + 0x3f800000;
int zii=z&0x7f800000; 
int zif=z&0x007fffff;
j=zif>>22;
zif=(int)(zif*alpha[j]+beta[j]);
zii |=zif; 
y=*(float*)&zii;
y*=0.9925613f;
return y; 
}

const float alpha[4]={ 0.75682846f, 0.90002579f, 1.0703171f, 1.272828678f};
const int beta[2]={ 0, -300307, -1014560, -2288653};// błąd 4 elementy
float exp_P1_4pMf(float x) 
{ 
float y;
int  j ; 
int z=x*0xb8aa3b + 0x3f800000;
int zii=z&0x7f800000; 
int zif=z&0x007fffff;
j=zif>>21;
zif=(int)(zif*alpha[j]+beta[j]);
zii |=zif; 
y=*(float*)&zii;
y*=0.998127527f;
return y; 
}

const int alpha[16]={ 5919872, 6204688,6479393 ,6766260, 7065828 , 7378659 ,7705340,  8046485, 8402733, 8774754, 9163245, 9568937, 9992590, 10435000, 10896997, 11379448 };
const int beta[16]={ 0,-17425,-51763,-105551,-180443, -278202, -400708, -549959,  -728083, -937344, -1180152, -1459065, -1776804, -2136262, -2540510, -2992808};
float exp_P1_16p_wM_int(float x) 
{
int z,zii,zif, j;
z=x*0xb8aa3b + 0x3f800000;
zii=z&0x7f800000; 
zif=z&0x007fffff;
j=zif>>19;
zif=(int)((zif*(int64_t) alpha[j])>>23)+beta[j];
zii |=zif; 
float y=*(float*)&zii;
return y; 
}


const int alpha[8]={ 6027202, 6620496,7219702 ,7873141,8585721, 9362795,10210201,11134303};
const int beta[8]={ 0,-72620,-222421,-467461,-823751,-1309422,-1944976,-2753566};
float exp_P1_8p_wM_int(float x) 
{
int z,zii,zif, j;
z=x*0x00800000 + 0x3f800000;
zii=z&0x7f800000; 
zif=z&0x007fffff;
j=zif>>20;
zif=(int)((zif*(int64_t) alpha[j])>>23)+beta[j];
zii |=zif; 
float y=*(float*)&zii;
return y; 
}

const int alpha[16]={ 5919872, 6204688,6479393 ,6766260, 7065828 , 7378659 ,7705340, 8046485, 8402733, 8774754, 9163245, 9568937, 9992590, 10435000, 10896997, 11379448 };
const int beta[16]={ 0,-17425,-51763,-105551,-180443, -278202, -400708, -549959,  -728083, -937344, -1180152, -1459065, -1776804, -2136262, -2540510, -2992808};
float pow2(-x)_16p_int(float x) 
{
int z,zii,zif, j;
z=-x*0x00800000 + 0x3f800000;
zii=z&0x7f800000; 
zif=z&0x007fffff;
j=zif>>19;
zif=(int)((zif*(int64_t) alpha[j])>>23)+beta[j];
zii |=zif; 
float y=*(float*)&zii;
return y; 
}

const int alpha[32]={ 5866957, 6006506,6138031, 6272436, 6409785, 6550141, 6693570, 6840140, 6989920, 7142979, 7299390 ,7459226, 7622562, 7789474, 7960042, 8134344, 8312463, 8494482, 8680487, 8870565, 9064805, 9263298,9466138, 9673419, 9885240, 10101698, 10322897, 10548939, 10779930, 11015980, 11257199, 11503699 };
const int beta[32]={ 0,-4268,-12488,-25089, -42257, -64188,-91081, -123143, -160588, -203636, -252515,-307458, -368709,  -436517, -511140, -592845, -681904, -778602, -883230, -996088, -1117488, -1247750, -1387202, -1536185, -1695051, -1864159, -2043883, -2234606, -2436723, -2650643, -2876786, -3115583};
float pow2_P1_32p_wM_int(float x) 
{
int z,zii,zif, j;
z=x * 0x00800000+ 0x3f800000;
zii=z&0x7f800000; 
zif=z&0x007fffff;
j=zif>>18;
zif=(int)((zif*(int64_t) alpha[j])>>23)+beta[j];
zii |=zif; 
float y=*(float*)&zii;
return y; 
}
