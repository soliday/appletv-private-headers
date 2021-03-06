/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSXPCCoder.h"

@class NSMutableArray, NSXPCConnection;
@protocol OS_xpc_object, NSXPCEncoderDelegate;

@interface NSXPCEncoder : NSXPCCoder {
	NSMutableArray *_containers;	// 12 = 0xc
	NSObject<OS_xpc_object> *_oolObjects;	// 16 = 0x10
	NSXPCConnection *_connection;	// 20 = 0x14
	CFDictionaryRef _replacedObjects;	// 24 = 0x18
	CFDictionaryRef _replacedByDelegateObjects;	// 28 = 0x1c
	id<NSXPCEncoderDelegate> _delegate;	// 32 = 0x20
	BOOL _askForReplacement;	// 36 = 0x24
}
@property(assign) NSXPCConnection *_connection;	// G=0x31b3b209; S=0x31b3b21d; @synthesize
@property(assign) id<NSXPCEncoderDelegate> delegate;	// G=0x31b3b235; S=0x31b3b249; @synthesize=_delegate
- (id)init;	// 0x31b3a0d9
- (void)_addObject:(id)object forKey:(id)key;	// 0x31b3a49d
// declared property getter: - (id)_connection;	// 0x31b3b209
- (id)_createRootXPCObject;	// 0x31b3a37d
- (void)_encodeArrayOfObjects:(id)objects forKey:(id)key;	// 0x31b3ac05
- (id)_encodeXPCObject:(id)object;	// 0x31b3a069
- (void)_popContainer;	// 0x31b39fe5
- (void)_pushContainer:(id)container;	// 0x31b3a005
- (void)_pushContainerForKey:(id)key;	// 0x31b3a449
- (id)_topContainer;	// 0x31b3a025
- (BOOL)allowsKeyedCoding;	// 0x31b3a445
- (void)dealloc;	// 0x31b3a1bd
- (id)debugDescription;	// 0x31b3a2bd
// declared property getter: - (id)delegate;	// 0x31b3b235
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x31b3aed1
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x31b3b0b5
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x31b3b1c1
- (void)encodeDataObject:(id)object;	// 0x31b3a569
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x31b3b025
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x31b3afe1
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x31b3af4d
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x31b3af91
- (void)encodeInt:(int)int forKey:(id)key;	// 0x31b3af09
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x31b3b075
- (void)encodeInvocation:(id)invocation;	// 0x31b3a58d
- (void)encodeObject:(id)object;	// 0x31b3a579
- (void)encodeObject:(id)object forKey:(id)key;	// 0x31b3a6c9
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x31b3a55d
- (void)encodeXPCObject:(id)object forKey:(id)key;	// 0x31b3b18d
- (void)finalize;	// 0x31b3a24d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31b3b249
// declared property setter: - (void)set_connection:(id)connection;	// 0x31b3b21d
@end

