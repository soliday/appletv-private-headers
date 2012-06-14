/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PBSlideBase.h"


__attribute__((visibility("hidden")))
@interface PBSlideMaster : PBSlideBase {
}
+ (id)createMasterStyleMap:(id)map state:(id)state;	// 0x311a3c39
+ (void)flattenBaseMasterStyleType:(int)type masterStyleMap:(id)map;	// 0x31301cd5
+ (void)flattenMasterStyleType:(int)type baseType:(int)type2 masterStyleMap:(id)map;	// 0x31301de5
+ (void)flattenPlaceholderTextStylesIntoLayout:(id)layout layoutType:(int)type masterStyleMap:(id)map;	// 0x311a8781
+ (void)flattenTextStyle:(id)style intoTextBox:(id)box;	// 0x311a8925
+ (void)padMissingLevels:(id)levels;	// 0x311a3fbd
+ (void)readMasterDrawables:(id)drawables slideHolder:(id)holder state:(id)state;	// 0x311a564d
+ (void)readSlideLayout:(id)layout slideHolder:(id)holder layoutType:(int)type state:(id)state;	// 0x313020b5
+ (void)readSlideMasterStyles:(id)styles slideHolder:(id)holder state:(id)state;	// 0x311a3879
+ (void)setCannedOtherTextListStyle:(id)style;	// 0x31301ee5
+ (void)setFont:(id)font fromCharacterProperties:(id)characterProperties;	// 0x311a4e75
+ (id)textBodyForPlaceholderType:(int)placeholderType slideLayout:(id)layout;	// 0x311a8899
+ (int)textTypeFor:(int)aFor placeholderType:(int)type;	// 0x311a88fd
@end

