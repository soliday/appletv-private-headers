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
@property(readonly, assign) OpaqueJSValue *jsObjectRef;	// G=0x35f269ed; converted property
@property(readonly, assign, nonatomic) SKPaymentTransaction *paymentTransaction;	// G=0x35f269fd; @synthesize=_paymentTransaction
+ (void)addClassDefinitionInContext:(OpaqueJSContext *)context;	// 0x35f265a9
+ (id)paymentTransactionFromJSValue:(OpaqueJSValue *)jsvalue context:(OpaqueJSContext *)context;	// 0x35f26815
- (id)init;	// 0x35f26871
- (id)initWithPaymentTransaction:(id)paymentTransaction context:(OpaqueJSContext *)context;	// 0x35f268b5
- (void)dealloc;	// 0x35f269a1
// converted property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x35f269ed
// declared property getter: - (id)paymentTransaction;	// 0x35f269fd
@end
