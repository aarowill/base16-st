// Base16 Catppuccin dark - simple terminal color setup
// Pocco81 (https://github.com/pocco81)
static const char *colorname[] = {
	/* Normal colors */
	"#1e1e28", /*  0: Base 00 - Black   */
	"#f28fad", /*  1: Base 08 - Red     */
	"#abe9b3", /*  2: Base 0B - Green   */
	"#fae3b0", /*  3: Base 0A - Yellow  */
	"#96cdfb", /*  4: Base 0D - Blue    */
	"#ddb6f2", /*  5: Base 0E - Magenta */
	"#b5e8e0", /*  6: Base 0C - Cyan    */
	"#d7dae0", /*  7: Base 05 - White   */

	/* Bright colors */
	"#575268", /*  8: Base 03 - Bright Black */
	"#f28fad", /*  9: Base 08 - Red          */
	"#abe9b3", /* 10: Base 0B - Green        */
	"#fae3b0", /* 11: Base 0A - Yellow       */
	"#96cdfb", /* 12: Base 0D - Blue         */
	"#ddb6f2", /* 13: Base 0E - Magenta      */
	"#b5e8e0", /* 14: Base 0C - Cyan         */
	"#c9cbff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#f8bd96", /* 16: Base 09 */
	"#f2cdcd", /* 17: Base 0F */
	"#1a1826", /* 18: Base 01 */
	"#302d41", /* 19: Base 02 */
	"#6e6c7c", /* 20: Base 04 */
	"#f5e0dc", /* 21: Base 06 */

	[255] = 0,

	[256] = "#d7dae0", /* default fg: Base 05 */
	[257] = "#1e1e28", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
