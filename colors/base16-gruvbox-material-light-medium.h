// Base16 Gruvbox Material Light, Medium dark - simple terminal color setup
// Mayush Kumar (https://github.com/MayushKumar), sainnhe (https://github.com/sainnhe/gruvbox-material-vscode)
static const char *colorname[] = {
	/* Normal colors */
	"#fbf1c7", /*  0: Base 00 - Black   */
	"#c14a4a", /*  1: Base 08 - Red     */
	"#6c782e", /*  2: Base 0B - Green   */
	"#b47109", /*  3: Base 0A - Yellow  */
	"#45707a", /*  4: Base 0D - Blue    */
	"#945e80", /*  5: Base 0E - Magenta */
	"#4c7a5d", /*  6: Base 0C - Cyan    */
	"#654735", /*  7: Base 05 - White   */

	/* Bright colors */
	"#bdae93", /*  8: Base 03 - Bright Black */
	"#c35e0a", /* 16: Base 09 */
	"#f2e5bc", /* 18: Base 01 */
	"#d5c4a1", /* 19: Base 02 */
	"#665c54", /* 20: Base 04 */
	"#3c3836", /* 21: Base 06 */
	"#e78a4e", /* 17: Base 0F */
	"#282828", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#654735", /* default fg: Base 05 */
	[257] = "#fbf1c7", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
