/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterTerminalHelper.h"


@interface AVAssetWriterClientInitiatedTerminalHelper : AVAssetWriterTerminalHelper {
@private
	int _terminalStatus;	// 12 = 0xc
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x326b20e5
- (id)initWithConfigurationState:(id)configurationState terminalStatus:(int)status;	// 0x326b20f9
- (void)cancelWriting;	// 0x326b21b9
- (int)status;	// 0x326b21a9
@end
