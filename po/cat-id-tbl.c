/* Automatically generated by po2tbl.sed from kbd.pot.  */

#if HAVE_CONFIG_H
# include <config.h>
#endif

#include "libgettext.h"

const struct _msg_ent _msg_tbl[] = {
  {"", 1},
  {"openvt: %s: illegal vt number\n", 2},
  {"openvt: only root can use the -u flag.\n", 3},
  {"Couldnt get a file descriptor referring to the console\n", 4},
  {"openvt: cannot find a free vt\n", 5},
  {"openvt: cannot check whether vt %d is free\n", 6},
  {"        use `openvt -f' to force.\n", 7},
  {"openvt: vt %d is in use; command aborted\n", 8},
  {"openvt: Unable to open %s: %s\n", 9},
  {"openvt: Cannot open %s read/write (%s)\n", 10},
  {"openvt: using VT %s\n", 11},
  {"openvt: Unable to set new session (%s)\n", 12},
  {"\
\n\
openvt: could not open %s R/W (%s)\n", 13},
  {"openvt: could not deallocate console %d\n", 14},
  {"usage: chvt N\n", 15},
  {"%s: unknown option\n", 16},
  {"%s: deallocating all unused consoles failed\n", 17},
  {"%s: 0: illegal VT number\n", 18},
  {"%s: VT 1 is the console and cannot be deallocated\n", 19},
  {"%s: could not deallocate console %d\n", 20},
  {"KDGKBENT error at index 0 in table %d: ", 21},
  {"%s: cannot find any keymaps?\n", 22},
  {"%s: plain map not allocated? very strange ...\n", 23},
  {"KDGKBENT error at index %d in table %d: ", 24},
  {"keycode range supported by kernel:           1 - %d\n", 25},
  {"max number of actions bindable to a key:         %d\n", 26},
  {"number of keymaps in actual use:                 %d\n", 27},
  {"of which %d dynamically allocated\n", 28},
  {"ranges of action codes supported by kernel:\n", 29},
  {"number of function keys supported by kernel: %d\n", 30},
  {"max nr of compose definitions: %d\n", 31},
  {"nr of compose definitions in actual use: %d\n", 32},
  {"\
Symbols recognized by %s:\n\
(numeric value, symbol)\n\
\n", 33},
  {"\
\n\
The following synonyms are recognized:\n\
\n", 34},
  {"%-15s for %s\n", 35},
  {"\
\n\
Recognized modifier names and their column numbers:\n", 36},
  {"# not alt_is_meta: on keymap %d key %d is bound to", 37},
  {"impossible: not meta?\n", 38},
  {"KDGKBSENT failed at index %d: ", 39},
  {"dumpkeys version %s", 40},
  {"\
\n\
usage: dumpkeys [options...]\n\
\n\
valid options are:\n\
\n\
\t-h --help\t    display this help text\n\
\t-i --short-info\t    display information about keyboard driver\n\
\t-l --long-info\t    display above and symbols known to loadkeys\n\
\t-n --numeric\t    display keytable in hexadecimal notation\n\
\t-f --full-table\t    don't use short-hand notations, one row per keycode\n\
\t-1 --separate-lines one line per (modifier,keycode) pair\n\
\t   --funcs-only\t    display only the function key strings\n\
\t   --keys-only\t    display only key bindings\n\
\t   --compose-only   display only compose key combinations\n\
\t-c --charset=", 41},
  {"\
\t\t\t    interpret character action codes to be from the\n\
\t\t\t    specified character set\n", 42},
  {"error executing  %s\n", 43},
  {"usage: getkeycodes\n", 44},
  {"Plain scancodes xx (hex) versus keycodes (dec)\n", 45},
  {"0 is an error; for 1-88 (0x01-0x58) scancode equals keycode\n", 46},
  {"\
\n\
\n\
Escaped scancodes e0 xx (hex)\n", 47},
  {"failed to get keycode for scancode 0x%x\n", 48},
  {"\
Usage:\n\
\t%s [-s]\n", 49},
  {"usage: kbd_mode [-a|-u|-k|-s]\n", 50},
  {"kbd_mode: error reading keyboard mode\n", 51},
  {"The keyboard is in raw (scancode) mode\n", 52},
  {"The keyboard is in mediumraw (keycode) mode\n", 53},
  {"The keyboard is in the default (ASCII) mode\n", 54},
  {"The keyboard is in Unicode (UTF-8) mode\n", 55},
  {"The keyboard is in some unknown mode\n", 56},
  {"%s: error setting keyboard mode\n", 57},
  {"Typematic Rate set to %.1f cps (delay = %d ms)\n", 58},
  {"Usage: kbdrate [-V] [-s] [-r rate] [-d delay]\n", 59},
  {"Cannot open /dev/port", 60},
  {"bug: getfont called with count<256\n", 61},
  {"%s: out of memory\n", 62},
  {"unknown charset %s - ignoring charset request\n", 63},
  {"assuming iso-8859-1 %s\n", 64},
  {"assuming iso-8859-15 %s\n", 65},
  {"assuming iso-8859-2 %s\n", 66},
  {"assuming iso-8859-3 %s\n", 67},
  {"assuming iso-8859-4 %s\n", 68},
  {"unknown keysym '%s'\n", 69},
  {"plus before %s ignored\n", 70},
  {"usage: %s [-o map.orig] [map-file]\n", 71},
  {"Bad input line: %s\n", 72},
  {"%s: Glyph number (0x%x) larger than font length\n", 73},
  {"%s: Bad end of range (0x%x)\n", 74},
  {"%s: Bad Unicode range corresponding to font position range 0x%x-0x%x\n", 75},
  {"\
%s: Unicode range U+%x-U+%x not of the same length as font position range 0x%\
x-0x%x\n", 76},
  {"%s: trailing junk (%s) ignored\n", 77},
  {"Loading unicode map from file %s\n", 78},
  {"%s: %s: Warning: line too long\n", 79},
  {"\
%s: not loading empty unimap\n\
(if you insist: use option -f to override)\n", 80},
  {"entry", 81},
  {"entries", 82},
  {"Saved unicode map on `%s'\n", 83},
  {"Appended Unicode map\n", 84},
  {"usage: %s [-v] [-o map.orig] map-file\n", 85},
  {"mapscrn: cannot open map file _%s_\n", 86},
  {"Cannot stat map file", 87},
  {"Loading binary direct-to-font screen map from file %s\n", 88},
  {"Error reading map from file `%s'\n", 89},
  {"Loading binary unicode screen map from file %s\n", 90},
  {"Loading symbolic screen map from file %s\n", 91},
  {"Error parsing symbolic map from `%s', line %d\n", 92},
  {"Error writing map to file\n", 93},
  {"Cannot read console map\n", 94},
  {"Saved screen map in `%s'\n", 95},
  {"%s: short ucs2 unicode table\n", 96},
  {"%s: short utf8 unicode table\n", 97},
  {"%s: bad utf8\n", 98},
  {"%s: unknown utf8 error\n", 99},
  {"%s: short unicode table\n", 100},
  {"%s: Error reading input font", 101},
  {"%s: Bad call of readpsffont\n", 102},
  {"%s: Unsupported psf file mode (%d)\n", 103},
  {"%s: Unsupported psf version (%d)\n", 104},
  {"%s: zero input font length?\n", 105},
  {"%s: zero input character size?\n", 106},
  {"%s: Input file: bad input length (%d)\n", 107},
  {"%s: Input file: trailing garbage\n", 108},
  {"appendunicode: illegal unicode %u\n", 109},
  {"Cannot write font file header", 110},
  {"%s: Warning: line too long\n", 111},
  {"%s: Bad input line: %s\n", 112},
  {"%s: Glyph number (0x%lx) past end of font\n", 113},
  {"%s: Bad end of range (0x%lx)\n", 114},
  {"\
%s: Corresponding to a range of font positions, there should be a Unicode \
range\n", 115},
  {"\
Usage:\n\
\t%s infont intable outfont\n", 116},
  {"\
Usage:\n\
\t%s infont [outtable]\n", 117},
  {"\
Usage:\n\
\t%s infont outfont\n", 118},
  {"\
Usage:\n\
\t%s [-i infont] [-o outfont] [-it intable] [-ot outtable] [-nt]\n", 119},
  {"%s: Bad magic number on %s\n", 120},
  {"%s: psf file with unknown magic\n", 121},
  {"%s: input font does not have an index\n", 122},
  {"resizecons: cannot find videomode file %s\n", 123},
  {"Invalid number of lines\n", 124},
  {"Old mode: %dx%d  New mode: %dx%d\n", 125},
  {"Old #scanlines: %d  New #scanlines: %d  Character height: %d\n", 126},
  {"resizecons: the command `%s' failed\n", 127},
  {"\
resizecons: don't forget to change TERM (maybe to con%dx%d or linux-%dx%d)\n", 128},
  {"\
resizecons:\n\
call is:  resizecons COLSxROWS  or:  resizecons COLS ROWS\n\
or: resizecons -lines ROWS, with ROWS one of 25, 28, 30, 34, 36, 40, 44, 50, \
60\n", 129},
  {"resizecons: cannot get I/O permissions.\n", 130},
  {"usage: screendump [n]\n", 131},
  {"Error reading %s\n", 132},
  {"couldn't read %s, and cannot ioctl dump\n", 133},
  {"couldn't read %s\n", 134},
  {"Strange ... screen is both %dx%d and %dx%d ??\n", 135},
  {"Error writing screendump\n", 136},
  {"\
Usage: setfont [write-options] [-<N>] [newfont..] [-m consolemap] [-u \
unicodemap]\n\
  write-options (take place before file loading):\n\
    -o  <filename>\tWrite current font to <filename>\n\
    -O  <filename>\tWrite current font and unicode map to <filename>\n\
    -om <filename>\tWrite current consolemap to <filename>\n\
    -ou <filename>\tWrite current unicodemap to <filename>\n\
If no newfont and no -[o|O|om|ou|m|u] option is given,\n\
a default font is loaded:\n\
    setfont             Load font \"default[.gz]\"\n\
    setfont -<N>        Load font \"default8x<N>[.gz]\"\n\
The -<N> option selects a font from a codepage that contains three fonts:\n\
    setfont -{8|14|16} codepage.cp[.gz]   Load 8x<N> font from codepage.cp\n\
Explicitly (with -m or -u) or implicitly (in the fontfile) given mappings\n\
will be loaded and, in the case of consolemaps, activated.\n\
    -h<N>      (no space) Override font height.\n\
    -m <fn>    Load console screen map.\n\
    -u <fn>    Load font unicode map.\n\
    -m none\tSuppress loading and activation of a screen map.\n\
    -u none\tSuppress loading of a unicode map.\n\
    -v\t\tBe verbose.\n\
    -V\t\tPrint version and exit.\n\
Files are loaded from the current directory or /usr/lib/kbd/*/.\n", 137},
  {"setfont: too many input files\n", 138},
  {"\
setfont: cannot both restore from character ROM and from file. Font \
unchanged.\n", 139},
  {"Bad character height %d\n", 140},
  {"Bad character width %d\n", 141},
  {"%s: font position 32 is nonblank\n", 142},
  {"%s: wiped it\n", 143},
  {"%s: background will look funny\n", 144},
  {"Loading %d-char %dx%d font from file %s\n", 145},
  {"Loading %d-char %dx%d font\n", 146},
  {"Loading %d-char %dx%d (%d) font from file %s\n", 147},
  {"Loading %d-char %dx%d (%d) font\n", 148},
  {"%s: bug in do_loadtable\n", 149},
  {"Loading Unicode mapping table...\n", 150},
  {"Cannot open font file %s\n", 151},
  {"When loading several fonts, all must be psf fonts - %s isn't\n", 152},
  {"Read %d-char %dx%d font from file %s\n", 153},
  {"When loading several fonts, all must have the same height\n", 154},
  {"When loading several fonts, all must have the same width\n", 155},
  {"Cannot find default font\n", 156},
  {"Cannot find %s font\n", 157},
  {"Reading font file %s\n", 158},
  {"No final newline in combine file\n", 159},
  {"Too many files to combine\n", 160},
  {"Hmm - a font from restorefont? Using the first half.\n", 161},
  {"Bad input file size\n", 162},
  {"\
This file contains 3 fonts: 8x8, 8x14 and 8x16. Please indicate\n\
using an option -8 or -14 or -16 which one you want loaded.\n", 163},
  {"You asked for font size %d, but only 8, 14, 16 are possible here.\n", 164},
  {"Found nothing to save\n", 165},
  {"Cannot write font file", 166},
  {"Saved %d-char %dx%d font file on %s\n", 167},
  {"\
usage: setkeycode scancode keycode ...\n\
 (where scancode is either xx or e0xx, given in hexadecimal,\n\
  and keycode is given in decimal)\n", 168},
  {"even number of arguments expected", 169},
  {"error reading scancode", 170},
  {"code outside bounds", 171},
  {"failed to set scancode %x to keycode %d\n", 172},
  {"\
Usage:\n\
\tsetleds [-v] [-L] [-D] [-F] [[+|-][ num | caps | scroll %s]]\n\
Thus,\n\
\tsetleds +caps -num\n\
will set CapsLock, clear NumLock and leave ScrollLock unchanged.\n\
The settings before and after the change (if any) are reported\n\
when the -v option is given or when no change is requested.\n\
Normally, setleds influences the vt flag settings\n\
(and these are usually reflected in the leds).\n\
With -L, setleds only sets the leds, and leaves the flags alone.\n\
With -D, setleds sets both the flags and the default flags, so\n\
that a subsequent reset will not change the flags.\n", 173},
  {"on ", 174},
  {"off", 175},
  {"Error reading current led setting. Maybe stdin is not a VT?\n", 176},
  {"\
Error reading current flags setting. Maybe you are not on the console?\n", 177},
  {"Error reading current led setting from /dev/kbd.\n", 178},
  {"KIOCGLED unavailable?\n", 179},
  {"KIOCSLED unavailable?\n", 180},
  {"Error opening /dev/kbd.\n", 181},
  {"Error resetting ledmode\n", 182},
  {"Current default flags:  ", 183},
  {"Current flags:          ", 184},
  {"Current leds:           ", 185},
  {"\
unrecognized argument: _%s_\n\
\n", 186},
  {"Old default flags:    ", 187},
  {"New default flags:    ", 188},
  {"Old flags:            ", 189},
  {"New flags:            ", 190},
  {"Old leds:             ", 191},
  {"New leds:             ", 192},
  {"\
Usage:\n\
\tsetmetamode [ metabit | meta | bit | escprefix | esc | prefix ]\n\
Each vt has his own copy of this bit. Use\n\
\tsetmetamode [arg] < /dev/ttyn\n\
to change the settings of another vt.\n\
The setting before and after the change are reported.\n", 193},
  {"Meta key sets high order bit\n", 194},
  {"Meta key gives Esc prefix\n", 195},
  {"Strange mode for Meta key?\n", 196},
  {"Error reading current setting. Maybe stdin is not a VT?\n", 197},
  {"old state:    ", 198},
  {"new state:    ", 199},
  {"usage: %s\n", 200},
  {"failed to restore original translation table\n", 201},
  {"failed to restore original unimap\n", 202},
  {"cannot change translation table\n", 203},
  {"%s: out of memory?\n", 204},
  {"\
usage: showconsolefont [-v|-V]\n\
(probably after loading a font with `setfont font')\n", 205},
  {"?UNKNOWN?", 206},
  {"kb mode was %s\n", 207},
  {"\
[ if you are trying this under X, it might not work\n\
since the X server is also reading /dev/console ]\n", 208},
  {"caught signal %d, cleaning up...\n", 209},
  {"\
showkey version %s\n\
\n\
usage: showkey [options...]\n\
\n\
valid options are:\n\
\n\
\t-h --help\tdisplay this help text\n\
\t-a --ascii\tdisplay the decimal/octal/hex values of the keys\n\
\t-s --scancodes\tdisplay only the raw scan-codes\n\
\t-k --keycodes\tdisplay only the interpreted keycodes (default)\n", 210},
  {"\
\n\
Press any keys - Ctrl-D will terminate this program\n\
\n", 211},
  {"press any key (program terminates 10s after last keypress)...\n", 212},
  {"keycode %3d %s\n", 213},
  {"release", 214},
  {"press", 215},
  {"%s from %s\n", 216},
};

int _msg_tbl_length = 216;
