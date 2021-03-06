/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterTerminalHelper.h"

@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
@private
	NSError *_terminalError;	// 12 = 0xc
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x303e61f5
- (id)initWithConfigurationState:(id)configurationState terminalError:(id)error;	// 0x303e6dd1
- (void)dealloc;	// 0x303e6a35
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x303e605d
- (id)error;	// 0x303e6041
- (void)finishWriting;	// 0x303e6069
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x303e6051
- (int)status;	// 0x303e603d
@end

