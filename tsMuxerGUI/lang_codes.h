#ifndef LANG_CODES_H_
#define LANG_CODES_H_

#include <QString>

struct QtvLangCode
{
 QString code;
 QString lang;
};

static const char* shortLangList[][2] =
{
{"chi","Chinese"},
{"nld","\"Dutch; Flemish\""},
{"eng","English"},
{"fin","Finnish"},
{"fre","French"},
{"ger","German"},
{"ita","Italian"},
{"jpn","Japanese"},
{"nor","Norwegian"},
{"por","Portuguese"},
{"rus","Russian"},
{"spa","\"Spanish; Castilian\""},
{"swe","Swedish\""}
};

static const char* fullLangList[][2]=
{
{"ace","Acehnese, Achinese"},
{"ach","Acoli"},
{"ada","Adangme"},
{"ady","\"Adyghe; Adygei\""},
{"aar","Afar"},
{"afh","Afrihili"},
{"afr","Afrikaans"},
{"afa","Afro-Asiatic (Other)"},
{"ain","Ainu"},
{"aka","Akan"},
{"akk","Akkadian"},
{"alb","Albanian"},
{"sqi","Albanian"},
{"ale","Aleut"},
{"alg","Algonquian languages"},
{"tut","Altaic (Other)"},
{"amh","Amharic"},
{"anp","Angika"},
{"apa","Apache languages"},
{"ara","Arabic"},
{"arg","Aragonese"},
{"arc","Aramaic"},
{"arp","Arapaho"},
{"arn","Araucanian"},
{"arw","Arawak"},
{"arm","Armenian"},
{"hye","Armenian"},
{"rup","\"Aromanian; Arumanian; Macedo-Romanian\""},
{"art","Artificial (Other)"},
{"asm","Assamese"},
{"ast","\"Asturian; Bable\""},
{"ath","Athapascan languages"},
{"aus","Australian languages"},
{"bar","Austro-Bavarian"},
{"map","Austronesian (Other)"},
{"ava","Avaric"},
{"ave","Avestan"},
{"awa","Awadhi"},
{"aym","Aymara"},
{"aze","Azerbaijani"},
{"ban","Balinese"},
{"bat","Baltic (Other)"},
{"bal","Baluchi"},
{"bam","Bambara"},
{"bai","Bamileke languages"},
{"bad","Banda"},
{"bnt","Bantu (Other)"},
{"bas","Basa"},
{"bak","Bashkir"},
{"eus","Basque"},
{"eus","Basque"},
{"btk","Batak (Indonesia)"},
{"bej","Beja"},
{"bel","Belarusian"},
{"bem","Bemba"},
{"ben","Bengali"},
{"ber","Berber (Other)"},
{"bho","Bhojpuri"},
{"bih","Bihari"},
{"bik","Bikol languages"},
{"bin","Bini"},
{"bis","Bislama"},
{"byn","\"Blin; Bilin\""},
{"bos","Bosnian"},
{"bra","Brij Bhasha"},
{"bre","Breton"},
{"bug","Buginese"},
{"bul","Bulgarian"},
{"bua","Buriat"},
{"bur","Burmese"},
{"mya","Burmese"},
{"cad","Caddo"},
{"car","Carib"},
{"cat","\"Catalan; Valencian\""},
{"cau","Caucasian (Other)"},
{"ceb","Cebuano"},
{"cel","Celtic (Other)"},
{"cai","Central American Indian (Other)"},
{"chg","Chagatai"},
{"cmc","Chamic languages"},
{"cha","Chamorro"},
{"che","Chechen"},
{"chr","Cherokee"},
{"chy","Cheyenne"},
{"chb","Chibcha"},
{"nya","\"Chichewa; Chewa; Nyanja\""},
{"chi","Chinese"},
{"zho","Chinese"},
{"chn","Chinook jargon"},
{"cho","Choctaw"},
{"chu","\"Church Slavonic; Church Slavic; Old Church Slavonic; Old Slavonic; Old Bulgarian\""},
{"chk","Chuukese"},
{"chv","Chuvash"},
{"nwc","\"Classical Newari; Old Newari; Classical Nepal Bhasa\""},
{"syc","Classical Syriac"},
{"cop","Coptic"},
{"cor","Cornish"},
{"cos","Corsican"},
{"cre","Cree"},
{"mus","\"Creek; Muskogean\""},
{"crp","Creoles and Pidgins (Other)"},
{"cpe","Creoles and Pidgins, English-based (Other)"},
{"cpf","Creoles and Pidgins, French-based (Other)"},
{"cpp","Creoles and Pidgins, Portuguese-based (Other)"},
{"crh","Crimean Tatar (Crimean Turkish)"},
{"scr","Croatian"},
{"hrv","Croatian"},
{"cus","Cushitic (Other)"},
{"cze","Czech"},
{"ces","Czech"},
{"dak","Dakota"},
{"dan","Danish"},
{"dar","Dargwa"},
{"day","Dayak"},
{"del","Delaware"},
{"chp","Dene Suline"},
{"din","Dinka"},
{"div","\"Divehi; Dhivehi; Maldivian\""},
{"doi","Dogri"},
{"dgr","Dogrib"},
{"dra","Dravidian (Other)"},
{"dua","Duala"},
{"dut","\"Dutch; Flemish\""},
{"nld","\"Dutch; Flemish\""},
{"dum","Dutch, Middle (ca. 1050?1350)"},
{"dyu","Dyula"},
{"dzo","Dzongkha"},
{"efi","Efik"},
{"egy","Egyptian (Ancient)"},
{"eka","Ekajuk"},
{"elx","Elamite"},
{"eng","English"},
{"enm","English, Middle (ca. 1100?1500)"},
{"ang","English, Old (ca. 450?1100)"},
{"myv","Erzya"},
{"epo","Esperanto"},
{"est","Estonian"},
{"ewe","Ewe"},
{"ewo","Ewondo"},
{"fan","Fang"},
{"fat","Fanti"},
{"fao","Faroese"},
{"fij","Fijian"},
{"fil","Filipino"},
{"fin","Finnish"},
{"fiu","Finno-Ugrian (Other)"},
{"fon","Fon"},
{"fre","French"},
{"fra","French"},
{"frm","French, Middle (ca. 1400?1600)"},
{"fro","French, Old (842?ca. 1400)"},
{"frs","Frisian, Eastern"},
{"frr","Frisian, Northern"},
{"fry","Frisian, Western"},
{"fur","Friulian"},
{"ful","Fulah"},
{"gaa","Ga"},
{"glg","Galician"},
{"lug","Ganda"},
{"gay","Gayo"},
{"gba","Gbaya"},
{"gez","Ge'ez"},
{"geo","Georgian"},
{"kat","Georgian"},
{"ger","German"},
{"deu","German"},
{"gsw","German, Alemannic"},
{"nds","\"German, Low; Low German; Saxon, Low; Low Saxon\""},
{"gmh","German, Middle High (ca. 1050?1500)"},
{"goh","German, Old High (ca. 750?1050)"},
{"gem","Germanic (Other)"},
{"gil","\"Gilbertese; Kiribati\""},
{"gon","Gondi"},
{"gor","Gorontalo"},
{"got","Gothic"},
{"grb","Grebo"},
{"grc","Greek, Ancient (to 1453)"},
{"gre","Greek, Modern (1453)"},
{"ell","Greek, Modern (1453)"},
{"kal","\"Greenlandic; Kalaallisut\""},
{"grn","Guarani"},
{"guj","Gujarati"},
{"gwi","Gwich?in"},
{"hai","Haida"},
{"hat","\"Haitian Creole; Haitian\""},
{"hau","Hausa"},
{"haw","Hawaiian"},
{"heb","Hebrew"},
{"her","Herero"},
{"hil","Hiligaynon"},
{"him","Himachali"},
{"hin","Hindi"},
{"hmo","Hiri Motu"},
{"hit","Hittite"},
{"hmn","Hmong"},
{"hun","Hungarian"},
{"hup","Hupa"},
{"iba","Iban"},
{"ice","Icelandic"},
{"isl","Icelandic"},
{"ido","Ido"},
{"ibo","Igbo"},
{"ijo","Ijo"},
{"ilo","Iloko"},
{"smn","Inari Sami"},
{"inc","Indic (Other)"},
{"ine","Indo-European (Other)"},
{"ind","Indonesian"},
{"inh","Ingush"},
{"ina","Interlingua (International Auxiliary Language Association)"},
{"ile","Interlingue"},
{"iku","Inuktitut"},
{"ipk","Inupiaq"},
{"ira","Iranian (Other)"},
{"gle","Irish"},
{"mga","Irish, Middle (900?1200)"},
{"sga","Irish, Old (to 900)"},
{"iro","Iroquoian languages"},
{"ita","Italian"},
{"jpn","Japanese"},
{"jav","Javanese"},
{"jrb","Judeo-Arabic"},
{"jpr","Judeo-Persian"},
{"kbd","Kabardian"},
{"kab","Kabyle"},
{"kac","Kachin"},
{"xal","\"Kalmyk; Oirat\""},
{"kam","Kamba"},
{"kan","Kannada"},
{"kau","Kanuri"},
{"krc","Karachay-Balkar"},
{"kaa","Kara-Kalpak"},
{"krl","Karelian"},
{"kar","Karen"},
{"kas","Kashmiri"},
{"csb","Kashubian"},
{"kaw","Kawi"},
{"kaz","Kazakh"},
{"kha","Khasi"},
{"khm","Khmer"},
{"khi","Khoisan (Other)"},
{"kho","Khotanese"},
{"kik","Kikuyu"},
{"kmb","Kimbundu"},
{"kin","Kinyarwanda"},
{"kir","Kirghiz"},
{"tlh","Klingon"},
{"kom","Komi"},
{"kon","Kongo"},
{"kok","Konkani"},
{"kor","Korean"},
{"kos","Kosraean"},
{"kpe","Kpelle"},
{"kro","Kru"},
{"kua","\"Kuanyama; Kwanyama\""},
{"kum","Kumyk"},
{"kur","Kurdish"},
{"kru","Kurukh"},
{"kut","Kutenai"},
{"lad","Ladino"},
{"lah","Lahnda"},
{"lam","Lamba"},
{"lao","Lao"},
{"lat","Latin"},
{"lav","Latvian"},
{"lez","Lezghian"},
{"lim","\"Limburgish; Limburger; Limburgan\""},
{"lin","Lingala"},
{"lit","Lithuanian"},
{"jbo","Lojban"},
{"loz","Lozi"},
{"lub","Luba-Katanga"},
{"lua","Luba-Lulua"},
{"lui","Luise?o"},
{"smj","Lule Sami"},
{"lun","Lunda"},
{"luo","Luo (Kenya and Tanzania)"},
{"lus","Lushai"},
{"ltz","\"Luxembourgish; Letzeburgesch\""},
{"mac","Macedonian"},
{"mkd","Macedonian"},
{"mad","Madurese"},
{"mag","Magahi"},
{"mai","Maithili"},
{"mak","Makasar"},
{"mlg","Malagasy"},
{"may","Malay"},
{"msa","Malay"},
{"mal","Malayalam"},
{"mlt","Maltese"},
{"mnc","Manchu"},
{"mdr","Mandar"},
{"man","Mandingo"},
{"mni","Manipuri"},
{"mno","Manobo languages"},
{"glv","Manx"},
{"mao","Maori"},
{"mri","Maori"},
{"mar","Marathi"},
{"chm","Mari"},
{"mah","Marshallese"},
{"mwr","Marwari"},
{"mas","Masai"},
{"myn","Mayan languages"},
{"men","Mende"},
{"mic","\"Mi'kmaq; Micmac\""},
{"min","Minangkabau"},
{"mwl","Mirandese"},
{"moh","Mohawk"},
{"mdf","Moksha"},
{"mol","Moldavian"},
{"mkh","Mon-Khmer (Other)"},
{"lol","Mongo"},
{"mon","Mongolian"},
{"mos","Mossi"},
{"mun","Munda languages"},
{"nah","Nahuatl"},
{"nau","Nauruan"},
{"nav","\"Navajo; Navaho\""},
{"nde","Ndebele, North"},
{"nbl","Ndebele, South"},
{"ndo","Ndonga"},
{"nap","Neapolitan"},
{"new","\"Nepal Bhasa; Newari\""},
{"nep","Nepali"},
{"nia","Nias"},
{"nic","Niger-Kordofanian (Other)"},
{"ssa","Nilo-Saharan (Other)"},
{"niu","Niuean"},
{"nqo","N'Ko"},
{"nog","Nogai"},
{"non","Norse, Old"},
{"nai","North American Indian (Other)"},
{"sme","Northern Sami"},
{"nor","Norwegian"},
{"nob","Norwegian Bokm?l"},
{"nno","Norwegian Nynorsk"},
{"nub","Nubian languages"},
{"nym","Nyamwezi"},
{"nyn","Nyankole"},
{"nyo","Nyoro"},
{"nzi","Nzima"},
{"oci","\"Occitan (post 1500); Proven?al\""},
{"oji","Ojibwa, Anishinaabe languages"},
{"ori","Oriya"},
{"orm","Oromo"},
{"osa","Osage"},
{"oss","\"Ossetian; Ossetic\""},
{"oto","Otomian languages"},
{"pal","Pahlavi (Middle Persian)"},
{"pau","Palauan"},
{"pli","Pali"},
{"pam","Pampanga"},
{"pag","Pangasinan"},
{"pap","Papiamento"},
{"paa","Papuan (Other)"},
{"per","Persian"},
{"fas","Persian"},
{"peo","Persian, Old (ca. 600?400 BC)"},
{"phi","Philippine (Other)"},
{"phn","Phoenician"},
{"pon","Pohnpeian"},
{"pol","Polish"},
{"por","Portuguese"},
{"pra","Prakrit languages"},
{"pro","Proven?al, Old (to 1500)"},
{"pan","\"Punjabi; Panjabi\""},
{"pus","Pushto"},
{"que","Quechuan languages"},
{"roh","Raeto-Romance"},
{"raj","Rajasthani"},
{"rap","Rapanui"},
{"rar","Rarotongan"},
{"roa","Romance (Other)"},
{"rum","Romanian"},
{"ron","Romanian"},
{"rom","Romany"},
{"run","Rundi"},
{"rus","Russian"},
{"sal","Salishan languages"},
{"sam","Samaritan Aramaic"},
{"smi","Sami languages (Other)"},
{"smo","Samoan"},
{"sad","Sandawe"},
{"sag","Sango"},
{"san","Sanskrit"},
{"sat","Santali"},
{"srd","Sardinian"},
{"sas","Sasak"},
{"sco","Scots"},
{"gla","\"Scottish Gaelic; Gaelic\""},
{"sel","Selkup"},
{"sem","Semitic (Other)"},
{"scc","Serbian"},
{"srp","Serbian"},
{"srr","Serer"},
{"shn","Shan"},
{"sna","Shona"},
{"iii","Sichuan Yi"},
{"scn","Sicilian"},
{"sid","Sidamo"},
{"sgn","Sign languages"},
{"bla","Siksika"},
{"snd","Sindhi"},
{"sin","\"Sinhalese; Sinhala\""},
{"sit","Sino-Tibetan (Other)"},
{"sio","Siouan languages"},
{"sms","Skolt Sami"},
{"den","Slave (Athapascan)"},
{"sla","Slavic (Other)"},
{"slo","Slovak"},
{"slk","Slovak"},
{"slv","Slovenian"},
{"sog","Sogdian"},
{"som","Somali"},
{"son","Songhai"},
{"snk","Soninke"},
{"wen","Sorbian languages"},
{"dsb","Sorbian, Lower"},
{"hsb","Sorbian, Upper"},
{"nso","\"Sotho; Northern; Pedi; Sepedi\""},
{"sot","Sotho, Southern"},
{"sai","South American Indian (Other)"},
{"alt","Southern Altai"},
{"sma","Southern Sami"},
{"spa","\"Spanish; Castilian\""},
{"srn","Sranan Tongo"},
{"suk","Sukuma"},
{"sux","Sumerian"},
{"sun","Sundanese"},
{"sus","Susu"},
{"swa","Swahili"},
{"ssw","Swati"},
{"swe","Swedish"},
{"syr","Syriac"},
{"tgl","Tagalog"},
{"tah","Tahitian"},
{"tai","Tai (Other)"},
{"tgk","Tajik"},
{"tmh","Tamashek"},
{"tam","Tamil"},
{"tat","Tatar"},
{"tel","Telugu"},
{"ter","Tereno"},
{"tet","Tetum, Lia-Tetun"},
{"tha","Thai"},
{"tib","Tibetan"},
{"bod","Tibetan"},
{"tig","Tigre"},
{"tir","Tigrinya"},
{"tem","Timne"},
{"tiv","Tiv"},
{"tli","Tlingit"},
{"tpi","Tok Pisin"},
{"tkl","Tokelau"},
{"tog","Tonga (Malawi)"},
{"ton","Tongan"},
{"tsi","Tsimshian"},
{"tso","Tsonga"},
{"tsn","Tswana"},
{"tum","Tumbuka"},
{"tup","Tupi languages"},
{"tur","Turkish"},
{"ota","Turkish, Ottoman (1500?1928)"},
{"tuk","Turkmen"},
{"tvl","Tuvalu"},
{"tyv","Tuvinian"},
{"twi","Twi"},
{"udm","Udmurt"},
{"uga","Ugaritic"},
{"uig","\"Uighur; Uyghur\""},
{"ukr","Ukrainian"},
{"umb","Umbundu"},
{"urd","Urdu"},
{"uzb","Uzbek"},
{"vai","Vai"},
{"ven","Venda"},
{"vie","Vietnamese"},
{"vol","Volap?k"},
{"vot","Votic"},
{"wak","Wakashan languages"},
{"wal","Walamo"},
{"wln","Walloon"},
{"war","Waray"},
{"was","Washo"},
{"wel","Welsh"},
{"cym","Welsh"},
{"wol","Wolof"},
{"xho","Xhosa"},
{"sah","Yakut"},
{"yao","Yao"},
{"yap","Yapese"},
{"yid","Yiddish"},
{"yor","Yoruba"},
{"ypk","Yupik languages"},
{"znd","Zande"},
{"zza","\"Zaza; Dimili; Dimli; Kirdki; Kirmanjki; Zazaki\""},
{"zap","Zapotec"},
{"zen","Zenaga"},
{"zha","\"Zhuang; Chuang\""},
{"zul","Zulu"},
{"zun","Zuni'"}
};

#endif
