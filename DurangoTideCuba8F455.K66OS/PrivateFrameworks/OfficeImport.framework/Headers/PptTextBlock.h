/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSMutableArray, NSMutableString;

__attribute__((visibility("hidden")))
@interface PptTextBlock : NSObject {
@private
	PptTextHeaderAtom *mTextHeader;	// 4 = 0x4
	NSMutableString *mText;	// 8 = 0x8
	PptStyleTextPropertyAtom *mStyleText;	// 12 = 0xc
	NSMutableArray *mMetaCharacterFields;	// 16 = 0x10
	NSMutableArray *mBookmarks;	// 20 = 0x14
	NSMutableArray *mHyperlinks;	// 24 = 0x18
	PptTextRulerAtom *mTextRuler;	// 28 = 0x1c
}
- (id)init;	// 0x32b8a141
- (id)bookmarks;	// 0x32d811c5
- (PptCharRun *)characterRunAtIndex:(int)index;	// 0x32b8aa99
- (int)characterRunCount;	// 0x32b8aa85
- (void)dealloc;	// 0x32b8d005
- (id)hyperlinks;	// 0x32b8aac9
- (id)metaCharacterFields;	// 0x32b8aad9
- (PptParaRun *)paragraphRunAtIndex:(int)index;	// 0x32b8aa55
- (int)paragraphRunCount;	// 0x32b8aa41
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)hyperlinks;	// 0x32b8a50d
- (void)readString:(id)string;	// 0x32b8a345
- (void)readStyles:(id)styles;	// 0x32b8a4a5
- (void)readTextBlock:(id)block;	// 0x32b8a23d
- (id)text;	// 0x32b8a75d
- (unsigned long)textIndex;	// 0x32d811d5
- (PptTextRulerAtom *)textRuler;	// 0x32b8a73d
- (int)textType;	// 0x32b8a74d
- (void)writeTextBlock:(id)block;	// 0x32d811c1
@end

