/* AbiWord
 * Copyright (C) 1998-2000 AbiSource, Inc.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  
 * 02111-1307, USA.
 */

// Norwegian translations provided by Edouard Lafargue / Lars Ranheim
//                                       Edouard.Lafargue@bigfoot.com
//                          Karl Trygve Kalleberg <karltk@gentoo.org>
*****************************************************************
******************************************************************
** IT IS IMPORTANT THAT THIS FILE ALLOW ITSELF TO BE INCLUDED
** MORE THAN ONE TIME.
******************************************************************
*****************************************************************/

// We use the Win32 '&' character to denote a keyboard accelerator on a menu item.
// If your platform doesn't have a way to do accelerators or uses a different
// character, remove or change the '&' in your menu constructor code.

// If the third argument is true, then this is the fall-back for
// this language (named in the first argument).

BeginSetEnc(nb,NO,true,"iso-8859-1")

    MenuLabel(AP_MENU_ID__BOGUS1__,			NULL,				NULL)

    // (id,                       		szLabel,           		szStatusMsg)

    MenuLabel(AP_MENU_ID_FILE,			"&Fil",				NULL)
    MenuLabel(AP_MENU_ID_FILE_NEW,     		"&Ny", 				"Nytt dokument")
    MenuLabel(AP_MENU_ID_FILE_OPEN,    		"&�pne",       			"�pne et eksisterende dokument")
    MenuLabel(AP_MENU_ID_FILE_CLOSE,		"&Lukk", 			"Lukk dokument")
    MenuLabel(AP_MENU_ID_FILE_SAVE,    		"&Lagre", 			"Lagre dokument")
    MenuLabel(AP_MENU_ID_FILE_SAVEAS,		"L&agre som", 			"Lagre dokument med et annet navn")
    MenuLabel(AP_MENU_ID_FILE_IMPORT,		"&Import�r", 			"Import�r et dokument")
    MenuLabel(AP_MENU_ID_FILE_EXPORT,		"&Eksport�r", 			"Eksport�r et dokument")

    MenuLabel(AP_MENU_ID_FILE_PAGESETUP,       	"S&ideoppsett",			"Endre sideopsett")
    MenuLabel(AP_MENU_ID_FILE_PRINT,            "Skriv &ut",		        "Skriv ut hele eller deler av dokumentet")
    MenuLabel(AP_MENU_ID_FILE_PRINT_DIRECTLY,   "Skriv ut &direkte",		"Skriv ut ved hjelp av intern PostScript-driver")
    MenuLabel(AP_MENU_ID_FILE_PRINT_PREVIEW,    "Forh�ndsvisning",              "Viser dokumentet slik det blir p� utskriften")
    MenuLabel(AP_MENU_ID_FILE_RECENT_1,		"&1 %s",			"�pne dette dokumentet")
    MenuLabel(AP_MENU_ID_FILE_RECENT_2,		"&2 %s",			"�pne dette dokumentet")
    MenuLabel(AP_MENU_ID_FILE_RECENT_3,		"&3 %s",			"�pne dette dokumentet")
    MenuLabel(AP_MENU_ID_FILE_RECENT_4,		"&4 %s",			"�pne dette dokumentet")
    MenuLabel(AP_MENU_ID_FILE_RECENT_5,		"&5 %s",			"�pne dette dokumentet")
    MenuLabel(AP_MENU_ID_FILE_RECENT_6,		"&6 %s",			"�pne dette dokumentet")
    MenuLabel(AP_MENU_ID_FILE_RECENT_7,		"&7 %s",			"�pne dette dokumentet")
    MenuLabel(AP_MENU_ID_FILE_RECENT_8,		"&8 %s",			"�pne dette dokumentet")
    MenuLabel(AP_MENU_ID_FILE_RECENT_9,		"&9 %s",			"�pne dette dokumentet")
    MenuLabel(AP_MENU_ID_FILE_EXIT,		"&Avslutt", 			"Lukk alle vinduer i programmet og avslutt")

    MenuLabel(AP_MENU_ID_EDIT,			"R&ediger",			NULL)
    MenuLabel(AP_MENU_ID_EDIT_UNDO,    		"Ang&re",			"Angre redigeringen")
    MenuLabel(AP_MENU_ID_EDIT_REDO,    		"Gjen&ta",			"Angre siste angring")
    MenuLabel(AP_MENU_ID_EDIT_CUT,     		"&Klipp ut",			"Klipp ut markeringen og legg det i utklippsboken")
    MenuLabel(AP_MENU_ID_EDIT_COPY,    		"K&opier",			"Kopier markeringen og legg det i utklippsboken")
    MenuLabel(AP_MENU_ID_EDIT_PASTE,		"Lim i&nn",			"Lim inn utklippsbokens innhold")
    MenuLabel(AP_MENU_ID_EDIT_PASTE_SPECIAL,  	"Lim i&nn uformattert",	        "Lim inn utklippsbokens uformatterte innhold")
    MenuLabel(AP_MENU_ID_EDIT_CLEAR,		"S&lett",			"Slett markeringen")
    MenuLabel(AP_MENU_ID_EDIT_SELECTALL,       	"&Marker alt",			"Marker hele dokumentet")
    MenuLabel(AP_MENU_ID_EDIT_FIND,	       	"&S�k",				"S�k etter tekst")
    MenuLabel(AP_MENU_ID_EDIT_REPLACE,		"&Erstatt",			"Erstatt med en annen tekst")
    MenuLabel(AP_MENU_ID_EDIT_GOTO,	       	"G� t&il",			"Flytt mark�ren til et spesifisert sted")
    MenuLabel(AP_MENU_ID_EDIT_EDITHEADER,     	"Rediger topptekst",		"Redigerer toppteksten p� denne siden")
    MenuLabel(AP_MENU_ID_EDIT_EDITFOOTER,     	"Rediger bunntekst",		"Redigerer bunnteksten p� denne siden")
    MenuLabel(AP_MENU_ID_EDIT_REMOVEHEADER,    	"Fjern topptekst",		"Fjerner toppteksten p� denne siden")
    MenuLabel(AP_MENU_ID_EDIT_REMOVEFOOTER,    	"Fjern bunntekst",		"Fjerner bunnteksten p� denne siden")

    MenuLabel(AP_MENU_ID_VIEW,			"&Vis",				NULL)
    MenuLabel(AP_MENU_ID_VIEW_NORMAL,	      	"&Normaloppsett",		"Normalvisning")
    MenuLabel(AP_MENU_ID_VIEW_WEB,	       	"&Vevoppsett",			"Vevoppsett")
    MenuLabel(AP_MENU_ID_VIEW_PRINT,	       	"&Utskriftsoppsett",		"Utskriftsoppsett")
    MenuLabel(AP_MENU_ID_VIEW_TOOLBARS,		"&Verkt�ylinjer",               "Verkt�ylinjer")
    MenuLabel(AP_MENU_ID_VIEW_TB_STD,		"&Standard",			"Vis eller fjern standard verkt�ylinje")
    MenuLabel(AP_MENU_ID_VIEW_TB_FORMAT,       	"&Formatering",			"Vis eller fjern verkt�ylinje for formatering")
    MenuLabel(AP_MENU_ID_VIEW_TB_EXTRA,		"&Ekstra",			"Vis eller fjern ekstraverkt�ylinje")
    MenuLabel(AP_MENU_ID_VIEW_RULER,		"&Linjal",			"Vis eller fjern linjaler")
    MenuLabel(AP_MENU_ID_VIEW_STATUSBAR,       	"S&tatuslinje",			"Vis eller fjern statuslinjen")
    MenuLabel(AP_MENU_ID_VIEW_SHOWPARA,		"Vis Para&grafer",		"Vis tegn som ikke skal skrives ut")
    MenuLabel(AP_MENU_ID_VIEW_HEADFOOT,		"&Topptekst og bunntekst",	"Rediger tekst p� toppen eller bunnen av hver side")
    MenuLabel(AP_MENU_ID_VIEW_FULLSCREEN,       "F&ullskjerm",                  "Viser dokumentet over hele skjermen")
    MenuLabel(AP_MENU_ID_VIEW_ZOOM,	       	"&Forst�rrelse",	       	"Forminsk eller forst�rr dokumentet p� skjermen")
    MenuLabel(AP_MENU_ID_VIEW_ZOOM_MENU,       	"&Forst�rrelse",	       	"Forminsk eller forst�rr dokumentet p� skjermen")
    MenuLabel(AP_MENU_ID_VIEW_ZOOM_200,       	"Forst�rr til &200%",	       	"Forst�rr dokumentet p� skjermen til 200%")
    MenuLabel(AP_MENU_ID_VIEW_ZOOM_100,       	"Forst�rr til &100%",	       	"Forst�rr dokumentet p� skjermen til 100%")
    MenuLabel(AP_MENU_ID_VIEW_ZOOM_75,       	"Forst�rr til &75%",	       	"Forst�rr dokumentet p� skjermen til 75%")
    MenuLabel(AP_MENU_ID_VIEW_ZOOM_50,       	"Forst�rr til &50%",	       	"Forst�rr dokumentet p� skjerment til 50%")
    MenuLabel(AP_MENU_ID_VIEW_ZOOM_WIDTH,      	"Forst�rr til &sidevidde",	"Forst�rr dokumentet til sidebredden")
    MenuLabel(AP_MENU_ID_VIEW_ZOOM_WHOLE,      	"Forst�rr til &hele siden",	"Forst�rr dokumentet til hele siden")

    MenuLabel(AP_MENU_ID_INSERT,	       	"&Sett inn",			NULL)
    MenuLabel(AP_MENU_ID_INSERT_BREAK,		"&Skift",			"Erstatt en side, rekke, eller sektions skift")
    MenuLabel(AP_MENU_ID_INSERT_PAGENO,		"Side t&all",			"Erstatt en automatisk oppdatert side nummer")
    MenuLabel(AP_MENU_ID_INSERT_DATETIME,      	"&Dato og tid",			"Erstatt dato og/eller tid")
    MenuLabel(AP_MENU_ID_INSERT_FIELD,		"F&elt",			"Erstatt et kalkuleret felt")
    MenuLabel(AP_MENU_ID_INSERT_SYMBOL,		"Sy&mbol",			"Erstatt et symbol eller andre spesielle tegn")
    MenuLabel(AP_MENU_ID_INSERT_ENDNOTE,       	"Sl&uttnotis",			"Sett inn en sluttnotis")
    MenuLabel(AP_MENU_ID_INSERT_PICTURE,       	"&Bilde",			"Sett inn et bilde")    MenuLabel(AP_MENU_ID_INSERT_GRAPHIC,       	"Bi&lde",			"Erstatt et bilde fra en fil")
    MenuLabel(AP_MENU_ID_INSERT_CLIPART,       	"&Utklippsbilde",		"Sett inn et utklippsbilde")
    MenuLabel(AP_MENU_ID_INSERT_GRAPHIC,       	"&Fra fil",			"Sett inn et bilde fra en grafikkfil")

    MenuLabel(AP_MENU_ID_FORMAT,	       	"Forma&ter",			NULL)
    MenuLabel(AP_MENU_ID_FMT_LANGUAGE,	       	"Vel s&pr�k",			"Endret spr�ket for den markerte teksten")
    MenuLabel(AP_MENU_ID_FMT_FONT,	      	"&Skrifttype",			"Endre skrifttypen p� den markerte teksten")
    MenuLabel(AP_MENU_ID_FMT_PARAGRAPH,		"Pa&ragraf",			"Endre formatet p� den markerte paragrafen")
    MenuLabel(AP_MENU_ID_FMT_BULLETS,		"Punktoppst&illing",		"Tilf�y eller endre punktopstillingen for den markerte paragrafen")
    MenuLabel(AP_MENU_ID_FMT_DOCUMENT,          "Utskr&iftsformat",             "Endre sidest�rrelse og marger")
    MenuLabel(AP_MENU_ID_FMT_BORDERS,		"Ra&mmer og skygge",		"Tilf�y rammer og skygge til den markerte teksten")
    MenuLabel(AP_MENU_ID_FMT_COLUMNS,		"&Kolonner",			"Endre antall kolonner")
    MenuLabel(AP_MENU_ID_FMT_TOGGLECASE,       	"&Endre bokstavtype",		"Endre bokstavtypen p� markert tekst")
    MenuLabel(AP_MENU_ID_FMT_BACKGROUND,        "Endre bak&grunn",		"Endre bakgrunnsfargen til dokumentet")
    MenuLabel(AP_MENU_ID_FMT_STYLE,	       	"&Skriftstil",			"Definer eller tilf�y skrifttype p� den markerte teksten")
    MenuLabel(AP_MENU_ID_FMT_TABS,	       	"&Tabulatorer",			"Sett tabulatorstopp")
    MenuLabel(AP_MENU_ID_FMT_BOLD,	       	"&Fet",				"Gj�r markert tekst fet (skift)")
    MenuLabel(AP_MENU_ID_FMT_ITALIC,		"&Kursiv",			"Gj�r markert tekst kursiv (skift)")
    MenuLabel(AP_MENU_ID_FMT_UNDERLINE,		"&Understreket",                "Understrek markert tekst (skift)")
    MenuLabel(AP_MENU_ID_FMT_OVERLINE,		"&Overstreket",                 "Overstreke markert tekst (skift)")
    MenuLabel(AP_MENU_ID_FMT_STRIKE,		"&Gjennomstrekning",            "Gjennomstrek markert tekst (skift)")
    MenuLabel(AP_MENU_ID_FMT_TOPLINE,		"&Topplinje",                   "Aktiv�r/deaktiv�r linje over det merkede omr�det")
    MenuLabel(AP_MENU_ID_FMT_BOTTOMLINE,       	"&Bunnlinje",                   "Aktiv�r/deaktiv�r linje under det merkede omr�det")
    MenuLabel(AP_MENU_ID_FMT_SUPERSCRIPT,       "&Hevet",                       "Hev markert tekst (skift)")
    MenuLabel(AP_MENU_ID_FMT_SUBSCRIPT,		"S&enket",                      "Senk markert tekst (skift)")

    MenuLabel(AP_MENU_ID_TOOLS,                 "&Verkt�y",			NULL)
    MenuLabel(AP_MENU_ID_TOOLS_SPELLING,       	"&Stavekontroll",               "Sjekk dokumentet for stavefeil")
    MenuLabel(AP_MENU_ID_TOOLS_SPELL,		"&Stavekontroll",               "Sjekk dokumentet for stavefeil")
    MenuLabel(AP_MENU_ID_TOOLS_AUTOSPELL,      	"&Fortl�pende stavekontroll",   "Fortl�pende stavekontroll av dokumentet")
    MenuLabel(AP_MENU_ID_TOOLS_SPELLPREFS,    	"&Stavekontrollinnstilligner",  "Endre innstillinger for stavekontroll")
    MenuLabel(AP_MENU_ID_TOOLS_WORDCOUNT,       "&Ordtelling",		        "Tell antall ord i dokumentet")
    MenuLabel(AP_MENU_ID_TOOLS_OPTIONS,		"&Innstillinger",		"Endre innstillinger")
    MenuLabel(AP_MENU_ID_TOOLS_LANGUAGE,      	"S&pr�k",			"Endre spr�ket til merket tekst")
    MenuLabel(AP_MENU_ID_TOOLS_PLUGINS,		"&Programtillegg",             	"H�ndt�r programtillegg")
    MenuLabel(AP_MENU_ID_TOOLS_SCRIPTS,		"S&kript",			"Starter hjelpeskript")

    MenuLabel(AP_MENU_ID_ALIGN,			"&Juster",			NULL)
    MenuLabel(AP_MENU_ID_ALIGN_LEFT,		"&Venstrestilt",		"Venstrestill paragrafen")
    MenuLabel(AP_MENU_ID_ALIGN_CENTER,		"&Midtstilt",			"Midtstill paragrafen")
    MenuLabel(AP_MENU_ID_ALIGN_RIGHT,		"&H�yrestilt",			"H�yrestill paragrafen")
    MenuLabel(AP_MENU_ID_ALIGN_JUSTIFY,		"&Like marger",			"Sett like marger p� paragrafen")

    MenuLabel(AP_MENU_ID_WEB,		        "N&ettside",		        NULL)
    MenuLabel(AP_MENU_ID_WEB_SAVEASWEB,		"&Lagre som nettside",	        "Lagrer dokumentet som nettside")
    MenuLabel(AP_MENU_ID_WEB_WEBPREVIEW,       	"&Vis som nettside",  	        "Viser dokumentet som nettside")

    MenuLabel(AP_MENU_ID_WINDOW,	        "&Vindu",			NULL)
    MenuLabel(AP_MENU_ID_WINDOW_NEW,		"&Nytt vindu",			"�pne et nytt vindu for dokumentet")
    MenuLabel(AP_MENU_ID_WINDOW_1,	       	"&1 %s",			"Hent dette vinduet")
    MenuLabel(AP_MENU_ID_WINDOW_2,	       	"&2 %s",			"Hent dette vinduet")
    MenuLabel(AP_MENU_ID_WINDOW_3,	       	"&3 %s",			"Hent dette vinduet")
    MenuLabel(AP_MENU_ID_WINDOW_4,	       	"&4 %s",			"Hent dette vinduet")
    MenuLabel(AP_MENU_ID_WINDOW_5,	       	"&5 %s",			"Hent dette vinduet")
    MenuLabel(AP_MENU_ID_WINDOW_6,	       	"&6 %s",			"Hent dette vinduet")
    MenuLabel(AP_MENU_ID_WINDOW_7,	       	"&7 %s",			"Hent dette vinduet")
    MenuLabel(AP_MENU_ID_WINDOW_8,	       	"&8 %s",			"Hent dette vinduet")
    MenuLabel(AP_MENU_ID_WINDOW_9,	       	"&9 %s",			"Hent dette vinduet")
    MenuLabel(AP_MENU_ID_WINDOW_MORE,		"&Flere vinduer",		"Vis full liste av vinduer")

    MenuLabel(AP_MENU_ID_HELP,			"&Hjelp",		        NULL)
    MenuLabel(AP_MENU_ID_HELP_CREDITS,		"&Bidragsytere",	        "Vis informasjon om utviklerne av AbiWord")
    MenuLabel(AP_MENU_ID_HELP_CONTENTS,		"&Innhold",	                "Vis tilgjengelig hjelp")
    MenuLabel(AP_MENU_ID_HELP_INDEX,		"I&ndeks",		        "Vis indeks over tilgjengelig hjelp")
    MenuLabel(AP_MENU_ID_HELP_CHECKVER,		"Vis &Versjon",                 "Vis programmets versjonsnummer")
    MenuLabel(AP_MENU_ID_HELP_SEARCH,		"&S�k etter hjelp",	        "S�k p� internett etter hjelp")
    MenuLabel(AP_MENU_ID_HELP_ABOUT,		"&Om %s",		        "Vis programinformasjon, versjonsnummer og copyright")
    MenuLabel(AP_MENU_ID_HELP_ABOUTOS,		"Om O&pen Source",              "Vis informasjon om Open Source")
    MenuLabel(AP_MENU_ID_HELP_ABOUT_GNU,	"Om &GNU fri programvare",      "Vis informasjon om GNU-prosjektet")
    MenuLabel(AP_MENU_ID_HELP_ABOUT_GNOMEOFFICE,"Om G&NOME Office",             "Vis informasjon GNOME Office-prosjektet")


    MenuLabel(AP_MENU_ID_SPELL_SUGGEST_1,       "%s",                           "Erstatt med denne stavem�ten")
    MenuLabel(AP_MENU_ID_SPELL_SUGGEST_2,       "%s",                           "Erstatt med denne stavem�ten")
    MenuLabel(AP_MENU_ID_SPELL_SUGGEST_3,       "%s",                           "Erstatt med denne stavem�ten")
    MenuLabel(AP_MENU_ID_SPELL_SUGGEST_4,       "%s",                           "Erstatt med denne stavem�ten")
    MenuLabel(AP_MENU_ID_SPELL_SUGGEST_5,       "%s",                           "Erstatt med denne stavem�ten")
    MenuLabel(AP_MENU_ID_SPELL_SUGGEST_6,       "%s",                           "Erstatt med denne stavem�ten")
    MenuLabel(AP_MENU_ID_SPELL_SUGGEST_7,       "%s",                           "Erstatt med denne stavem�ten")
    MenuLabel(AP_MENU_ID_SPELL_SUGGEST_8,       "%s",                           "Erstatt med denne stavem�ten")
    MenuLabel(AP_MENU_ID_SPELL_SUGGEST_9,       "%s",                           "Erstatt med denne stavem�ten")
    MenuLabel(AP_MENU_ID_SPELL_IGNOREALL,       "Ign&orer alle",                "Alltid ignor�r dette ordet i gjeldende dokument")
    MenuLabel(AP_MENU_ID_SPELL_ADD,             "&Legg til",                    "Legg til ordet i egendefinert ordliste")

    MenuLabel(AP_MENU_ID_INSERT_AUTOTEXT,       "&Autotekst",                   "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_ATTN,         "Viktig:",                      "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_CLOSING,      "Hilsen:",                      "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_MAIL,         "Postinstruksjoner:",           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_REFERENCE,    "Referanse:",                   "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_SALUTATION,   "Innledende hilsen:",           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_SUBJECT,      "Emne:",                        "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_EMAIL,        "E-post:",                      "")

    MenuLabel(AP_MENU_ID_AUTOTEXT_ATTN_1,       "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_ATTN_2,       "%s",                           "")
        
    MenuLabel(AP_MENU_ID_AUTOTEXT_CLOSING_1,    "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_CLOSING_2,    "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_CLOSING_3,    "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_CLOSING_4,    "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_CLOSING_5,    "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_CLOSING_6,    "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_CLOSING_7,    "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_CLOSING_8,    "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_CLOSING_9,    "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_CLOSING_10,   "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_CLOSING_11,   "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_CLOSING_12,   "%s",                           "")

    MenuLabel(AP_MENU_ID_AUTOTEXT_MAIL_1,       "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_MAIL_2,       "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_MAIL_3,       "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_MAIL_4,       "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_MAIL_5,       "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_MAIL_6,       "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_MAIL_7,       "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_MAIL_8,       "%s",                           "")

    MenuLabel(AP_MENU_ID_AUTOTEXT_REFERENCE_1,  "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_REFERENCE_2,  "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_REFERENCE_3,  "%s",                           "")

    MenuLabel(AP_MENU_ID_AUTOTEXT_SALUTATION_1, "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_SALUTATION_2, "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_SALUTATION_3, "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_SALUTATION_4, "%s",                           "")

    MenuLabel(AP_MENU_ID_AUTOTEXT_SUBJECT_1,    "%s",                           "")

    MenuLabel(AP_MENU_ID_AUTOTEXT_EMAIL_1,      "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_EMAIL_2,      "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_EMAIL_3,      "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_EMAIL_4,      "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_EMAIL_5,      "%s",                           "")
    MenuLabel(AP_MENU_ID_AUTOTEXT_EMAIL_6,      "%s",                           "")

    MenuLabel(AP_MENU_ID__BOGUS2__,             NULL,                           NULL)

EndSet()
