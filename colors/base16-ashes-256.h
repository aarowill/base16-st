// Base16 Ashes dark - simple terminal color setup
// Jannik Siebert (https://github.com/janniks)
static const char *colorname[] = {
	/* Normal colors */
	"#1c2023", /*  0: Base 00 - Black   */
	"#c7ae95", /*  1: Base 08 - Red     */
	"#95c7ae", /*  2: Base 0B - Green   */
	"#aec795", /*  3: Base 0A - Yellow  */
	"#ae95c7", /*  4: Base 0D - Blue    */
	"#c795ae", /*  5: Base 0E - Magenta */
	"#95aec7", /*  6: Base 0C - Cyan    */
	"#c7ccd1", /*  7: Base 05 - White   */

	/* Bright colors */
	"#747c84", /*  8: Base 03 - Bright Black */
	"#c7ae95", /*  9: Base 08 - Red          */
	"#95c7ae", /* 10: Base 0B - Green        */
	"#aec795", /* 11: Base 0A - Yellow       */
	"#ae95c7", /* 12: Base 0D - Blue         */
	"#c795ae", /* 13: Base 0E - Magenta      */
	"#95aec7", /* 14: Base 0C - Cyan         */
	"#f3f4f5", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#c7c795", /* 16: Base 09 */
	"#c79595", /* 17: Base 0F */
	"#393f45", /* 18: Base 01 */
	"#565e65", /* 19: Base 02 */
	"#adb3ba", /* 20: Base 04 */
	"#dfe2e5", /* 21: Base 06 */

	[255] = 0,

	[256] = "#c7ccd1", /* default fg: Base 05 */
	[257] = "#1c2023", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
