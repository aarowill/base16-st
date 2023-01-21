// Base16 Kanagawa dark - simple terminal color setup
// Tommaso Laurenzi (https://github.com/rebelot)
static const char *colorname[] = {
	/* Normal colors */
	"#1f1f28", /*  0: Base 00 - Black   */
	"#c34043", /*  1: Base 08 - Red     */
	"#76946a", /*  2: Base 0B - Green   */
	"#c0a36e", /*  3: Base 0A - Yellow  */
	"#7e9cd8", /*  4: Base 0D - Blue    */
	"#957fb8", /*  5: Base 0E - Magenta */
	"#6a9589", /*  6: Base 0C - Cyan    */
	"#dcd7ba", /*  7: Base 05 - White   */

	/* Bright colors */
	"#54546d", /*  8: Base 03 - Bright Black */
	"#c34043", /*  9: Base 08 - Red          */
	"#76946a", /* 10: Base 0B - Green        */
	"#c0a36e", /* 11: Base 0A - Yellow       */
	"#7e9cd8", /* 12: Base 0D - Blue         */
	"#957fb8", /* 13: Base 0E - Magenta      */
	"#6a9589", /* 14: Base 0C - Cyan         */
	"#717c7c", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ffa066", /* 16: Base 09 */
	"#d27e99", /* 17: Base 0F */
	"#16161d", /* 18: Base 01 */
	"#223249", /* 19: Base 02 */
	"#727169", /* 20: Base 04 */
	"#c8c093", /* 21: Base 06 */

	[255] = 0,

	[256] = "#dcd7ba", /* default fg: Base 05 */
	[257] = "#1f1f28", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
