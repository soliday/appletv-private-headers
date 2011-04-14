/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSMutableDictionary.h> // Unknown library


@interface NSDirInfo : NSMutableDictionary {
	NSMutableDictionary *dict;	// 4 = 0x4
}
- (id)init;	// 0x324f551d
- (id)initWithCapacity:(unsigned)capacity;	// 0x324f53a9
- (id)initWithContentsOfFile:(id)file;	// 0x324f53ed
- (id)initWithDictionary:(id)dictionary;	// 0x324f5431
- (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x324f5475
- (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x324f54c5
- (unsigned)count;	// 0x324f5389
- (void)dealloc;	// 0x324f70dd
- (id)keyEnumerator;	// 0x324f5349
- (id)objectForKey:(id)key;	// 0x324f5369
- (void)removeObjectForKey:(id)key;	// 0x324f5309
- (id)serializeToData;	// 0x324f5241
- (void)setObject:(id)object forKey:(id)key;	// 0x324f5329
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;	// 0x324f4bcd
@end
