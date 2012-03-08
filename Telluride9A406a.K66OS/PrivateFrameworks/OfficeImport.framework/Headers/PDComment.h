/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PDComment : NSObject {
@private
	CGPoint mPosition;	// 4 = 0x4
	NSString *mText;	// 12 = 0xc
	unsigned mAuthorId;	// 16 = 0x10
	NSString *mDate;	// 20 = 0x14
	unsigned mIndex;	// 24 = 0x18
}
@property(assign) unsigned authorId;	// G=0x32a361c9; S=0x32a361d9; converted property
@property(retain) id date;	// G=0x32a361e9; S=0x32a36269; converted property
@property(assign) unsigned index;	// G=0x32a361f9; S=0x32a36209; converted property
@property(assign) CGPoint position;	// G=0x32a3618d; S=0x32a361a5; converted property
@property(retain) id text;	// G=0x32a361b9; S=0x32a362a9; converted property
- (id)init;	// 0x32a36219
// converted property getter: - (unsigned)authorId;	// 0x32a361c9
// converted property getter: - (id)date;	// 0x32a361e9
- (void)dealloc;	// 0x32a362ed
// converted property getter: - (unsigned)index;	// 0x32a361f9
// converted property getter: - (CGPoint)position;	// 0x32a3618d
// converted property setter: - (void)setAuthorId:(unsigned)anId;	// 0x32a361d9
// converted property setter: - (void)setDate:(id)date;	// 0x32a36269
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x32a36209
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x32a361a5
// converted property setter: - (void)setText:(id)text;	// 0x32a362a9
// converted property getter: - (id)text;	// 0x32a361b9
@end
