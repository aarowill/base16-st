// Base16 Synth Midnight Terminal Light dark - simple terminal color setup
// Michaël Ball (http://github.com/michael-ball/)
static const char *colorname[] = {
	/* Normal colors */
	"#dddfe0", /*  0: Base 00 - Black   */
	"#b53b50", /*  1: Base 08 - Red     */
	"#06ea61", /*  2: Base 0B - Green   */
	"#c9d364", /*  3: Base 0A - Yellow  */
	"#03aeff", /*  4: Base 0D - Blue    */
	"#ea5ce2", /*  5: Base 0E - Magenta */
	"#42fff9", /*  6: Base 0C - Cyan    */
	"#28292a", /*  7: Base 05 - White   */

	/* Bright colors */
	"#a3a5a6", /*  8: Base 03 - Bright Black */
	"#b53b50", /*  9: Base 08 - Red          */
	"#06ea61", /* 10: Base 0B - Green        */
	"#c9d364", /* 11: Base 0A - Yellow       */
	"#03aeff", /* 12: Base 0D - Blue         */
	"#ea5ce2", /* 13: Base 0E - Magenta      */
	"#42fff9", /* 14: Base 0C - Cyan         */
	"#050608", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ea770d", /* 16: Base 09 */
	"#cd6320", /* 17: Base 0F */
	"#cfd1d2", /* 18: Base 01 */
	"#c1c3c4", /* 19: Base 02 */
	"#474849", /* 20: Base 04 */
	"#1a1b1c", /* 21: Base 06 */

	[255] = 0,

	[256] = "#28292a", /* default fg: Base 05 */
	[257] = "#dddfe0", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
