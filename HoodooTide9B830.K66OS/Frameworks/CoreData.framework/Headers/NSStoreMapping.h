/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface NSStoreMapping : NSObject {
@private
	NSString *_externalName;	// 4 = 0x4
}
@property(retain) NSString *externalName;	// G=0x3233c549; S=0x32271b79; converted property
- (id)initWithExternalName:(id)externalName;	// 0x3233c559
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x32283c61
- (void)dealloc;	// 0x32271b39
// converted property getter: - (id)externalName;	// 0x3233c549
- (unsigned)hash;	// 0x3233c5a5
- (BOOL)isEqual:(id)equal;	// 0x3233c5cd
// converted property setter: - (void)setExternalName:(id)name;	// 0x32271b79
@end

