// Base16 Solarized Light dark - simple terminal color setup
// Ethan Schoonover (modified by aramisgithub)
static const char *colorname[] = {
	/* Normal colors */
	"#fdf6e3", /*  0: Base 00 - Black   */
	"#dc322f", /*  1: Base 08 - Red     */
	"#859900", /*  2: Base 0B - Green   */
	"#b58900", /*  3: Base 0A - Yellow  */
	"#268bd2", /*  4: Base 0D - Blue    */
	"#6c71c4", /*  5: Base 0E - Magenta */
	"#2aa198", /*  6: Base 0C - Cyan    */
	"#586e75", /*  7: Base 05 - White   */

	/* Bright colors */
	"#839496", /*  8: Base 03 - Bright Black */
	"#dc322f", /*  9: Base 08 - Red          */
	"#859900", /* 10: Base 0B - Green        */
	"#b58900", /* 11: Base 0A - Yellow       */
	"#268bd2", /* 12: Base 0D - Blue         */
	"#6c71c4", /* 13: Base 0E - Magenta      */
	"#2aa198", /* 14: Base 0C - Cyan         */
	"#002b36", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#cb4b16", /* 16: Base 09 */
	"#d33682", /* 17: Base 0F */
	"#eee8d5", /* 18: Base 01 */
	"#93a1a1", /* 19: Base 02 */
	"#657b83", /* 20: Base 04 */
	"#073642", /* 21: Base 06 */

	[255] = 0,

	[256] = "#586e75", /* default fg: Base 05 */
	[257] = "#fdf6e3", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
