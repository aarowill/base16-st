// Base16 Unikitty Dark dark - simple terminal color setup
// Josh W Lewis (@joshwlewis)
static const char *colorname[] = {
	/* Normal colors */
	"#2e2a31", /*  0: Base 00 - Black   */
	"#d8137f", /*  1: Base 08 - Red     */
	"#17ad98", /*  2: Base 0B - Green   */
	"#dc8a0e", /*  3: Base 0A - Yellow  */
	"#796af5", /*  4: Base 0D - Blue    */
	"#bb60ea", /*  5: Base 0E - Magenta */
	"#149bda", /*  6: Base 0C - Cyan    */
	"#bcbabe", /*  7: Base 05 - White   */

	/* Bright colors */
	"#838085", /*  8: Base 03 - Bright Black */
	"#d8137f", /*  9: Base 08 - Red          */
	"#17ad98", /* 10: Base 0B - Green        */
	"#dc8a0e", /* 11: Base 0A - Yellow       */
	"#796af5", /* 12: Base 0D - Blue         */
	"#bb60ea", /* 13: Base 0E - Magenta      */
	"#149bda", /* 14: Base 0C - Cyan         */
	"#f5f4f7", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#d65407", /* 16: Base 09 */
	"#c720ca", /* 17: Base 0F */
	"#4a464d", /* 18: Base 01 */
	"#666369", /* 19: Base 02 */
	"#9f9da2", /* 20: Base 04 */
	"#d8d7da", /* 21: Base 06 */

	[255] = 0,

	[256] = "#bcbabe", /* default fg: Base 05 */
	[257] = "#2e2a31", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
