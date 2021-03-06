/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, SFUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface WDFontTable : NSObject {
@private
	SFUNoCopyDictionary *mFontTable;	// 4 = 0x4
	NSMutableArray *mFontsInOrderOfInsertion;	// 8 = 0x8
}
- (id)init;	// 0x3284fcf5
- (void)clear;	// 0x3285697d
- (int)count;	// 0x329c0f79
- (id)createFontWithName:(id)name;	// 0x3284fead
- (void)dealloc;	// 0x327d6725
- (id)fontWithName:(id)name;	// 0x328508cd
- (id)fontWithName:(id)name create:(BOOL)create;	// 0x3284fe61
- (id)fonts;	// 0x329c0f59
@end

