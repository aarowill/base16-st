// Base16 Heetch Light dark - simple terminal color setup
// Geoffrey Teale (tealeg@gmail.com)
static const char *colorname[] = {
	/* Normal colors */
	"#feffff", /*  0: Base 00 - Black   */
	"#27d9d5", /*  1: Base 08 - Red     */
	"#f80059", /*  2: Base 0B - Green   */
	"#5ba2b6", /*  3: Base 0A - Yellow  */
	"#47f9f5", /*  4: Base 0D - Blue    */
	"#bd0152", /*  5: Base 0E - Magenta */
	"#c33678", /*  6: Base 0C - Cyan    */
	"#5a496e", /*  7: Base 05 - White   */

	/* Bright colors */
	"#9c92a8", /*  8: Base 03 - Bright Black */
	"#27d9d5", /*  9: Base 08 - Red          */
	"#f80059", /* 10: Base 0B - Green        */
	"#5ba2b6", /* 11: Base 0A - Yellow       */
	"#47f9f5", /* 12: Base 0D - Blue         */
	"#bd0152", /* 13: Base 0E - Magenta      */
	"#c33678", /* 14: Base 0C - Cyan         */
	"#190134", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#bdb6c5", /* 16: Base 09 */
	"#dedae2", /* 17: Base 0F */
	"#392551", /* 18: Base 01 */
	"#7b6d8b", /* 19: Base 02 */
	"#ddd6e5", /* 20: Base 04 */
	"#470546", /* 21: Base 06 */

	[255] = 0,

	[256] = "#5a496e", /* default fg: Base 05 */
	[257] = "#feffff", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
