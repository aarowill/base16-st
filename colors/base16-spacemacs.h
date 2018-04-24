// Base16 Spacemacs dark - simple terminal color setup
// Nasser Alshammari (https://github.com/nashamri/spacemacs-theme)
static const char *colorname[] = {
	/* Normal colors */
	"#1f2022", /*  0: Base 00 - Black   */
	"#f2241f", /*  1: Base 08 - Red     */
	"#67b11d", /*  2: Base 0B - Green   */
	"#b1951d", /*  3: Base 0A - Yellow  */
	"#4f97d7", /*  4: Base 0D - Blue    */
	"#a31db1", /*  5: Base 0E - Magenta */
	"#2d9574", /*  6: Base 0C - Cyan    */
	"#a3a3a3", /*  7: Base 05 - White   */

	/* Bright colors */
	"#585858", /*  8: Base 03 - Bright Black */
	"#ffa500", /* 16: Base 09 */
	"#282828", /* 18: Base 01 */
	"#444155", /* 19: Base 02 */
	"#b8b8b8", /* 20: Base 04 */
	"#e8e8e8", /* 21: Base 06 */
	"#b03060", /* 17: Base 0F */
	"#f8f8f8", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#a3a3a3", /* default fg: Base 05 */
	[257] = "#1f2022", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
