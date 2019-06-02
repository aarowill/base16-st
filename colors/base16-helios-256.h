// Base16 Helios dark - simple terminal color setup
// Alex Meyer (https://github.com/reyemxela)
static const char *colorname[] = {
	/* Normal colors */
	"#1d2021", /*  0: Base 00 - Black   */
	"#d72638", /*  1: Base 08 - Red     */
	"#88b92d", /*  2: Base 0B - Green   */
	"#f19d1a", /*  3: Base 0A - Yellow  */
	"#1e8bac", /*  4: Base 0D - Blue    */
	"#be4264", /*  5: Base 0E - Magenta */
	"#1ba595", /*  6: Base 0C - Cyan    */
	"#d5d5d5", /*  7: Base 05 - White   */

	/* Bright colors */
	"#6f7579", /*  8: Base 03 - Bright Black */
	"#d72638", /*  9: Base 08 - Red          */
	"#88b92d", /* 10: Base 0B - Green        */
	"#f19d1a", /* 11: Base 0A - Yellow       */
	"#1e8bac", /* 12: Base 0D - Blue         */
	"#be4264", /* 13: Base 0E - Magenta      */
	"#1ba595", /* 14: Base 0C - Cyan         */
	"#e5e5e5", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#eb8413", /* 16: Base 09 */
	"#c85e0d", /* 17: Base 0F */
	"#383c3e", /* 18: Base 01 */
	"#53585b", /* 19: Base 02 */
	"#cdcdcd", /* 20: Base 04 */
	"#dddddd", /* 21: Base 06 */

	[255] = 0,

	[256] = "#d5d5d5", /* default fg: Base 05 */
	[257] = "#1d2021", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
