/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface FormToABBinder : NSObject {
@private
	NSDictionary *_abPointers;	// 4 = 0x4
	NSArray *_fieldLabels;	// 8 = 0x8
	NSDictionary *_synonyms;	// 12 = 0xc
}
+ (id)abPointerForControl:(id)control rep:(id)rep useFieldName:(BOOL)name;	// 0x30329709
+ (void)clearBinders;	// 0x303296d5
+ (void)loadBinders;	// 0x303295c9
+ (id)synonymsForMatch:(id)match;	// 0x3032979d
- (id)initWithPath:(id)path;	// 0x30329941
- (void)_indexMapping:(id)mapping;	// 0x30329819
- (id)abPointerForControl:(id)control rep:(id)rep useFieldName:(BOOL)name foundByPageScan:(BOOL *)scan;	// 0x30329ca9
- (void)dealloc;	// 0x30329c31
- (id)synonymsForMatch:(id)match;	// 0x30329ef1
@end
