/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSCoder.h> // Unknown library


@interface NSCoder (CACoderAdditions)
- (BOOL)CA_decodeCGFloatArray:(float *)array count:(unsigned long)count forKey:(id)key;	// 0x335489f1
- (id)CA_decodeObjectForKey:(id)key;	// 0x3354af7d
- (void)CA_encodeCGFloatArray:(const float *)array count:(unsigned long)count forKey:(id)key;	// 0x3354b205
- (void)CA_encodeObject:(id)object forKey:(id)key conditional:(BOOL)conditional;	// 0x3354b0f1
@end

