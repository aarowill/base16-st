// Base16 selenized-light dark - simple terminal color setup
// Jan Warchol (https://github.com/jan-warchol/selenized) / adapted to base16 by ali
static const char *colorname[] = {
	/* Normal colors */
	"#fbf3db", /*  0: Base 00 - Black   */
	"#cc1729", /*  1: Base 08 - Red     */
	"#428b00", /*  2: Base 0B - Green   */
	"#a78300", /*  3: Base 0A - Yellow  */
	"#006dce", /*  4: Base 0D - Blue    */
	"#825dc0", /*  5: Base 0E - Magenta */
	"#00978a", /*  6: Base 0C - Cyan    */
	"#53676d", /*  7: Base 05 - White   */

	/* Bright colors */
	"#909995", /*  8: Base 03 - Bright Black */
	"#cc1729", /*  9: Base 08 - Red          */
	"#428b00", /* 10: Base 0B - Green        */
	"#a78300", /* 11: Base 0A - Yellow       */
	"#006dce", /* 12: Base 0D - Blue         */
	"#825dc0", /* 13: Base 0E - Magenta      */
	"#00978a", /* 14: Base 0C - Cyan         */
	"#3a4d53", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#bc5819", /* 16: Base 09 */
	"#c44392", /* 17: Base 0F */
	"#ece3cc", /* 18: Base 01 */
	"#d5cdb6", /* 19: Base 02 */
	"#909995", /* 20: Base 04 */
	"#3a4d53", /* 21: Base 06 */

	[255] = 0,

	[256] = "#53676d", /* default fg: Base 05 */
	[257] = "#fbf3db", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
