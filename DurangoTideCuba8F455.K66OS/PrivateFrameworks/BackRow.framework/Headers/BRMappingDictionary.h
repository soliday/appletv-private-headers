/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface BRMappingDictionary : NSObject {
@private
	NSMutableDictionary *_info;	// 4 = 0x4
}
- (id)init;	// 0x32f28839
- (long)count;	// 0x32fd6a55
- (void)dealloc;	// 0x32fd6a89
- (id)keyEnumerator;	// 0x32f290bd
- (id)objectEnumerator;	// 0x32fd6a35
- (id)objectForKey:(id)key;	// 0x32f289c5
- (void)setObject:(id)object forKey:(id)key;	// 0x32f28895
- (void)setValue:(id)value forKey:(id)key;	// 0x32fd6a75
- (void)setValueTransformer:(id)transformer forKey:(id)key;	// 0x32f288b5
- (id)transformedValueForKey:(id)key forObject:(id)object;	// 0x32f29125
- (id)valueForKey:(id)key;	// 0x32f29181
- (id)valueTransformerForKey:(id)key;	// 0x32f29195
@end

