/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDTCell.h"
#import "iWorkImport-Structs.h"

@class GQDWPLayoutStorage;

__attribute__((visibility("hidden")))
@interface GQDTTextCell : GQDTCell {
@private
	CFStringRef mStringValue;	// 16 = 0x10
	GQDWPLayoutStorage *mLayoutStorage;	// 20 = 0x14
}
- (void)dealloc;	// 0x33fd72cd
- (id)layoutStorage;	// 0x33fd71b9
- (int)readContentForTCell:(xmlTextReader *)tcell;	// 0x33fd758d
- (int)readContentForTextCell:(xmlTextReader *)textCell;	// 0x33fd7555
- (CFStringRef)stringValue;	// 0x33fd71a9
@end

