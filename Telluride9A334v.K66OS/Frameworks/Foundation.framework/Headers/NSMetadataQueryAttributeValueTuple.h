/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSMetadataQueryAttributeValueTuple : NSObject {
@private
	id _attr;	// 4 = 0x4
	id _value;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
@property(readonly, assign) unsigned count;	// G=0x3064d9b5; converted property
@property(readonly, retain) id value;	// G=0x3064d9a5; converted property
- (id)_init:(id)init :(id)arg2 :(id)arg3 :(unsigned)arg4;	// 0x3064d8e5
- (id)attribute;	// 0x3064d995
// converted property getter: - (unsigned)count;	// 0x3064d9b5
- (void)dealloc;	// 0x3064d935
// converted property getter: - (id)value;	// 0x3064d9a5
@end
