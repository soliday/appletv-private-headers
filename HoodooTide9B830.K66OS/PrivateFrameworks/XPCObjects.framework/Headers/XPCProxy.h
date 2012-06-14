/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSObject.h> // Unknown library
#import "XPCObjects-Structs.h"
#import "NSCopying.h"

@class NSArray;
@protocol XPCProxyTarget;

@interface XPCProxy : NSObject <NSCopying> {
	xpc_connection_s *_connection;	// 4 = 0x4
	dispatch_queue_s *_queue;	// 8 = 0x8
	id<XPCProxyTarget> _target;	// 12 = 0xc
	Class _remoteClass;	// 16 = 0x10
	id _errorHandler;	// 20 = 0x14
	BOOL _invalidated;	// 24 = 0x18
	BOOL _useTraditionalEncoder;	// 25 = 0x19
	NSArray *_whitelistedClassNames;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) xpc_connection_s *connection;	// G=0x348eafd5; @synthesize=_connection
@property(copy) id errorHandler;	// G=0x348ebcfd; S=0x348ebcd5; @synthesize=_errorHandler
@property(assign) Class remoteClass;	// G=0x348eafe5; S=0x348eaff5; @synthesize=_remoteClass
@property(assign) id<XPCProxyTarget> target;	// G=0x348eb005; S=0x348eb015; @synthesize=_target
@property(assign, nonatomic) BOOL useTraditionalEncoder;	// G=0x348eafb5; S=0x348eafc5; @synthesize=_useTraditionalEncoder
+ (void)initialize;	// 0x348ebca1
- (id)initWithConnection:(xpc_connection_s *)connection queue:(dispatch_queue_s *)queue target:(id)target;	// 0x348eb521
- (id)_errorForXpcError:(void *)xpcError;	// 0x348eb1ad
- (void)_getInvocationArgument:(void *)argument argumentType:(const char *)type class:(Class *)aClass forXpcArgument:(void *)xpcArgument message:(void *)message;	// 0x348ec0ed
- (void)_handleInternalMessage:(void *)message;	// 0x348ebd15
- (id)_invocationForMessage:(void *)message;	// 0x348ecc19
- (BOOL)_messageIsInternal:(void *)internal;	// 0x348ebdb9
- (void *)_newInternalMessageWithID:(int)anId;	// 0x348ebd91
- (void *)_newMessageAndReplyHandler:(id *)handler forInvocation:(id)invocation;	// 0x348ec8fd
- (void *)_newXpcArgumentForInvocationArgumentAt:(void *)at ofType:(const char *)type;	// 0x348ec6ed
- (void *)_newXpcEncodingForObject:(id)object;	// 0x348ebed1
- (id)_objectForXpcEncoding:(void *)xpcEncoding;	// 0x348ebdd9
- (id)_proxyDescription;	// 0x348eb211
// declared property getter: - (xpc_connection_s *)connection;	// 0x348eafd5
- (id)copyWithZone:(NSZone *)zone;	// 0x348eb289
- (void)dealloc;	// 0x348ebc15
// declared property getter: - (id)errorHandler;	// 0x348ebcfd
- (void)forwardInvocation:(id)invocation;	// 0x348ece75
- (void)getProxyClassWithHandler:(id)handler;	// 0x348ecef9
- (void)invalidate;	// 0x348eb9a5
- (id)methodSignatureForSelector:(SEL)selector;	// 0x348eb0f5
// declared property getter: - (Class)remoteClass;	// 0x348eafe5
- (void)restrictDecodingToWhitelistedClassNames:(id)whitelistedClassNames;	// 0x348eb679
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x348ebcd5
// declared property setter: - (void)setRemoteClass:(Class)aClass;	// 0x348eaff5
// declared property setter: - (void)setTarget:(id)target;	// 0x348eb015
// declared property setter: - (void)setUseTraditionalEncoder:(BOOL)encoder;	// 0x348eafc5
// declared property getter: - (id)target;	// 0x348eb005
// declared property getter: - (BOOL)useTraditionalEncoder;	// 0x348eafb5
@end

