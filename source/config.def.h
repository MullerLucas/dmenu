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
#define COLOR_BLACK "#111111"
#define COLOR_RED "#ff4949"
#define COLOR_GREEN "#c3ff67"
#define COLOR_YELLOW "#eddd58"
#define COLOR_BLUE "#4da6c5"
#define COLOR_MAGENTA "#e85f9a"
#define COLOR_CYAN "#558867"
#define COLOR_WHITE "#eeeeee"
// #define COLOR_WHITE "#fff8e5"

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
				/*     fg         bg       */
	[SchemeNorm] = 		{ COLOR_WHITE, COLOR_BLACK},
	[SchemeSel] = 		{ COLOR_BLACK, COLOR_GREEN},
	[SchemeSelHighlight] = 	{ COLOR_RED,   COLOR_GREEN},
	[SchemeNormHighlight] = { COLOR_RED,   COLOR_BLACK},
	// TODO: Find out what this is
	[SchemeOut] = 		{ "#000000", "#00ffff"     },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 30;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
