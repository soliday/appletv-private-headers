/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSCoder.h> // Unknown library


@interface NSCoder (XPCSafeDecoding)
- (id)_safeDecodeContainerForKey:(id)key containerClass:(Class)aClass valueClass:(Class)aClass3;	// 0x33396a69
- (id)safeDecodeArrayForKey:(id)key valueClass:(Class)aClass;	// 0x333969c9
- (id)safeDecodeDateForKey:(id)key;	// 0x33396949
- (id)safeDecodeDictionaryForKey:(id)key keyClass:(Class)aClass valueClass:(Class)aClass3;	// 0x33396b25
- (id)safeDecodeNumberForKey:(id)key;	// 0x33396989
- (id)safeDecodeObjectForKey:(id)key expectedClass:(Class)aClass;	// 0x333968d1
- (id)safeDecodeSetForKey:(id)key valueClass:(Class)aClass;	// 0x33396a19
- (id)safeDecodeStringForKey:(id)key;	// 0x33396909
@end
