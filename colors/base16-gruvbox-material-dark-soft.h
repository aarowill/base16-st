// Base16 Gruvbox Material Dark, Soft dark - simple terminal color setup
// Mayush Kumar (https://github.com/MayushKumar), sainnhe (https://github.com/sainnhe/gruvbox-material-vscode)
static const char *colorname[] = {
	/* Normal colors */
	"#32302f", /*  0: Base 00 - Black   */
	"#ea6962", /*  1: Base 08 - Red     */
	"#a9b665", /*  2: Base 0B - Green   */
	"#d8a657", /*  3: Base 0A - Yellow  */
	"#7daea3", /*  4: Base 0D - Blue    */
	"#d3869b", /*  5: Base 0E - Magenta */
	"#89b482", /*  6: Base 0C - Cyan    */
	"#ddc7a1", /*  7: Base 05 - White   */

	/* Bright colors */
	"#7c6f64", /*  8: Base 03 - Bright Black */
	"#e78a4e", /* 16: Base 09 */
	"#3c3836", /* 18: Base 01 */
	"#5a524c", /* 19: Base 02 */
	"#bdae93", /* 20: Base 04 */
	"#ebdbb2", /* 21: Base 06 */
	"#bd6f3e", /* 17: Base 0F */
	"#fbf1c7", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#ddc7a1", /* default fg: Base 05 */
	[257] = "#32302f", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
