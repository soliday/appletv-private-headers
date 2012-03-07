/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSCoding.h"

@class NSURLRequest;
@protocol SSDownloadManifestRequestDelegate;

@interface SSDownloadManifestRequest : SSRequest <SSCoding> {
@private
	int _manifestFormat;	// 36 = 0x24
	BOOL _shouldHideUserPrompts;	// 40 = 0x28
	NSURLRequest *_urlRequest;	// 44 = 0x2c
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x36500f91; 
@property(assign, nonatomic) id<SSDownloadManifestRequestDelegate> delegate;	// @dynamic
@property(assign, nonatomic) int manifestFormat;	// G=0x36501119; S=0x36501129; @synthesize=_manifestFormat
@property(assign, nonatomic) BOOL shouldHideUserPrompts;	// G=0x36501139; S=0x36501149; @synthesize=_shouldHideUserPrompts
- (id)init;	// 0x36500c41
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x36500e75
- (id)initWithURLRequest:(id)urlrequest;	// 0x36500c55
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x36500f55
// declared property getter: - (id)URLRequest;	// 0x36500f91
- (void)_sendResponseToDelegate:(id)delegate;	// 0x3650109d
- (id)copyPropertyListEncoding;	// 0x36500d75
- (void *)copyXPCEncoding;	// 0x36500e41
- (void)dealloc;	// 0x36500d29
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x36500fc9
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x36501075
// declared property getter: - (int)manifestFormat;	// 0x36501119
// declared property setter: - (void)setManifestFormat:(int)format;	// 0x36501129
// declared property setter: - (void)setShouldHideUserPrompts:(BOOL)hideUserPrompts;	// 0x36501149
// declared property getter: - (BOOL)shouldHideUserPrompts;	// 0x36501139
@end
