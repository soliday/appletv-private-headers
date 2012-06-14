/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURLRequest;

@interface AARequest : NSObject {
	NSString *_urlString;	// 4 = 0x4
	BOOL _flushCache;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL flushCache;	// G=0x3593f84d; S=0x3593f85d; @synthesize=_flushCache
@property(readonly, assign) NSURLRequest *urlRequest;	// G=0x3593f429; 
@property(readonly, retain) NSString *urlString;	// G=0x3593f425; converted property
+ (id)protocolVersion;	// 0x3593f3c5
+ (Class)responseClass;	// 0x3593f3a9
- (id)initWithURLString:(id)urlstring;	// 0x3593f3d1
- (id)bodyDictionary;	// 0x3593f571
- (void)dealloc;	// 0x3593f801
// declared property getter: - (BOOL)flushCache;	// 0x3593f84d
- (void)performRequestWithHandler:(id)handler;	// 0x3593f69d
// declared property setter: - (void)setFlushCache:(BOOL)cache;	// 0x3593f85d
- (id)urlCredential;	// 0x3593f56d
// declared property getter: - (id)urlRequest;	// 0x3593f429
// converted property getter: - (id)urlString;	// 0x3593f425
@end
