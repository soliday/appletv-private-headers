/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSStreamsProtocol.h"
#import "CoreMediaStream-Structs.h"


@interface MSResetServerProtocol : MSStreamsProtocol {
@private
	MSRSPCContext _context;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x304dd4b5; S=0x304dd4e1; converted property
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x304dd50d
- (void)_coreProtocolDidFailAuthenticationError:(id)_coreProtocol;	// 0x304dd759
- (void)_coreProtocolDidFinishError:(id)_coreProtocol;	// 0x304dd6bd
- (void)dealloc;	// 0x304dd605
// converted property getter: - (id)delegate;	// 0x304dd4b5
- (void)resetServerState;	// 0x304dd66d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x304dd4e1
@end

