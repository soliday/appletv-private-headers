/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface NSPropertyStoreMapping : NSStoreMapping {
@private
	NSPropertyDescription *_property;	// 8 = 0x8
}
@property(retain) NSPropertyDescription *property;	// G=0x362d0e21; S=0x362d0e31; converted property
- (id)initWithProperty:(id)property;	// 0x362d0f15
- (void)dealloc;	// 0x362d1039
- (id)description;	// 0x362d0fb5
- (BOOL)isEqual:(id)equal;	// 0x362d0e41
// converted property getter: - (id)property;	// 0x362d0e21
// converted property setter: - (void)setProperty:(id)property;	// 0x362d0e31
@end

