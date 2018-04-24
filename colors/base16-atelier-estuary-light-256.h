// Base16 Atelier Estuary Light dark - simple terminal color setup
// Bram de Haan (http://atelierbramdehaan.nl)
static const char *colorname[] = {
	/* Normal colors */
	"#f4f3ec", /*  0: Base 00 - Black   */
	"#ba6236", /*  1: Base 08 - Red     */
	"#7d9726", /*  2: Base 0B - Green   */
	"#a5980d", /*  3: Base 0A - Yellow  */
	"#36a166", /*  4: Base 0D - Blue    */
	"#5f9182", /*  5: Base 0E - Magenta */
	"#5b9d48", /*  6: Base 0C - Cyan    */
	"#5f5e4e", /*  7: Base 05 - White   */

	/* Bright colors */
	"#878573", /*  8: Base 03 - Bright Black */
	"#ba6236", /*  9: Base 08 - Red          */
	"#7d9726", /* 10: Base 0B - Green        */
	"#a5980d", /* 11: Base 0A - Yellow       */
	"#36a166", /* 12: Base 0D - Blue         */
	"#5f9182", /* 13: Base 0E - Magenta      */
	"#5b9d48", /* 14: Base 0C - Cyan         */
	"#22221b", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ae7313", /* 16: Base 09 */
	"#9d6c7c", /* 17: Base 0F */
	"#e7e6df", /* 18: Base 01 */
	"#929181", /* 19: Base 02 */
	"#6c6b5a", /* 20: Base 04 */
	"#302f27", /* 21: Base 06 */

	[255] = 0,

	[256] = "#5f5e4e", /* default fg: Base 05 */
	[257] = "#f4f3ec", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
