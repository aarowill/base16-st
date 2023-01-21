// Base16 Gruvbox Material Light, Soft dark - simple terminal color setup
// Mayush Kumar (https://github.com/MayushKumar), sainnhe (https://github.com/sainnhe/gruvbox-material-vscode)
static const char *colorname[] = {
	/* Normal colors */
	"#f2e5bc", /*  0: Base 00 - Black   */
	"#c14a4a", /*  1: Base 08 - Red     */
	"#6c782e", /*  2: Base 0B - Green   */
	"#b47109", /*  3: Base 0A - Yellow  */
	"#45707a", /*  4: Base 0D - Blue    */
	"#945e80", /*  5: Base 0E - Magenta */
	"#4c7a5d", /*  6: Base 0C - Cyan    */
	"#654735", /*  7: Base 05 - White   */

	/* Bright colors */
	"#a89984", /*  8: Base 03 - Bright Black */
	"#c14a4a", /*  9: Base 08 - Red          */
	"#6c782e", /* 10: Base 0B - Green        */
	"#b47109", /* 11: Base 0A - Yellow       */
	"#45707a", /* 12: Base 0D - Blue         */
	"#945e80", /* 13: Base 0E - Magenta      */
	"#4c7a5d", /* 14: Base 0C - Cyan         */
	"#282828", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#c35e0a", /* 16: Base 09 */
	"#e78a4e", /* 17: Base 0F */
	"#ebdbb2", /* 18: Base 01 */
	"#c9b99a", /* 19: Base 02 */
	"#665c54", /* 20: Base 04 */
	"#3c3836", /* 21: Base 06 */

	[255] = 0,

	[256] = "#654735", /* default fg: Base 05 */
	[257] = "#f2e5bc", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
