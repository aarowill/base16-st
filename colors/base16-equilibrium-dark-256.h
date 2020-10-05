// Base16 Equilibrium Dark dark - simple terminal color setup
// Carlo Abelli
static const char *colorname[] = {
	/* Normal colors */
	"#0c1118", /*  0: Base 00 - Black   */
	"#f04339", /*  1: Base 08 - Red     */
	"#7f8b00", /*  2: Base 0B - Green   */
	"#bb8801", /*  3: Base 0A - Yellow  */
	"#008dd1", /*  4: Base 0D - Blue    */
	"#6a7fd2", /*  5: Base 0E - Magenta */
	"#00948b", /*  6: Base 0C - Cyan    */
	"#afaba2", /*  7: Base 05 - White   */

	/* Bright colors */
	"#7b776e", /*  8: Base 03 - Bright Black */
	"#f04339", /*  9: Base 08 - Red          */
	"#7f8b00", /* 10: Base 0B - Green        */
	"#bb8801", /* 11: Base 0A - Yellow       */
	"#008dd1", /* 12: Base 0D - Blue         */
	"#6a7fd2", /* 13: Base 0E - Magenta      */
	"#00948b", /* 14: Base 0C - Cyan         */
	"#e7e2d9", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#df5923", /* 16: Base 09 */
	"#e3488e", /* 17: Base 0F */
	"#181c22", /* 18: Base 01 */
	"#22262d", /* 19: Base 02 */
	"#949088", /* 20: Base 04 */
	"#cac6bd", /* 21: Base 06 */

	[255] = 0,

	[256] = "#afaba2", /* default fg: Base 05 */
	[257] = "#0c1118", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
