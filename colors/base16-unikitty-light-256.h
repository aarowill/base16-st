// Base16 Unikitty Light dark - simple terminal color setup
// Josh W Lewis (@joshwlewis)
static const char *colorname[] = {
	/* Normal colors */
	"#ffffff", /*  0: Base 00 - Black   */
	"#d8137f", /*  1: Base 08 - Red     */
	"#17ad98", /*  2: Base 0B - Green   */
	"#dc8a0e", /*  3: Base 0A - Yellow  */
	"#775dff", /*  4: Base 0D - Blue    */
	"#aa17e6", /*  5: Base 0E - Magenta */
	"#149bda", /*  6: Base 0C - Cyan    */
	"#6c696e", /*  7: Base 05 - White   */

	/* Bright colors */
	"#a7a5a8", /*  8: Base 03 - Bright Black */
	"#d8137f", /*  9: Base 08 - Red          */
	"#17ad98", /* 10: Base 0B - Green        */
	"#dc8a0e", /* 11: Base 0A - Yellow       */
	"#775dff", /* 12: Base 0D - Blue         */
	"#aa17e6", /* 13: Base 0E - Magenta      */
	"#149bda", /* 14: Base 0C - Cyan         */
	"#322d34", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#d65407", /* 16: Base 09 */
	"#e013d0", /* 17: Base 0F */
	"#e1e1e2", /* 18: Base 01 */
	"#c4c3c5", /* 19: Base 02 */
	"#89878b", /* 20: Base 04 */
	"#4f4b51", /* 21: Base 06 */

	[255] = 0,

	[256] = "#6c696e", /* default fg: Base 05 */
	[257] = "#ffffff", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
