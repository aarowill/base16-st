// Base16 eris dark - simple terminal color setup
// ed (https://codeberg.org/ed)
static const char *colorname[] = {
	/* Normal colors */
	"#0a0920", /*  0: Base 00 - Black   */
	"#f768a3", /*  1: Base 08 - Red     */
	"#faaea2", /*  2: Base 0B - Green   */
	"#faaea2", /*  3: Base 0A - Yellow  */
	"#258fc4", /*  4: Base 0D - Blue    */
	"#f768a3", /*  5: Base 0E - Magenta */
	"#258fc4", /*  6: Base 0C - Cyan    */
	"#606bac", /*  7: Base 05 - White   */

	/* Bright colors */
	"#333773", /*  8: Base 03 - Bright Black */
	"#f768a3", /*  9: Base 08 - Red          */
	"#faaea2", /* 10: Base 0B - Green        */
	"#faaea2", /* 11: Base 0A - Yellow       */
	"#258fc4", /* 12: Base 0D - Blue         */
	"#f768a3", /* 13: Base 0E - Magenta      */
	"#258fc4", /* 14: Base 0C - Cyan         */
	"#9aaae5", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#f768a3", /* 16: Base 09 */
	"#f768a3", /* 17: Base 0F */
	"#13133a", /* 18: Base 01 */
	"#23255a", /* 19: Base 02 */
	"#4a5293", /* 20: Base 04 */
	"#7986c5", /* 21: Base 06 */

	[255] = 0,

	[256] = "#606bac", /* default fg: Base 05 */
	[257] = "#0a0920", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
