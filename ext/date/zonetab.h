/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf --ignore-case -L ANSI-C -C -c -P -p -j1 -i 1 -g -o -t -N zonetab zonetab.list  */
/* Computed positions: -k'1-4,9' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "zonetab.list"

#define GPERF_DOWNCASE 1
#define GPERF_CASE_STRNCMP 1
#define gperf_case_strncmp strncasecmp
struct zone {
    int name;
    int offset;
};
static const struct zone *zonetab(register const char *str, register size_t len);
#line 12 "zonetab.list"
struct zone;

#define TOTAL_KEYWORDS 316
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 619
/* maximum key range = 618, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_STRNCMP
#define GPERF_CASE_STRNCMP 1
static int
gperf_case_strncmp (register const char *s1, register const char *s2, register size_t n)
{
  for (; n > 0;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 != 0 && c1 == c2)
        {
          n--;
          continue;
        }
      return (int)c1 - (int)c2;
    }
  return 0;
}
#endif

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620,  17, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620,   3,   2, 620, 620, 620,
      620, 620,  70,   8,   3, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620,  39, 176, 207,  70, 168,
        1,   5,  18,  74, 218,   2, 117, 130,  48,  88,
      125, 225,  92,   1,   1,  12,  54,  30,  36,  13,
       48, 168, 263,  59, 114, 166, 109,  39, 176, 207,
       70, 168,   1,   5,  18,  74, 218,   2, 117, 130,
       48,  88, 125, 225,  92,   1,   1,  12,  54,  30,
       36,  13,  48, 168, 263,  59, 114, 166, 109,  27,
      104,   1,   9,   4, 309, 190, 188, 177, 255, 108,
        2, 341,   3, 620, 620, 620, 620, 620, 620,  12,
       54,  30,  36,  13,  48, 168, 263,  59, 114, 166,
      109,  27, 104,   1,   9,   4, 309, 190, 188, 177,
      255, 108,   2, 341,   3, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620, 620, 620,
      620, 620, 620, 620, 620, 620, 620, 620
    };
  register unsigned int hval = (unsigned int)len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
      case 7:
      case 6:
      case 5:
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]+6];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]+52];
        break;
    }
  return (unsigned int)hval;
}

struct stringpool_t
  {
    char stringpool_str2[sizeof("o")];
    char stringpool_str3[sizeof("x")];
    char stringpool_str4[sizeof("z")];
    char stringpool_str5[sizeof("q")];
    char stringpool_str8[sizeof("omst")];
    char stringpool_str9[sizeof("omsst")];
    char stringpool_str10[sizeof("p")];
    char stringpool_str13[sizeof("a")];
    char stringpool_str14[sizeof("e")];
    char stringpool_str15[sizeof("pet")];
    char stringpool_str16[sizeof("pmst")];
    char stringpool_str17[sizeof("pett")];
    char stringpool_str18[sizeof("petst")];
    char stringpool_str19[sizeof("eet")];
    char stringpool_str20[sizeof("aest")];
    char stringpool_str21[sizeof("eest")];
    char stringpool_str22[sizeof("eat")];
    char stringpool_str24[sizeof("east")];
    char stringpool_str25[sizeof("easst")];
    char stringpool_str26[sizeof("pst")];
    char stringpool_str27[sizeof("eastern")];
    char stringpool_str28[sizeof("m")];
    char stringpool_str29[sizeof("ast")];
    char stringpool_str30[sizeof("est")];
    char stringpool_str31[sizeof("c")];
    char stringpool_str32[sizeof("mmt")];
    char stringpool_str33[sizeof("met")];
    char stringpool_str35[sizeof("mest")];
    char stringpool_str36[sizeof("cet")];
    char stringpool_str37[sizeof("d")];
    char stringpool_str38[sizeof("cest")];
    char stringpool_str39[sizeof("cat")];
    char stringpool_str41[sizeof("cast")];
    char stringpool_str42[sizeof("magt")];
    char stringpool_str43[sizeof("magst")];
    char stringpool_str44[sizeof("mst")];
    char stringpool_str45[sizeof("msk")];
    char stringpool_str46[sizeof("cot")];
    char stringpool_str47[sizeof("cst")];
    char stringpool_str48[sizeof("aqtt")];
    char stringpool_str49[sizeof("f")];
    char stringpool_str52[sizeof("art")];
    char stringpool_str53[sizeof("fnt")];
    char stringpool_str54[sizeof("fet")];
    char stringpool_str55[sizeof("b")];
    char stringpool_str57[sizeof("anat")];
    char stringpool_str58[sizeof("anast")];
    char stringpool_str59[sizeof("bnt")];
    char stringpool_str60[sizeof("i")];
    char stringpool_str61[sizeof("pht")];
    char stringpool_str62[sizeof("at")];
    char stringpool_str63[sizeof("zp6")];
    char stringpool_str64[sizeof("mewt")];
    char stringpool_str65[sizeof("fst")];
    char stringpool_str66[sizeof("ahst")];
    char stringpool_str67[sizeof("mawt")];
    char stringpool_str68[sizeof("zp5")];
    char stringpool_str70[sizeof("bot")];
    char stringpool_str71[sizeof("bst")];
    char stringpool_str72[sizeof("pwt")];
    char stringpool_str74[sizeof("pont")];
    char stringpool_str75[sizeof("iot")];
    char stringpool_str76[sizeof("ist")];
    char stringpool_str77[sizeof("awst")];
    char stringpool_str79[sizeof("mht")];
    char stringpool_str80[sizeof("mez")];
    char stringpool_str81[sizeof("orat")];
    char stringpool_str82[sizeof("mesz")];
    char stringpool_str84[sizeof("chst")];
    char stringpool_str85[sizeof("pmdt")];
    char stringpool_str88[sizeof("central")];
    char stringpool_str89[sizeof("aedt")];
    char stringpool_str90[sizeof("act")];
    char stringpool_str91[sizeof("ect")];
    char stringpool_str92[sizeof("acst")];
    char stringpool_str93[sizeof("eadt")];
    char stringpool_str94[sizeof("brt")];
    char stringpool_str95[sizeof("chut")];
    char stringpool_str96[sizeof("brst")];
    char stringpool_str97[sizeof("cen. australia")];
    char stringpool_str100[sizeof("davt")];
    char stringpool_str101[sizeof("irst")];
    char stringpool_str102[sizeof("irkt")];
    char stringpool_str103[sizeof("irkst")];
    char stringpool_str104[sizeof("bt")];
    char stringpool_str105[sizeof("n")];
    char stringpool_str106[sizeof("btt")];
    char stringpool_str107[sizeof("mountain")];
    char stringpool_str108[sizeof("cct")];
    char stringpool_str109[sizeof("w")];
    char stringpool_str110[sizeof("l")];
    char stringpool_str111[sizeof("fwt")];
    char stringpool_str113[sizeof("msd")];
    char stringpool_str114[sizeof("wet")];
    char stringpool_str116[sizeof("west")];
    char stringpool_str117[sizeof("wat")];
    char stringpool_str119[sizeof("wast")];
    char stringpool_str120[sizeof("wakt")];
    char stringpool_str121[sizeof("nst")];
    char stringpool_str122[sizeof("acwst")];
    char stringpool_str123[sizeof("chast")];
    char stringpool_str124[sizeof("cist")];
    char stringpool_str125[sizeof("azt")];
    char stringpool_str126[sizeof("clt")];
    char stringpool_str127[sizeof("azst")];
    char stringpool_str128[sizeof("clst")];
    char stringpool_str129[sizeof("mart")];
    char stringpool_str130[sizeof("zp4")];
    char stringpool_str131[sizeof("jst")];
    char stringpool_str132[sizeof("central asia")];
    char stringpool_str133[sizeof("aft")];
    char stringpool_str134[sizeof("e. south america")];
    char stringpool_str135[sizeof("central america")];
    char stringpool_str137[sizeof("ict")];
    char stringpool_str143[sizeof("pgt")];
    char stringpool_str144[sizeof("nrt")];
    char stringpool_str145[sizeof("mexico")];
    char stringpool_str146[sizeof("awdt")];
    char stringpool_str147[sizeof("egt")];
    char stringpool_str148[sizeof("cxt")];
    char stringpool_str149[sizeof("egst")];
    char stringpool_str150[sizeof("phot")];
    char stringpool_str151[sizeof("alaskan")];
    char stringpool_str154[sizeof("nt")];
    char stringpool_str158[sizeof("wt")];
    char stringpool_str160[sizeof("west asia")];
    char stringpool_str161[sizeof("acdt")];
    char stringpool_str162[sizeof("npt")];
    char stringpool_str163[sizeof("lhst")];
    char stringpool_str164[sizeof("afghanistan")];
    char stringpool_str167[sizeof("k")];
    char stringpool_str169[sizeof("g")];
    char stringpool_str170[sizeof("irdt")];
    char stringpool_str171[sizeof("chot")];
    char stringpool_str172[sizeof("chost")];
    char stringpool_str173[sizeof("gmt")];
    char stringpool_str174[sizeof("get")];
    char stringpool_str175[sizeof("novt")];
    char stringpool_str176[sizeof("novst")];
    char stringpool_str177[sizeof("fjt")];
    char stringpool_str178[sizeof("u")];
    char stringpool_str179[sizeof("fjst")];
    char stringpool_str181[sizeof("pyst")];
    char stringpool_str182[sizeof("nct")];
    char stringpool_str183[sizeof("kst")];
    char stringpool_str184[sizeof("kost")];
    char stringpool_str185[sizeof("gst")];
    char stringpool_str186[sizeof("iran")];
    char stringpool_str187[sizeof("e. africa")];
    char stringpool_str188[sizeof("wadt")];
    char stringpool_str189[sizeof("t")];
    char stringpool_str190[sizeof("e. australia")];
    char stringpool_str191[sizeof("s")];
    char stringpool_str192[sizeof("chadt")];
    char stringpool_str193[sizeof("tmt")];
    char stringpool_str194[sizeof("cidst")];
    char stringpool_str195[sizeof("aoe")];
    char stringpool_str197[sizeof("myt")];
    char stringpool_str198[sizeof("west pacific")];
    char stringpool_str199[sizeof("mut")];
    char stringpool_str200[sizeof("wit")];
    char stringpool_str201[sizeof("sast")];
    char stringpool_str202[sizeof("sakt")];
    char stringpool_str203[sizeof("new zealand")];
    char stringpool_str204[sizeof("tot")];
    char stringpool_str205[sizeof("china")];
    char stringpool_str206[sizeof("tost")];
    char stringpool_str207[sizeof("sst")];
    char stringpool_str209[sizeof("india")];
    char stringpool_str211[sizeof("warst")];
    char stringpool_str212[sizeof("sbt")];
    char stringpool_str214[sizeof("azot")];
    char stringpool_str215[sizeof("azost")];
    char stringpool_str216[sizeof("taht")];
    char stringpool_str217[sizeof("nzt")];
    char stringpool_str218[sizeof("dateline")];
    char stringpool_str219[sizeof("nzst")];
    char stringpool_str220[sizeof("tokyo")];
    char stringpool_str221[sizeof("central pacific")];
    char stringpool_str223[sizeof("qyzt")];
    char stringpool_str224[sizeof("atlantic")];
    char stringpool_str225[sizeof("nft")];
    char stringpool_str227[sizeof("ut")];
    char stringpool_str228[sizeof("trt")];
    char stringpool_str229[sizeof("wft")];
    char stringpool_str230[sizeof("srt")];
    char stringpool_str231[sizeof("pdt")];
    char stringpool_str232[sizeof("lhdt")];
    char stringpool_str234[sizeof("adt")];
    char stringpool_str235[sizeof("edt")];
    char stringpool_str238[sizeof("pkt")];
    char stringpool_str239[sizeof("almt")];
    char stringpool_str240[sizeof("wita")];
    char stringpool_str242[sizeof("wgt")];
    char stringpool_str243[sizeof("akst")];
    char stringpool_str244[sizeof("wgst")];
    char stringpool_str246[sizeof("krat")];
    char stringpool_str247[sizeof("krast")];
    char stringpool_str248[sizeof("mid-atlantic")];
    char stringpool_str249[sizeof("mdt")];
    char stringpool_str250[sizeof("lint")];
    char stringpool_str251[sizeof("malay peninsula")];
    char stringpool_str252[sizeof("cdt")];
    char stringpool_str253[sizeof("swt")];
    char stringpool_str255[sizeof("se asia")];
    char stringpool_str256[sizeof("v")];
    char stringpool_str258[sizeof("tonga")];
    char stringpool_str259[sizeof("ckt")];
    char stringpool_str261[sizeof("vet")];
    char stringpool_str262[sizeof("caucasus")];
    char stringpool_str263[sizeof("central europe")];
    char stringpool_str264[sizeof("h")];
    char stringpool_str265[sizeof("central european")];
    char stringpool_str266[sizeof("newfoundland")];
    char stringpool_str267[sizeof("arab")];
    char stringpool_str268[sizeof("sct")];
    char stringpool_str269[sizeof("arabic")];
    char stringpool_str270[sizeof("arabian")];
    char stringpool_str271[sizeof("ddut")];
    char stringpool_str273[sizeof("vost")];
    char stringpool_str274[sizeof("hast")];
    char stringpool_str275[sizeof("nepal")];
    char stringpool_str276[sizeof("nut")];
    char stringpool_str277[sizeof("fkt")];
    char stringpool_str279[sizeof("fkst")];
    char stringpool_str280[sizeof("hst")];
    char stringpool_str281[sizeof("idt")];
    char stringpool_str284[sizeof("tlt")];
    char stringpool_str285[sizeof("w. australia")];
    char stringpool_str286[sizeof("egypt")];
    char stringpool_str287[sizeof("myanmar")];
    char stringpool_str288[sizeof("nzdt")];
    char stringpool_str289[sizeof("gft")];
    char stringpool_str290[sizeof("uzt")];
    char stringpool_str293[sizeof("north asia")];
    char stringpool_str294[sizeof("mvt")];
    char stringpool_str295[sizeof("galt")];
    char stringpool_str296[sizeof("nfdt")];
    char stringpool_str297[sizeof("cvt")];
    char stringpool_str298[sizeof("north asia east")];
    char stringpool_str300[sizeof("kgt")];
    char stringpool_str301[sizeof("aus central")];
    char stringpool_str302[sizeof("pacific")];
    char stringpool_str304[sizeof("canada central")];
    char stringpool_str306[sizeof("pacific sa")];
    char stringpool_str307[sizeof("azores")];
    char stringpool_str308[sizeof("gamt")];
    char stringpool_str309[sizeof("tft")];
    char stringpool_str310[sizeof("r")];
    char stringpool_str311[sizeof("fle")];
    char stringpool_str312[sizeof("akdt")];
    char stringpool_str313[sizeof("ulat")];
    char stringpool_str314[sizeof("ulast")];
    char stringpool_str315[sizeof("ret")];
    char stringpool_str317[sizeof("tjt")];
    char stringpool_str319[sizeof("south africa")];
    char stringpool_str324[sizeof("sgt")];
    char stringpool_str326[sizeof("ndt")];
    char stringpool_str327[sizeof("rott")];
    char stringpool_str330[sizeof("samt")];
    char stringpool_str332[sizeof("tasmania")];
    char stringpool_str334[sizeof("hovt")];
    char stringpool_str335[sizeof("hovst")];
    char stringpool_str338[sizeof("gyt")];
    char stringpool_str342[sizeof("y")];
    char stringpool_str343[sizeof("hadt")];
    char stringpool_str344[sizeof("sa western")];
    char stringpool_str345[sizeof("hawaiian")];
    char stringpool_str347[sizeof("uyt")];
    char stringpool_str349[sizeof("uyst")];
    char stringpool_str350[sizeof("yekt")];
    char stringpool_str351[sizeof("yekst")];
    char stringpool_str352[sizeof("kuyt")];
    char stringpool_str353[sizeof("yakt")];
    char stringpool_str354[sizeof("yakst")];
    char stringpool_str358[sizeof("yst")];
    char stringpool_str359[sizeof("jerusalem")];
    char stringpool_str365[sizeof("sri lanka")];
    char stringpool_str367[sizeof("yakutsk")];
    char stringpool_str375[sizeof("wib")];
    char stringpool_str377[sizeof("aus eastern")];
    char stringpool_str378[sizeof("gilt")];
    char stringpool_str387[sizeof("us mountain")];
    char stringpool_str391[sizeof("vlat")];
    char stringpool_str392[sizeof("vlast")];
    char stringpool_str395[sizeof("gtb")];
    char stringpool_str398[sizeof("taipei")];
    char stringpool_str399[sizeof("sret")];
    char stringpool_str408[sizeof("cape verde")];
    char stringpool_str417[sizeof("tkt")];
    char stringpool_str418[sizeof("samoa")];
    char stringpool_str421[sizeof("sa pacific")];
    char stringpool_str427[sizeof("vut")];
    char stringpool_str428[sizeof("idlw")];
    char stringpool_str432[sizeof("fiji")];
    char stringpool_str435[sizeof("utc")];
    char stringpool_str443[sizeof("korea")];
    char stringpool_str445[sizeof("e. europe")];
    char stringpool_str449[sizeof("syot")];
    char stringpool_str452[sizeof("n. central asia")];
    char stringpool_str455[sizeof("tvt")];
    char stringpool_str458[sizeof("w. central africa")];
    char stringpool_str466[sizeof("ekaterinburg")];
    char stringpool_str468[sizeof("vladivostok")];
    char stringpool_str476[sizeof("yapt")];
    char stringpool_str477[sizeof("us eastern")];
    char stringpool_str482[sizeof("sa eastern")];
    char stringpool_str485[sizeof("hdt")];
    char stringpool_str486[sizeof("russian")];
    char stringpool_str492[sizeof("hkt")];
    char stringpool_str497[sizeof("romance")];
    char stringpool_str540[sizeof("w. europe")];
    char stringpool_str563[sizeof("ydt")];
    char stringpool_str566[sizeof("idle")];
    char stringpool_str567[sizeof("greenwich")];
    char stringpool_str619[sizeof("greenland")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "o",
    "x",
    "z",
    "q",
    "omst",
    "omsst",
    "p",
    "a",
    "e",
    "pet",
    "pmst",
    "pett",
    "petst",
    "eet",
    "aest",
    "eest",
    "eat",
    "east",
    "easst",
    "pst",
    "eastern",
    "m",
    "ast",
    "est",
    "c",
    "mmt",
    "met",
    "mest",
    "cet",
    "d",
    "cest",
    "cat",
    "cast",
    "magt",
    "magst",
    "mst",
    "msk",
    "cot",
    "cst",
    "aqtt",
    "f",
    "art",
    "fnt",
    "fet",
    "b",
    "anat",
    "anast",
    "bnt",
    "i",
    "pht",
    "at",
    "zp6",
    "mewt",
    "fst",
    "ahst",
    "mawt",
    "zp5",
    "bot",
    "bst",
    "pwt",
    "pont",
    "iot",
    "ist",
    "awst",
    "mht",
    "mez",
    "orat",
    "mesz",
    "chst",
    "pmdt",
    "central",
    "aedt",
    "act",
    "ect",
    "acst",
    "eadt",
    "brt",
    "chut",
    "brst",
    "cen. australia",
    "davt",
    "irst",
    "irkt",
    "irkst",
    "bt",
    "n",
    "btt",
    "mountain",
    "cct",
    "w",
    "l",
    "fwt",
    "msd",
    "wet",
    "west",
    "wat",
    "wast",
    "wakt",
    "nst",
    "acwst",
    "chast",
    "cist",
    "azt",
    "clt",
    "azst",
    "clst",
    "mart",
    "zp4",
    "jst",
    "central asia",
    "aft",
    "e. south america",
    "central america",
    "ict",
    "pgt",
    "nrt",
    "mexico",
    "awdt",
    "egt",
    "cxt",
    "egst",
    "phot",
    "alaskan",
    "nt",
    "wt",
    "west asia",
    "acdt",
    "npt",
    "lhst",
    "afghanistan",
    "k",
    "g",
    "irdt",
    "chot",
    "chost",
    "gmt",
    "get",
    "novt",
    "novst",
    "fjt",
    "u",
    "fjst",
    "pyst",
    "nct",
    "kst",
    "kost",
    "gst",
    "iran",
    "e. africa",
    "wadt",
    "t",
    "e. australia",
    "s",
    "chadt",
    "tmt",
    "cidst",
    "aoe",
    "myt",
    "west pacific",
    "mut",
    "wit",
    "sast",
    "sakt",
    "new zealand",
    "tot",
    "china",
    "tost",
    "sst",
    "india",
    "warst",
    "sbt",
    "azot",
    "azost",
    "taht",
    "nzt",
    "dateline",
    "nzst",
    "tokyo",
    "central pacific",
    "qyzt",
    "atlantic",
    "nft",
    "ut",
    "trt",
    "wft",
    "srt",
    "pdt",
    "lhdt",
    "adt",
    "edt",
    "pkt",
    "almt",
    "wita",
    "wgt",
    "akst",
    "wgst",
    "krat",
    "krast",
    "mid-atlantic",
    "mdt",
    "lint",
    "malay peninsula",
    "cdt",
    "swt",
    "se asia",
    "v",
    "tonga",
    "ckt",
    "vet",
    "caucasus",
    "central europe",
    "h",
    "central european",
    "newfoundland",
    "arab",
    "sct",
    "arabic",
    "arabian",
    "ddut",
    "vost",
    "hast",
    "nepal",
    "nut",
    "fkt",
    "fkst",
    "hst",
    "idt",
    "tlt",
    "w. australia",
    "egypt",
    "myanmar",
    "nzdt",
    "gft",
    "uzt",
    "north asia",
    "mvt",
    "galt",
    "nfdt",
    "cvt",
    "north asia east",
    "kgt",
    "aus central",
    "pacific",
    "canada central",
    "pacific sa",
    "azores",
    "gamt",
    "tft",
    "r",
    "fle",
    "akdt",
    "ulat",
    "ulast",
    "ret",
    "tjt",
    "south africa",
    "sgt",
    "ndt",
    "rott",
    "samt",
    "tasmania",
    "hovt",
    "hovst",
    "gyt",
    "y",
    "hadt",
    "sa western",
    "hawaiian",
    "uyt",
    "uyst",
    "yekt",
    "yekst",
    "kuyt",
    "yakt",
    "yakst",
    "yst",
    "jerusalem",
    "sri lanka",
    "yakutsk",
    "wib",
    "aus eastern",
    "gilt",
    "us mountain",
    "vlat",
    "vlast",
    "gtb",
    "taipei",
    "sret",
    "cape verde",
    "tkt",
    "samoa",
    "sa pacific",
    "vut",
    "idlw",
    "fiji",
    "utc",
    "korea",
    "e. europe",
    "syot",
    "n. central asia",
    "tvt",
    "w. central africa",
    "ekaterinburg",
    "vladivostok",
    "yapt",
    "us eastern",
    "sa eastern",
    "hdt",
    "russian",
    "hkt",
    "romance",
    "w. europe",
    "ydt",
    "idle",
    "greenwich",
    "greenland"
  };
#define stringpool ((const char *) &stringpool_contents)
const struct zone *
zonetab (register const char *str, register size_t len)
{
  static const struct zone wordlist[] =
    {
      {-1}, {-1},
#line 37 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2,   -2*3600},
#line 816 "zonetab.h"
#line 46 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3,  -11*3600},
#line 819 "zonetab.h"
#line 48 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str4,    0*3600},
#line 822 "zonetab.h"
#line 39 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str5,   -4*3600},
#line 825 "zonetab.h"
      {-1}, {-1},
#line 272 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str8,21600},
#line 829 "zonetab.h"
#line 271 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str9,25200},
#line 832 "zonetab.h"
#line 38 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str10,   -3*3600},
#line 835 "zonetab.h"
      {-1}, {-1},
#line 24 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str13,    1*3600},
#line 839 "zonetab.h"
#line 28 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str14,    5*3600},
#line 842 "zonetab.h"
#line 274 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str15,-18000},
#line 845 "zonetab.h"
#line 282 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str16,-10800},
#line 848 "zonetab.h"
#line 276 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str17,43200},
#line 851 "zonetab.h"
#line 275 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str18,43200},
#line 854 "zonetab.h"
#line 83 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str19,  2*3600},
#line 857 "zonetab.h"
#line 189 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str20,36000},
#line 860 "zonetab.h"
#line 91 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str21, 3*3600},
#line 863 "zonetab.h"
#line 90 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str22,  3*3600},
#line 866 "zonetab.h"
      {-1},
#line 104 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str24,-6*3600},
#line 870 "zonetab.h"
#line 220 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str25,-18000},
#line 873 "zonetab.h"
#line 22 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str26, -8*3600},
#line 876 "zonetab.h"
#line 136 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str27,                -18000},
#line 879 "zonetab.h"
#line 35 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str28,   12*3600},
#line 882 "zonetab.h"
#line 59 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str29, -4*3600},
#line 885 "zonetab.h"
#line 16 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str30, -5*3600},
#line 888 "zonetab.h"
#line 26 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str31,    3*3600},
#line 891 "zonetab.h"
#line 259 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str32,23400},
#line 894 "zonetab.h"
#line 76 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str33,  1*3600},
#line 897 "zonetab.h"
      {-1},
#line 85 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str35, 2*3600},
#line 901 "zonetab.h"
#line 74 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str36,  1*3600},
#line 904 "zonetab.h"
#line 27 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str37,    4*3600},
#line 907 "zonetab.h"
#line 82 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str38, 2*3600},
#line 910 "zonetab.h"
#line 68 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str39,2*3600},
#line 913 "zonetab.h"
      {-1},
#line 205 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str41,28800},
#line 917 "zonetab.h"
#line 255 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str42,39600},
#line 920 "zonetab.h"
#line 254 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str43,43200},
#line 923 "zonetab.h"
#line 20 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str44, -7*3600},
#line 926 "zonetab.h"
#line 92 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str45,  3*3600},
#line 929 "zonetab.h"
#line 215 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str46,-18000},
#line 932 "zonetab.h"
#line 18 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str47, -6*3600},
#line 935 "zonetab.h"
#line 195 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str48,18000},
#line 938 "zonetab.h"
#line 29 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str49,    6*3600},
#line 941 "zonetab.h"
      {-1}, {-1},
#line 54 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str52, -3*3600},
#line 945 "zonetab.h"
#line 229 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str53,-7200},
#line 948 "zonetab.h"
#line 224 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str54,10800},
#line 951 "zonetab.h"
#line 25 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str55,    2*3600},
#line 954 "zonetab.h"
      {-1},
#line 193 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str57,43200},
#line 958 "zonetab.h"
#line 192 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str58,43200},
#line 961 "zonetab.h"
#line 202 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str59,28800},
#line 964 "zonetab.h"
#line 32 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str60,    9*3600},
#line 967 "zonetab.h"
#line 279 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str61,28800},
#line 970 "zonetab.h"
#line 51 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str62,  -2*3600},
#line 973 "zonetab.h"
#line 97 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str63,  6*3600},
#line 976 "zonetab.h"
#line 77 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str64, 1*3600},
#line 979 "zonetab.h"
#line 84 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str65,  2*3600},
#line 982 "zonetab.h"
#line 67 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str66,-10*3600},
#line 985 "zonetab.h"
#line 257 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str67,18000},
#line 988 "zonetab.h"
#line 95 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str68,  5*3600},
#line 991 "zonetab.h"
      {-1},
#line 203 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str70,-14400},
#line 995 "zonetab.h"
#line 73 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str71,  1*3600},
#line 998 "zonetab.h"
#line 284 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str72,32400},
#line 1001 "zonetab.h"
      {-1},
#line 283 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str74,39600},
#line 1005 "zonetab.h"
#line 241 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str75,21600},
#line 1008 "zonetab.h"
#line 96 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str76,  (5*3600+1800)},
#line 1011 "zonetab.h"
#line 197 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str77,28800},
#line 1014 "zonetab.h"
      {-1},
#line 258 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str79,43200},
#line 1018 "zonetab.h"
#line 78 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str80,  1*3600},
#line 1021 "zonetab.h"
#line 273 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str81,18000},
#line 1024 "zonetab.h"
#line 86 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str82, 2*3600},
#line 1027 "zonetab.h"
      {-1},
#line 210 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str84,36000},
#line 1031 "zonetab.h"
#line 281 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str85,-7200},
#line 1034 "zonetab.h"
      {-1}, {-1},
#line 129 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str88,                -21600},
#line 1038 "zonetab.h"
#line 188 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str89,39600},
#line 1041 "zonetab.h"
#line 186 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str90,-18000},
#line 1044 "zonetab.h"
#line 221 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str91,-18000},
#line 1047 "zonetab.h"
#line 185 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str92,34200},
#line 1050 "zonetab.h"
#line 106 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str93,11*3600},
#line 1053 "zonetab.h"
#line 56 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str94, -3*3600},
#line 1056 "zonetab.h"
#line 211 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str95,36000},
#line 1059 "zonetab.h"
#line 52 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str96,-2*3600},
#line 1062 "zonetab.h"
#line 123 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str97,          34200},
#line 1065 "zonetab.h"
      {-1}, {-1},
#line 218 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str100,25200},
#line 1069 "zonetab.h"
#line 245 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str101,12600},
#line 1072 "zonetab.h"
#line 244 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str102,28800},
#line 1075 "zonetab.h"
#line 243 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str103,32400},
#line 1078 "zonetab.h"
#line 89 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str104,   3*3600},
#line 1081 "zonetab.h"
#line 36 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str105,   -1*3600},
#line 1084 "zonetab.h"
#line 204 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str106,21600},
#line 1087 "zonetab.h"
#line 151 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str107,               -25200},
#line 1090 "zonetab.h"
#line 99 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str108,  (6*3600+1800)},
#line 1093 "zonetab.h"
#line 45 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str109,  -10*3600},
#line 1096 "zonetab.h"
#line 34 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str110,   11*3600},
#line 1099 "zonetab.h"
#line 75 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str111,  1*3600},
#line 1102 "zonetab.h"
      {-1},
#line 93 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str113,  4*3600},
#line 1106 "zonetab.h"
#line 50 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str114,  0*3600},
#line 1109 "zonetab.h"
      {-1},
#line 81 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str116, 1*3600},
#line 1113 "zonetab.h"
#line 80 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str117,  1*3600},
#line 1116 "zonetab.h"
      {-1},
#line 98 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str119, 2*3600},
#line 1120 "zonetab.h"
#line 316 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str120,43200},
#line 1123 "zonetab.h"
#line 58 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str121, -(2*3600+1800)},
#line 1126 "zonetab.h"
#line 187 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str122,31500},
#line 1129 "zonetab.h"
#line 207 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str123,45900},
#line 1132 "zonetab.h"
#line 213 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str124,-18000},
#line 1135 "zonetab.h"
#line 201 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str125,14400},
#line 1138 "zonetab.h"
#line 60 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str126, -4*3600},
#line 1141 "zonetab.h"
#line 200 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str127,18000},
#line 1144 "zonetab.h"
#line 57 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str128,-3*3600},
#line 1147 "zonetab.h"
#line 256 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str129,-30600},
#line 1150 "zonetab.h"
#line 94 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str130,  4*3600},
#line 1153 "zonetab.h"
#line 102 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str131,  9*3600},
#line 1156 "zonetab.h"
#line 125 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str132,            21600},
#line 1159 "zonetab.h"
#line 190 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str133,16200},
#line 1162 "zonetab.h"
#line 135 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str134,       -10800},
#line 1165 "zonetab.h"
#line 124 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str135,        -21600},
#line 1168 "zonetab.h"
      {-1},
#line 239 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str137,25200},
#line 1172 "zonetab.h"
      {-1}, {-1}, {-1}, {-1}, {-1},
#line 277 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str143,36000},
#line 1176 "zonetab.h"
#line 269 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str144,43200},
#line 1179 "zonetab.h"
#line 149 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str145,                 -21600},
#line 1182 "zonetab.h"
#line 196 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str146,32400},
#line 1185 "zonetab.h"
#line 223 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str147,-3600},
#line 1188 "zonetab.h"
#line 217 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str148,25200},
#line 1191 "zonetab.h"
#line 222 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str149,0},
#line 1194 "zonetab.h"
#line 278 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str150,46800},
#line 1197 "zonetab.h"
#line 112 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str151,                -32400},
#line 1200 "zonetab.h"
      {-1}, {-1},
#line 71 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str154,  -11*3600},
#line 1204 "zonetab.h"
      {-1}, {-1}, {-1},
#line 324 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str158,0},
#line 1208 "zonetab.h"
      {-1},
#line 181 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str160,               18000},
#line 1212 "zonetab.h"
#line 184 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str161,37800},
#line 1215 "zonetab.h"
#line 268 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str162,20700},
#line 1218 "zonetab.h"
#line 252 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str163,37800},
#line 1221 "zonetab.h"
#line 111 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str164,             16200},
#line 1224 "zonetab.h"
      {-1}, {-1},
#line 33 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str167,   10*3600},
#line 1228 "zonetab.h"
      {-1},
#line 30 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str169,    7*3600},
#line 1232 "zonetab.h"
#line 242 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str170,16200},
#line 1235 "zonetab.h"
#line 209 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str171,28800},
#line 1238 "zonetab.h"
#line 208 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str172,32400},
#line 1241 "zonetab.h"
#line 15 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str173,  0*3600},
#line 1244 "zonetab.h"
#line 232 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str174,14400},
#line 1247 "zonetab.h"
#line 267 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str175,25200},
#line 1250 "zonetab.h"
#line 266 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str176,25200},
#line 1253 "zonetab.h"
#line 226 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str177,43200},
#line 1256 "zonetab.h"
#line 43 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str178,   -8*3600},
#line 1259 "zonetab.h"
#line 225 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str179,46800},
#line 1262 "zonetab.h"
      {-1},
#line 285 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str181,-10800},
#line 1266 "zonetab.h"
#line 263 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str182,39600},
#line 1269 "zonetab.h"
#line 103 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str183,  9*3600},
#line 1272 "zonetab.h"
#line 247 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str184,39600},
#line 1275 "zonetab.h"
#line 105 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str185, 10*3600},
#line 1278 "zonetab.h"
#line 146 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str186,                    12600},
#line 1281 "zonetab.h"
#line 132 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str187,               10800},
#line 1284 "zonetab.h"
#line 101 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str188, 8*3600},
#line 1287 "zonetab.h"
#line 42 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str189,   -7*3600},
#line 1290 "zonetab.h"
#line 133 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str190,            36000},
#line 1293 "zonetab.h"
#line 41 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str191,   -6*3600},
#line 1296 "zonetab.h"
#line 206 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str192,49500},
#line 1299 "zonetab.h"
#line 301 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str193,18000},
#line 1302 "zonetab.h"
#line 212 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str194,-14400},
#line 1305 "zonetab.h"
#line 194 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str195,-43200},
#line 1308 "zonetab.h"
      {-1},
#line 262 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str197,28800},
#line 1312 "zonetab.h"
#line 182 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str198,            36000},
#line 1315 "zonetab.h"
#line 260 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str199,14400},
#line 1318 "zonetab.h"
#line 322 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str200,32400},
#line 1321 "zonetab.h"
#line 87 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str201, 2*3600},
#line 1324 "zonetab.h"
#line 289 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str202,39600},
#line 1327 "zonetab.h"
#line 155 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str203,             43200},
#line 1330 "zonetab.h"
#line 303 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str204,46800},
#line 1333 "zonetab.h"
#line 130 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str205,                   28800},
#line 1336 "zonetab.h"
#line 302 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str206,50400},
#line 1339 "zonetab.h"
#line 88 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str207,  -11*3600},
#line 1342 "zonetab.h"
      {-1},
#line 145 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str209,                   19800},
#line 1346 "zonetab.h"
      {-1},
#line 317 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str211,-10800},
#line 1350 "zonetab.h"
#line 291 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str212,39600},
#line 1353 "zonetab.h"
      {-1},
#line 199 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str214,-3600},
#line 1357 "zonetab.h"
#line 198 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str215,0},
#line 1360 "zonetab.h"
#line 296 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str216,-36000},
#line 1363 "zonetab.h"
#line 109 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str217, 12*3600},
#line 1366 "zonetab.h"
#line 131 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str218,               -43200},
#line 1369 "zonetab.h"
#line 108 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str219,12*3600},
#line 1372 "zonetab.h"
#line 173 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str220,                   32400},
#line 1375 "zonetab.h"
#line 128 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str221,         39600},
#line 1378 "zonetab.h"
      {-1},
#line 286 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str223,21600},
#line 1382 "zonetab.h"
#line 116 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str224,               -14400},
#line 1385 "zonetab.h"
#line 265 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str225,39600},
#line 1388 "zonetab.h"
      {-1},
#line 14 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str227,   0*3600},
#line 1392 "zonetab.h"
#line 304 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str228,10800},
#line 1395 "zonetab.h"
#line 318 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str229,43200},
#line 1398 "zonetab.h"
#line 294 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str230,-10800},
#line 1401 "zonetab.h"
#line 23 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str231, -7*3600},
#line 1404 "zonetab.h"
#line 251 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str232,39600},
#line 1407 "zonetab.h"
      {-1},
#line 55 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str234, -3*3600},
#line 1411 "zonetab.h"
#line 17 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str235, -4*3600},
#line 1414 "zonetab.h"
      {-1}, {-1},
#line 280 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str238,18000},
#line 1418 "zonetab.h"
#line 191 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str239,21600},
#line 1421 "zonetab.h"
#line 323 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str240,28800},
#line 1424 "zonetab.h"
      {-1},
#line 320 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str242,-7200},
#line 1428 "zonetab.h"
#line 63 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str243,-9*3600},
#line 1431 "zonetab.h"
#line 319 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str244,-3600},
#line 1434 "zonetab.h"
      {-1},
#line 249 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str246,25200},
#line 1438 "zonetab.h"
#line 248 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str247,28800},
#line 1441 "zonetab.h"
#line 150 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str248,            -7200},
#line 1444 "zonetab.h"
#line 21 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str249, -6*3600},
#line 1447 "zonetab.h"
#line 253 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str250,50400},
#line 1450 "zonetab.h"
#line 168 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str251,         28800},
#line 1453 "zonetab.h"
#line 19 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str252, -5*3600},
#line 1456 "zonetab.h"
#line 79 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str253,  1*3600},
#line 1459 "zonetab.h"
      {-1},
#line 167 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str255,                 25200},
#line 1463 "zonetab.h"
#line 44 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str256,   -9*3600},
#line 1466 "zonetab.h"
      {-1},
#line 174 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str258,                   46800},
#line 1470 "zonetab.h"
#line 214 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str259,-36000},
#line 1473 "zonetab.h"
      {-1},
#line 311 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str261,-14400},
#line 1477 "zonetab.h"
#line 122 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str262,                14400},
#line 1480 "zonetab.h"
#line 126 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str263,           3600},
#line 1483 "zonetab.h"
#line 31 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str264,    8*3600},
#line 1486 "zonetab.h"
#line 127 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str265,         3600},
#line 1489 "zonetab.h"
#line 156 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str266,           -12600},
#line 1492 "zonetab.h"
#line 113 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str267,                    10800},
#line 1495 "zonetab.h"
#line 292 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str268,14400},
#line 1498 "zonetab.h"
#line 115 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str269,                  10800},
#line 1501 "zonetab.h"
#line 114 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str270,                 14400},
#line 1504 "zonetab.h"
#line 219 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str271,36000},
#line 1507 "zonetab.h"
      {-1},
#line 314 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str273,21600},
#line 1511 "zonetab.h"
#line 69 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str274,-10*3600},
#line 1514 "zonetab.h"
#line 154 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str275,                   20700},
#line 1517 "zonetab.h"
#line 270 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str276,-39600},
#line 1520 "zonetab.h"
#line 228 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str277,-14400},
#line 1523 "zonetab.h"
      {-1},
#line 227 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str279,-10800},
#line 1527 "zonetab.h"
#line 70 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str280,-10*3600},
#line 1530 "zonetab.h"
#line 240 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str281,10800},
#line 1533 "zonetab.h"
      {-1}, {-1},
#line 300 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str284,32400},
#line 1537 "zonetab.h"
#line 178 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str285,            28800},
#line 1540 "zonetab.h"
#line 137 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str286,                    7200},
#line 1543 "zonetab.h"
#line 152 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str287,                 23400},
#line 1546 "zonetab.h"
#line 110 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str288,13*3600},
#line 1549 "zonetab.h"
#line 233 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str289,-10800},
#line 1552 "zonetab.h"
#line 310 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str290,18000},
#line 1555 "zonetab.h"
      {-1}, {-1},
#line 158 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str293,              25200},
#line 1559 "zonetab.h"
#line 261 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str294,18000},
#line 1562 "zonetab.h"
#line 230 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str295,-21600},
#line 1565 "zonetab.h"
#line 264 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str296,43200},
#line 1568 "zonetab.h"
#line 216 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str297,-3600},
#line 1571 "zonetab.h"
#line 157 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str298,         28800},
#line 1574 "zonetab.h"
      {-1},
#line 246 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str300,21600},
#line 1578 "zonetab.h"
#line 117 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str301,             34200},
#line 1581 "zonetab.h"
#line 160 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str302,                -28800},
#line 1584 "zonetab.h"
      {-1},
#line 120 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str304,         -21600},
#line 1588 "zonetab.h"
      {-1},
#line 159 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str306,             -14400},
#line 1592 "zonetab.h"
#line 119 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str307,                  -3600},
#line 1595 "zonetab.h"
#line 231 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str308,-32400},
#line 1598 "zonetab.h"
#line 297 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str309,18000},
#line 1601 "zonetab.h"
#line 40 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str310,   -5*3600},
#line 1604 "zonetab.h"
#line 140 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str311,                      7200},
#line 1607 "zonetab.h"
#line 61 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str312,-8*3600},
#line 1610 "zonetab.h"
#line 307 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str313,28800},
#line 1613 "zonetab.h"
#line 306 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str314,32400},
#line 1616 "zonetab.h"
#line 287 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str315,14400},
#line 1619 "zonetab.h"
      {-1},
#line 298 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str317,18000},
#line 1623 "zonetab.h"
      {-1},
#line 169 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str319,             7200},
#line 1627 "zonetab.h"
      {-1}, {-1}, {-1}, {-1},
#line 100 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str324,  8*3600},
#line 1631 "zonetab.h"
      {-1},
#line 53 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str326, -(1*3600+1800)},
#line 1635 "zonetab.h"
#line 288 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str327,-10800},
#line 1638 "zonetab.h"
      {-1}, {-1},
#line 290 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str330,14400},
#line 1642 "zonetab.h"
      {-1},
#line 172 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str332,                36000},
#line 1646 "zonetab.h"
      {-1},
#line 238 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str334,25200},
#line 1650 "zonetab.h"
#line 237 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str335,28800},
#line 1653 "zonetab.h"
      {-1}, {-1},
#line 235 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str338,-14400},
#line 1657 "zonetab.h"
      {-1}, {-1}, {-1},
#line 47 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str342,  -12*3600},
#line 1661 "zonetab.h"
#line 64 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str343,-9*3600},
#line 1664 "zonetab.h"
#line 165 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str344,             -14400},
#line 1667 "zonetab.h"
#line 144 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str345,               -36000},
#line 1670 "zonetab.h"
      {-1},
#line 309 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str347,-10800},
#line 1674 "zonetab.h"
      {-1},
#line 308 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str349,-7200},
#line 1678 "zonetab.h"
#line 329 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str350,18000},
#line 1681 "zonetab.h"
#line 328 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str351,21600},
#line 1684 "zonetab.h"
#line 250 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str352,14400},
#line 1687 "zonetab.h"
#line 326 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str353,32400},
#line 1690 "zonetab.h"
#line 325 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str354,36000},
#line 1693 "zonetab.h"
      {-1}, {-1}, {-1},
#line 66 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str358, -9*3600},
#line 1697 "zonetab.h"
#line 147 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str359,                7200},
#line 1700 "zonetab.h"
      {-1}, {-1}, {-1}, {-1}, {-1},
#line 170 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str365,               21600},
#line 1704 "zonetab.h"
      {-1},
#line 183 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str367,                 32400},
#line 1708 "zonetab.h"
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 321 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str375,25200},
#line 1712 "zonetab.h"
      {-1},
#line 118 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str377,             36000},
#line 1716 "zonetab.h"
#line 234 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str378,43200},
#line 1719 "zonetab.h"
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 176 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str387,            -25200},
#line 1723 "zonetab.h"
      {-1}, {-1}, {-1},
#line 313 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str391,36000},
#line 1727 "zonetab.h"
#line 312 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str392,39600},
#line 1730 "zonetab.h"
      {-1}, {-1},
#line 143 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str395,                      7200},
#line 1734 "zonetab.h"
      {-1}, {-1},
#line 171 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str398,                  28800},
#line 1738 "zonetab.h"
#line 293 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str399,39600},
#line 1741 "zonetab.h"
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 121 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str408,              -3600},
#line 1745 "zonetab.h"
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 299 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str417,46800},
#line 1749 "zonetab.h"
#line 166 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str418,                  -39600},
#line 1752 "zonetab.h"
      {-1}, {-1},
#line 164 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str421,             -18000},
#line 1756 "zonetab.h"
      {-1}, {-1}, {-1}, {-1}, {-1},
#line 315 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str427,39600},
#line 1760 "zonetab.h"
#line 72 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str428,-12*3600},
#line 1763 "zonetab.h"
      {-1}, {-1}, {-1},
#line 139 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str432,                    43200},
#line 1767 "zonetab.h"
      {-1}, {-1},
#line 49 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str435,  0*3600},
#line 1771 "zonetab.h"
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 148 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str443,                   32400},
#line 1775 "zonetab.h"
      {-1},
#line 134 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str445,                7200},
#line 1779 "zonetab.h"
      {-1}, {-1}, {-1},
#line 295 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str449,10800},
#line 1783 "zonetab.h"
      {-1}, {-1},
#line 153 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str452,         21600},
#line 1787 "zonetab.h"
      {-1}, {-1},
#line 305 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str455,43200},
#line 1791 "zonetab.h"
      {-1}, {-1},
#line 179 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str458,        3600},
#line 1795 "zonetab.h"
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 138 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str466,            18000},
#line 1799 "zonetab.h"
      {-1},
#line 177 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str468,             36000},
#line 1803 "zonetab.h"
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 327 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str476,36000},
#line 1807 "zonetab.h"
#line 175 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str477,             -18000},
#line 1810 "zonetab.h"
      {-1}, {-1}, {-1}, {-1},
#line 163 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str482,             -10800},
#line 1814 "zonetab.h"
      {-1}, {-1},
#line 65 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str485, -9*3600},
#line 1818 "zonetab.h"
#line 162 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str486,                 10800},
#line 1821 "zonetab.h"
      {-1}, {-1}, {-1}, {-1}, {-1},
#line 236 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str492,28800},
#line 1825 "zonetab.h"
      {-1}, {-1}, {-1}, {-1},
#line 161 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str497,                  3600},
#line 1829 "zonetab.h"
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 180 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str540,                3600},
#line 1837 "zonetab.h"
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1},
#line 62 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str563, -8*3600},
#line 1843 "zonetab.h"
      {-1}, {-1},
#line 107 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str566,12*3600},
#line 1847 "zonetab.h"
#line 142 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str567,                   0},
#line 1850 "zonetab.h"
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 141 "zonetab.list"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str619,              -10800}
#line 1859 "zonetab.h"
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register int o = wordlist[key].name;
          if (o >= 0)
            {
              register const char *s = o + stringpool;

              if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strncmp (str, s, len) && s[len] == '\0')
                return &wordlist[key];
            }
        }
    }
  return 0;
}
#line 330 "zonetab.list"

#line 1882 "zonetab.h"
