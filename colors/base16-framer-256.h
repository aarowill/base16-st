// Base16 Framer dark - simple terminal color setup
// Framer (Maintained by Jesse Hoyos)
static const char *colorname[] = {
	/* Normal colors */
	"#181818", /*  0: Base 00 - Black   */
	"#fd886b", /*  1: Base 08 - Red     */
	"#32ccdc", /*  2: Base 0B - Green   */
	"#fecb6e", /*  3: Base 0A - Yellow  */
	"#20bcfc", /*  4: Base 0D - Blue    */
	"#ba8cfc", /*  5: Base 0E - Magenta */
	"#acddfd", /*  6: Base 0C - Cyan    */
	"#d0d0d0", /*  7: Base 05 - White   */

	/* Bright colors */
	"#747474", /*  8: Base 03 - Bright Black */
	"#fd886b", /*  9: Base 08 - Red          */
	"#32ccdc", /* 10: Base 0B - Green        */
	"#fecb6e", /* 11: Base 0A - Yellow       */
	"#20bcfc", /* 12: Base 0D - Blue         */
	"#ba8cfc", /* 13: Base 0E - Magenta      */
	"#acddfd", /* 14: Base 0C - Cyan         */
	"#eeeeee", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#fc4769", /* 16: Base 09 */
	"#b15f4a", /* 17: Base 0F */
	"#151515", /* 18: Base 01 */
	"#464646", /* 19: Base 02 */
	"#b9b9b9", /* 20: Base 04 */
	"#e8e8e8", /* 21: Base 06 */

	[255] = 0,

	[256] = "#d0d0d0", /* default fg: Base 05 */
	[257] = "#181818", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
