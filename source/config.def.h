/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font:size=10"
	// "monospace:size=10"
};

// #define COLOR_BLACK "#1f1f1f"
#define COLOR_BLACK "#222222"
#define COLOR_RED "ffffff"
#define COLOR_GREEN "#76d897"
#define COLOR_YELLOW "#f7bc7a"
#define COLOR_BLUE "#6299b5"
#define COLOR_MAGENTA "#e4557f"
#define COLOR_CYAN "#30b3f5"
#define COLOR_WHITE "#dddddd"
// #define COLOR_WHITE "#fff8e5"

#define COLOR_0 "#282828"
#define COLOR_8 "#928374"
#define COLOR_1 "#cc241d"
#define COLOR_9 "#fb4934"
#define COLOR_2 "#fb4934"
#define COLOR_10 "#b8bb26"
#define COLOR_3 "#d79921"
#define COLOR_11 "#fabd2f"
#define COLOR_4 "#458588"
#define COLOR_12 "#458588"
#define COLOR_5 "#b16286"
#define COLOR_13 "#d3869b"
#define COLOR_6 "#689d6a"
#define COLOR_14 "#8ec07c"
#define COLOR_7 "#a89984"
#define COLOR_15 "#ebdbb2"

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
					    	/*     fg         bg       */
	//[SchemeNorm] =			{ COLOR_WHITE, COLOR_BLACK},
	[SchemeNorm] =			{ COLOR_WHITE, COLOR_0},
	//[SchemeSel] =			{ COLOR_BLACK, COLOR_RED},
	[SchemeSel] =			{ COLOR_0, COLOR_4},
	//[SchemeSelHighlight] = 	{ COLOR_RED,   COLOR_GREEN},
	[SchemeSelHighlight] = 	{ COLOR_4,   COLOR_1},
	//[SchemeNormHighlight] = { COLOR_RED,   COLOR_BLACK},
	[SchemeNormHighlight] = { COLOR_4,   COLOR_0},
	// TODO: Find out what this is
	[SchemeOut] = 		{ "#000000", "#00ffff"     },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 24;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
