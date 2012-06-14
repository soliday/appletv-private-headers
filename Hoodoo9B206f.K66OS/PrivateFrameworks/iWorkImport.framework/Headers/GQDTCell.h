/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDTCell : NSObject {
@private
	unsigned short mColumnIndex;	// 4 = 0x4
	unsigned short mRowIndex;	// 6 = 0x6
	unsigned short mColumnSpan;	// 8 = 0x8
	unsigned short mRowSpan;	// 10 = 0xa
	GQDSStyle *mStyle;	// 12 = 0xc
}
@property(retain) id cellStyle;	// G=0x33fcca81; S=0x33fccaa5; converted property
// converted property getter: - (id)cellStyle;	// 0x33fcca81
- (unsigned short)columnIndex;	// 0x33fcca41
- (unsigned short)columnSpan;	// 0x33fcca61
- (void)dealloc;	// 0x33fccf91
- (void)incrementColumnSpan;	// 0x33fcca91
- (int)readAttributesForBaseCell:(xmlTextReader *)baseCell processor:(id)processor;	// 0x33fccf05
- (int)readAttributesForBaseTabularCell:(xmlTextReader *)baseTabularCell processor:(id)processor;	// 0x33fccca5
- (int)readBaseAttributesForBaseCell:(xmlTextReader *)baseCell processor:(id)processor;	// 0x33fccb69
- (unsigned short)rowIndex;	// 0x33fcca51
- (unsigned short)rowSpan;	// 0x33fcca71
// converted property setter: - (void)setCellStyle:(id)style;	// 0x33fccaa5
@end

