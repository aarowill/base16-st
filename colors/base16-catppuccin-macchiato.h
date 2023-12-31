// Base16 Catppuccin Macchiato dark - simple terminal color setup
// https://github.com/catppuccin/catppuccin
static const char *colorname[] = {
	/* Normal colors */
	"#24273a", /*  0: Base 00 - Black   */
	"#ed8796", /*  1: Base 08 - Red     */
	"#a6da95", /*  2: Base 0B - Green   */
	"#eed49f", /*  3: Base 0A - Yellow  */
	"#8aadf4", /*  4: Base 0D - Blue    */
	"#c6a0f6", /*  5: Base 0E - Magenta */
	"#8bd5ca", /*  6: Base 0C - Cyan    */
	"#cad3f5", /*  7: Base 05 - White   */

	/* Bright colors */
	"#494d64", /*  8: Base 03 - Bright Black */
	"#f5a97f", /* 16: Base 09 */
	"#1e2030", /* 18: Base 01 */
	"#363a4f", /* 19: Base 02 */
	"#5b6078", /* 20: Base 04 */
	"#f4dbd6", /* 21: Base 06 */
	"#f0c6c6", /* 17: Base 0F */
	"#b7bdf8", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#cad3f5", /* default fg: Base 05 */
	[257] = "#24273a", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
