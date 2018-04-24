// Base16 Atelier Heath Light dark - simple terminal color setup
// Bram de Haan (http://atelierbramdehaan.nl)
static const char *colorname[] = {
	/* Normal colors */
	"#f7f3f7", /*  0: Base 00 - Black   */
	"#ca402b", /*  1: Base 08 - Red     */
	"#918b3b", /*  2: Base 0B - Green   */
	"#bb8a35", /*  3: Base 0A - Yellow  */
	"#516aec", /*  4: Base 0D - Blue    */
	"#7b59c0", /*  5: Base 0E - Magenta */
	"#159393", /*  6: Base 0C - Cyan    */
	"#695d69", /*  7: Base 05 - White   */

	/* Bright colors */
	"#9e8f9e", /*  8: Base 03 - Bright Black */
	"#ca402b", /*  9: Base 08 - Red          */
	"#918b3b", /* 10: Base 0B - Green        */
	"#bb8a35", /* 11: Base 0A - Yellow       */
	"#516aec", /* 12: Base 0D - Blue         */
	"#7b59c0", /* 13: Base 0E - Magenta      */
	"#159393", /* 14: Base 0C - Cyan         */
	"#1b181b", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#a65926", /* 16: Base 09 */
	"#cc33cc", /* 17: Base 0F */
	"#d8cad8", /* 18: Base 01 */
	"#ab9bab", /* 19: Base 02 */
	"#776977", /* 20: Base 04 */
	"#292329", /* 21: Base 06 */

	[255] = 0,

	[256] = "#695d69", /* default fg: Base 05 */
	[257] = "#f7f3f7", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
