/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVJSObject.h"
#import <NSObject.h> // Unknown library

@class SKPaymentTransaction;

__attribute__((visibility("hidden")))
@interface ATVJSSKPaymentTransaction : NSObject <ATVJSObject> {
@private
	OpaqueJSValue *_jsObjectRef;	// 4 = 0x4
	SKPaymentTransaction *_paymentTransaction;	// 8 = 0x8
}
@property(readonly, assign) OpaqueJSValue *jsObjectRef;	// G=0x331a0801; converted property
@property(readonly, assign, nonatomic) SKPaymentTransaction *paymentTransaction;	// G=0x331a0811; @synthesize=_paymentTransaction
+ (void)addClassDefinitionInContext:(OpaqueJSContext *)context;	// 0x331a03bd
+ (id)paymentTransactionFromJSValue:(OpaqueJSValue *)jsvalue context:(OpaqueJSContext *)context;	// 0x331a0629
- (id)init;	// 0x331a0685
- (id)initWithPaymentTransaction:(id)paymentTransaction context:(OpaqueJSContext *)context;	// 0x331a06c9
- (void)dealloc;	// 0x331a07b5
// converted property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x331a0801
// declared property getter: - (id)paymentTransaction;	// 0x331a0811
@end

