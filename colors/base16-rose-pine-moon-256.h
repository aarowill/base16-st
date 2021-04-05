// Base16 Rosé Pine Moon dark - simple terminal color setup
// Emilia Dunfelt &lt;sayhi@dunfelt.se&gt;
static const char *colorname[] = {
	/* Normal colors */
	"#232136", /*  0: Base 00 - Black   */
	"#ecebf0", /*  1: Base 08 - Red     */
	"#ea9a97", /*  2: Base 0B - Green   */
	"#f6c177", /*  3: Base 0A - Yellow  */
	"#9ccfd8", /*  4: Base 0D - Blue    */
	"#c4a7e7", /*  5: Base 0E - Magenta */
	"#3e8fb0", /*  6: Base 0C - Cyan    */
	"#e0def4", /*  7: Base 05 - White   */

	/* Bright colors */
	"#59546d", /*  8: Base 03 - Bright Black */
	"#ecebf0", /*  9: Base 08 - Red          */
	"#ea9a97", /* 10: Base 0B - Green        */
	"#f6c177", /* 11: Base 0A - Yellow       */
	"#9ccfd8", /* 12: Base 0D - Blue         */
	"#c4a7e7", /* 13: Base 0E - Magenta      */
	"#3e8fb0", /* 14: Base 0C - Cyan         */
	"#d9d7e1", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#eb6f92", /* 16: Base 09 */
	"#b9b9bc", /* 17: Base 0F */
	"#2a273f", /* 18: Base 01 */
	"#393552", /* 19: Base 02 */
	"#817c9c", /* 20: Base 04 */
	"#f5f5f7", /* 21: Base 06 */

	[255] = 0,

	[256] = "#e0def4", /* default fg: Base 05 */
	[257] = "#232136", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
