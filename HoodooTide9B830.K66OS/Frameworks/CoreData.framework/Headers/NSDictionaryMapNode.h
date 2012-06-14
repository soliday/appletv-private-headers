/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import "NSStoreMapNode.h"


__attribute__((visibility("hidden")))
@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding> {
@private
	id *_attributes;	// 24 = 0x18
	id _attributesAsEncoded;	// 28 = 0x1c
}
+ (void)initialize;	// 0x322aadf1
- (id)initWithCoder:(id)coder;	// 0x322ab579
- (id)initWithValues:(id *)values objectID:(id)anId;	// 0x322aadb1
- (void)_doAttributeDecoding;	// 0x322ab35d
- (const id *)attributeValues;	// 0x322ab0ed
- (void)dealloc;	// 0x322ab125
- (void)encodeWithCoder:(id)coder;	// 0x322ab205
- (id)valueForKey:(id)key;	// 0x322aae0d
@end

