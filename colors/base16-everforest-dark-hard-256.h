// Base16 Everforest Dark Hard dark - simple terminal color setup
// Oskar Liew (https://github.com/OskarLiew)
static const char *colorname[] = {
	/* Normal colors */
	"#272e33", /*  0: Base 00 - Black   */
	"#7fbbb3", /*  1: Base 08 - Red     */
	"#83c092", /*  2: Base 0B - Green   */
	"#dbbc7f", /*  3: Base 0A - Yellow  */
	"#a7c080", /*  4: Base 0D - Blue    */
	"#e67e80", /*  5: Base 0E - Magenta */
	"#e69875", /*  6: Base 0C - Cyan    */
	"#d3c6aa", /*  7: Base 05 - White   */

	/* Bright colors */
	"#859289", /*  8: Base 03 - Bright Black */
	"#7fbbb3", /*  9: Base 08 - Red          */
	"#83c092", /* 10: Base 0B - Green        */
	"#dbbc7f", /* 11: Base 0A - Yellow       */
	"#a7c080", /* 12: Base 0D - Blue         */
	"#e67e80", /* 13: Base 0E - Magenta      */
	"#e69875", /* 14: Base 0C - Cyan         */
	"#fdf6e3", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#d699b6", /* 16: Base 09 */
	"#4c3743", /* 17: Base 0F */
	"#2e383c", /* 18: Base 01 */
	"#414b50", /* 19: Base 02 */
	"#9da9a0", /* 20: Base 04 */
	"#e4e1cd", /* 21: Base 06 */

	[255] = 0,

	[256] = "#d3c6aa", /* default fg: Base 05 */
	[257] = "#272e33", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
