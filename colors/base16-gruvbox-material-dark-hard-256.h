// Base16 Gruvbox Material Dark, Hard dark - simple terminal color setup
// Mayush Kumar (https://github.com/MayushKumar), sainnhe (https://github.com/sainnhe/gruvbox-material-vscode)
static const char *colorname[] = {
	/* Normal colors */
	"#202020", /*  0: Base 00 - Black   */
	"#ea6962", /*  1: Base 08 - Red     */
	"#a9b665", /*  2: Base 0B - Green   */
	"#d8a657", /*  3: Base 0A - Yellow  */
	"#7daea3", /*  4: Base 0D - Blue    */
	"#d3869b", /*  5: Base 0E - Magenta */
	"#89b482", /*  6: Base 0C - Cyan    */
	"#ddc7a1", /*  7: Base 05 - White   */

	/* Bright colors */
	"#5a524c", /*  8: Base 03 - Bright Black */
	"#ea6962", /*  9: Base 08 - Red          */
	"#a9b665", /* 10: Base 0B - Green        */
	"#d8a657", /* 11: Base 0A - Yellow       */
	"#7daea3", /* 12: Base 0D - Blue         */
	"#d3869b", /* 13: Base 0E - Magenta      */
	"#89b482", /* 14: Base 0C - Cyan         */
	"#fbf1c7", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#e78a4e", /* 16: Base 09 */
	"#bd6f3e", /* 17: Base 0F */
	"#2a2827", /* 18: Base 01 */
	"#504945", /* 19: Base 02 */
	"#bdae93", /* 20: Base 04 */
	"#ebdbb2", /* 21: Base 06 */

	[255] = 0,

	[256] = "#ddc7a1", /* default fg: Base 05 */
	[257] = "#202020", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
