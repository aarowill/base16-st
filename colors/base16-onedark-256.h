// Base16 OneDark dark - simple terminal color setup
// Lalit Magant (http://github.com/tilal6991)
static const char *colorname[] = {
	/* Normal colors */
	"#282c34", /*  0: Base 00 - Black   */
	"#e06c75", /*  1: Base 08 - Red     */
	"#98c379", /*  2: Base 0B - Green   */
	"#e5c07b", /*  3: Base 0A - Yellow  */
	"#61afef", /*  4: Base 0D - Blue    */
	"#c678dd", /*  5: Base 0E - Magenta */
	"#56b6c2", /*  6: Base 0C - Cyan    */
	"#abb2bf", /*  7: Base 05 - White   */

	/* Bright colors */
	"#545862", /*  8: Base 03 - Bright Black */
	"#e06c75", /*  9: Base 08 - Red          */
	"#98c379", /* 10: Base 0B - Green        */
	"#e5c07b", /* 11: Base 0A - Yellow       */
	"#61afef", /* 12: Base 0D - Blue         */
	"#c678dd", /* 13: Base 0E - Magenta      */
	"#56b6c2", /* 14: Base 0C - Cyan         */
	"#c8ccd4", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#d19a66", /* 16: Base 09 */
	"#be5046", /* 17: Base 0F */
	"#353b45", /* 18: Base 01 */
	"#3e4451", /* 19: Base 02 */
	"#565c64", /* 20: Base 04 */
	"#b6bdca", /* 21: Base 06 */

	[255] = 0,

	[256] = "#abb2bf", /* default fg: Base 05 */
	[257] = "#282c34", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
