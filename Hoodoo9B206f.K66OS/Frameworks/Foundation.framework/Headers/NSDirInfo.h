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
- (id)init;	// 0x31debc61
- (id)initWithCapacity:(unsigned)capacity;	// 0x31debde9
- (id)initWithContentsOfFile:(id)file;	// 0x31debd9d
- (id)initWithDictionary:(id)dictionary;	// 0x31debd51
- (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x31debd01
- (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x31debca9
- (unsigned)count;	// 0x31debe81
- (void)dealloc;	// 0x31debe35
- (id)keyEnumerator;	// 0x31debec1
- (id)objectForKey:(id)key;	// 0x31debea1
- (void)removeObjectForKey:(id)key;	// 0x31debf01
- (id)serializeToData;	// 0x31debf25
- (void)setObject:(id)object forKey:(id)key;	// 0x31debee1
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;	// 0x31debf21
@end

