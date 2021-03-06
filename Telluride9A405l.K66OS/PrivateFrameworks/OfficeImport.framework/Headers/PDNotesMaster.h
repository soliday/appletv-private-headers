/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideBase.h"

@class OADTheme, OADColorMap, OADTextListStyle;

__attribute__((visibility("hidden")))
@interface PDNotesMaster : PDSlideBase {
@private
	OADTheme *mTheme;	// 32 = 0x20
	OADColorMap *mColorMap;	// 36 = 0x24
	OADTextListStyle *mNotesTextStyle;	// 40 = 0x28
}
- (id)init;	// 0x30da6c79
- (id)colorMap;	// 0x30da75d9
- (id)colorScheme;	// 0x30da7655
- (void)dealloc;	// 0x30da7de1
- (void)doneWithContent;	// 0x30dfb671
- (id)drawingTheme;	// 0x30dfb5f9
- (id)fontScheme;	// 0x30da768d
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;	// 0x30dfb5c1
- (id)notesTextStyle;	// 0x30da75e9
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;	// 0x30dfb5bd
- (id)parentSlideBase;	// 0x30dfb5b1
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;	// 0x30dfb5b5
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style;	// 0x30dfb705
- (id)parentTextStyleForTables;	// 0x30dfb5b9
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index;	// 0x30dfb5c5
- (id)styleMatrix;	// 0x30dfb725
- (id)theme;	// 0x30da6d55
@end

