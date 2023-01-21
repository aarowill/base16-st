// Base16 Tokyodark Terminal dark - simple terminal color setup
// Tiagovla (https://github.com/tiagovla/)
static const char *colorname[] = {
	/* Normal colors */
	"#11121d", /*  0: Base 00 - Black   */
	"#ee6d85", /*  1: Base 08 - Red     */
	"#95c561", /*  2: Base 0B - Green   */
	"#d7a65f", /*  3: Base 0A - Yellow  */
	"#7199ee", /*  4: Base 0D - Blue    */
	"#a485dd", /*  5: Base 0E - Magenta */
	"#38a89d", /*  6: Base 0C - Cyan    */
	"#a0a8cd", /*  7: Base 05 - White   */

	/* Bright colors */
	"#282c34", /*  8: Base 03 - Bright Black */
	"#ee6d85", /*  9: Base 08 - Red          */
	"#95c561", /* 10: Base 0B - Green        */
	"#d7a65f", /* 11: Base 0A - Yellow       */
	"#7199ee", /* 12: Base 0D - Blue         */
	"#a485dd", /* 13: Base 0E - Magenta      */
	"#38a89d", /* 14: Base 0C - Cyan         */
	"#a0a8cd", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#f6955b", /* 16: Base 09 */
	"#773440", /* 17: Base 0F */
	"#1a1b2a", /* 18: Base 01 */
	"#212234", /* 19: Base 02 */
	"#4a5057", /* 20: Base 04 */
	"#a0a8cd", /* 21: Base 06 */

	[255] = 0,

	[256] = "#a0a8cd", /* default fg: Base 05 */
	[257] = "#11121d", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
