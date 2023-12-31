// Base16 Catppuccin Frappe dark - simple terminal color setup
// https://github.com/catppuccin/catppuccin
static const char *colorname[] = {
	/* Normal colors */
	"#303446", /*  0: Base 00 - Black   */
	"#e78284", /*  1: Base 08 - Red     */
	"#a6d189", /*  2: Base 0B - Green   */
	"#e5c890", /*  3: Base 0A - Yellow  */
	"#8caaee", /*  4: Base 0D - Blue    */
	"#ca9ee6", /*  5: Base 0E - Magenta */
	"#81c8be", /*  6: Base 0C - Cyan    */
	"#c6d0f5", /*  7: Base 05 - White   */

	/* Bright colors */
	"#51576d", /*  8: Base 03 - Bright Black */
	"#e78284", /*  9: Base 08 - Red          */
	"#a6d189", /* 10: Base 0B - Green        */
	"#e5c890", /* 11: Base 0A - Yellow       */
	"#8caaee", /* 12: Base 0D - Blue         */
	"#ca9ee6", /* 13: Base 0E - Magenta      */
	"#81c8be", /* 14: Base 0C - Cyan         */
	"#babbf1", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ef9f76", /* 16: Base 09 */
	"#eebebe", /* 17: Base 0F */
	"#292c3c", /* 18: Base 01 */
	"#414559", /* 19: Base 02 */
	"#626880", /* 20: Base 04 */
	"#f2d5cf", /* 21: Base 06 */

	[255] = 0,

	[256] = "#c6d0f5", /* default fg: Base 05 */
	[257] = "#303446", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
