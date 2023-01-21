// Base16 Primer Dark dark - simple terminal color setup
// Jimmy Lin
static const char *colorname[] = {
	/* Normal colors */
	"#010409", /*  0: Base 00 - Black   */
	"#ff7b72", /*  1: Base 08 - Red     */
	"#3fb950", /*  2: Base 0B - Green   */
	"#d29922", /*  3: Base 0A - Yellow  */
	"#58a6ff", /*  4: Base 0D - Blue    */
	"#f778ba", /*  5: Base 0E - Magenta */
	"#a5d6ff", /*  6: Base 0C - Cyan    */
	"#b1bac4", /*  7: Base 05 - White   */

	/* Bright colors */
	"#484f58", /*  8: Base 03 - Bright Black */
	"#ff7b72", /*  9: Base 08 - Red          */
	"#3fb950", /* 10: Base 0B - Green        */
	"#d29922", /* 11: Base 0A - Yellow       */
	"#58a6ff", /* 12: Base 0D - Blue         */
	"#f778ba", /* 13: Base 0E - Magenta      */
	"#a5d6ff", /* 14: Base 0C - Cyan         */
	"#f0f6fc", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#f0883e", /* 16: Base 09 */
	"#bd561d", /* 17: Base 0F */
	"#21262d", /* 18: Base 01 */
	"#30363d", /* 19: Base 02 */
	"#8b949e", /* 20: Base 04 */
	"#c9d1d9", /* 21: Base 06 */

	[255] = 0,

	[256] = "#b1bac4", /* default fg: Base 05 */
	[257] = "#010409", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
