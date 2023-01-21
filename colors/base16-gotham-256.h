// Base16 Gotham dark - simple terminal color setup
// Andrea Leopardi (arranged by Brett Jones)
static const char *colorname[] = {
	/* Normal colors */
	"#0c1014", /*  0: Base 00 - Black   */
	"#c23127", /*  1: Base 08 - Red     */
	"#33859e", /*  2: Base 0B - Green   */
	"#edb443", /*  3: Base 0A - Yellow  */
	"#195466", /*  4: Base 0D - Blue    */
	"#888ca6", /*  5: Base 0E - Magenta */
	"#2aa889", /*  6: Base 0C - Cyan    */
	"#599cab", /*  7: Base 05 - White   */

	/* Bright colors */
	"#0a3749", /*  8: Base 03 - Bright Black */
	"#c23127", /*  9: Base 08 - Red          */
	"#33859e", /* 10: Base 0B - Green        */
	"#edb443", /* 11: Base 0A - Yellow       */
	"#195466", /* 12: Base 0D - Blue         */
	"#888ca6", /* 13: Base 0E - Magenta      */
	"#2aa889", /* 14: Base 0C - Cyan         */
	"#d3ebe9", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#d26937", /* 16: Base 09 */
	"#4e5166", /* 17: Base 0F */
	"#11151c", /* 18: Base 01 */
	"#091f2e", /* 19: Base 02 */
	"#245361", /* 20: Base 04 */
	"#99d1ce", /* 21: Base 06 */

	[255] = 0,

	[256] = "#599cab", /* default fg: Base 05 */
	[257] = "#0c1014", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
