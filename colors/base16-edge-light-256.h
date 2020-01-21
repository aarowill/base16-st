// Base16 Edge Light dark - simple terminal color setup
// cjayross (https://github.com/cjayross)
static const char *colorname[] = {
	/* Normal colors */
	"#fafafa", /*  0: Base 00 - Black   */
	"#db7070", /*  1: Base 08 - Red     */
	"#7c9f4b", /*  2: Base 0B - Green   */
	"#d69822", /*  3: Base 0A - Yellow  */
	"#6587bf", /*  4: Base 0D - Blue    */
	"#b870ce", /*  5: Base 0E - Magenta */
	"#509c93", /*  6: Base 0C - Cyan    */
	"#5e646f", /*  7: Base 05 - White   */

	/* Bright colors */
	"#5e646f", /*  8: Base 03 - Bright Black */
	"#db7070", /*  9: Base 08 - Red          */
	"#7c9f4b", /* 10: Base 0B - Green        */
	"#d69822", /* 11: Base 0A - Yellow       */
	"#6587bf", /* 12: Base 0D - Blue         */
	"#b870ce", /* 13: Base 0E - Magenta      */
	"#509c93", /* 14: Base 0C - Cyan         */
	"#5e646f", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#db7070", /* 16: Base 09 */
	"#509c93", /* 17: Base 0F */
	"#7c9f4b", /* 18: Base 01 */
	"#d69822", /* 19: Base 02 */
	"#6587bf", /* 20: Base 04 */
	"#b870ce", /* 21: Base 06 */

	[255] = 0,

	[256] = "#5e646f", /* default fg: Base 05 */
	[257] = "#fafafa", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
