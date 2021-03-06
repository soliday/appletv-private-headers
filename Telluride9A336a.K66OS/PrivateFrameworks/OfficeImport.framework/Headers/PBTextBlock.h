/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PBTextBlock : NSObject {
}
+ (void)applyTextRuler:(PptTextRulerAtom *)ruler toTextBlock:(id)textBlock;	// 0x34c44141
+ (void)readClientTextBox:(id)box textBody:(id)body state:(id)state;	// 0x34bfc995
+ (void)readFromStyledText:(CFAttributedStringRef)styledText toStyledPargraphs:(CFArrayRef)styledPargraphs;	// 0x34bfd8e5
+ (void)readFromTextBlock:(id)textBlock toStyledText:(CFAttributedStringRef)styledText;	// 0x34bfd455
+ (void)readParagraph:(id)paragraph paragraph:(CFAttributedStringRef)paragraph2 textType:(int)type state:(id)state;	// 0x34bfdb5d
@end

