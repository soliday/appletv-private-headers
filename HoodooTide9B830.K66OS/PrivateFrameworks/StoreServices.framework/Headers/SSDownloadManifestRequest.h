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
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x304f4a4d; 
@property(assign, nonatomic) id<SSDownloadManifestRequestDelegate> delegate;	// @dynamic
@property(assign, nonatomic) int manifestFormat;	// G=0x304f4bd5; S=0x304f4be5; @synthesize=_manifestFormat
@property(assign, nonatomic) BOOL shouldHideUserPrompts;	// G=0x304f4bf5; S=0x304f4c05; @synthesize=_shouldHideUserPrompts
- (id)init;	// 0x304f46fd
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x304f4931
- (id)initWithURLRequest:(id)urlrequest;	// 0x304f4711
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x304f4a11
// declared property getter: - (id)URLRequest;	// 0x304f4a4d
- (void)_sendResponseToDelegate:(id)delegate;	// 0x304f4b59
- (id)copyPropertyListEncoding;	// 0x304f4831
- (void *)copyXPCEncoding;	// 0x304f48fd
- (void)dealloc;	// 0x304f47e5
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x304f4a85
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x304f4b31
// declared property getter: - (int)manifestFormat;	// 0x304f4bd5
// declared property setter: - (void)setManifestFormat:(int)format;	// 0x304f4be5
// declared property setter: - (void)setShouldHideUserPrompts:(BOOL)hideUserPrompts;	// 0x304f4c05
// declared property getter: - (BOOL)shouldHideUserPrompts;	// 0x304f4bf5
@end
