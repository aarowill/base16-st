// Base16 Windows 10 dark - simple terminal color setup
// Fergus Collins (https://github.com/C-Fergus)
static const char *colorname[] = {
	/* Normal colors */
	"#0c0c0c", /*  0: Base 00 - Black   */
	"#e74856", /*  1: Base 08 - Red     */
	"#16c60c", /*  2: Base 0B - Green   */
	"#f9f1a5", /*  3: Base 0A - Yellow  */
	"#3b78ff", /*  4: Base 0D - Blue    */
	"#b4009e", /*  5: Base 0E - Magenta */
	"#61d6d6", /*  6: Base 0C - Cyan    */
	"#cccccc", /*  7: Base 05 - White   */

	/* Bright colors */
	"#767676", /*  8: Base 03 - Bright Black */
	"#e74856", /*  9: Base 08 - Red          */
	"#16c60c", /* 10: Base 0B - Green        */
	"#f9f1a5", /* 11: Base 0A - Yellow       */
	"#3b78ff", /* 12: Base 0D - Blue         */
	"#b4009e", /* 13: Base 0E - Magenta      */
	"#61d6d6", /* 14: Base 0C - Cyan         */
	"#f2f2f2", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#c19c00", /* 16: Base 09 */
	"#13a10e", /* 17: Base 0F */
	"#2f2f2f", /* 18: Base 01 */
	"#535353", /* 19: Base 02 */
	"#b9b9b9", /* 20: Base 04 */
	"#dfdfdf", /* 21: Base 06 */

	[255] = 0,

	[256] = "#cccccc", /* default fg: Base 05 */
	[257] = "#0c0c0c", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
