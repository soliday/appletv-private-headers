/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVWeakReference, AVAssetWriterConfigurationState, NSError, NSArray, AVMediaFileType, NSURL;

@interface AVAssetWriterHelper : NSObject {
@private
	AVAssetWriterConfigurationState *_configurationState;	// 4 = 0x4
	AVWeakReference *_weakReferenceToAssetWriter;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *availableMediaTypes;	// G=0x30ad83ed; 
@property(readonly, assign, nonatomic) AVAssetWriterConfigurationState *configurationState;	// G=0x30ad8fed; @synthesize=_configurationState
@property(readonly, assign, nonatomic) NSError *error;	// G=0x30ad8459; 
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x30ad8745; 
@property(readonly, assign, nonatomic) AVMediaFileType *mediaFileType;	// G=0x30ad83c5; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x30ad8691; S=0x30ad86b9; 
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x30ad845d; S=0x30ad849d; 
@property(assign, nonatomic) int movieTimeScale;	// G=0x30ad85dd; S=0x30ad8605; 
@property(readonly, assign, nonatomic) NSURL *outputURL;	// G=0x30ad839d; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x30ad8529; S=0x30ad8551; 
@property(readonly, assign, nonatomic) int status;	// G=0x30ad8425; 
@property(retain) AVWeakReference *weakReferenceToAssetWriter;	// G=0x30ad8ffd; S=0x30ad9011; @synthesize=_weakReferenceToAssetWriter
- (id)init;	// 0x30ad8245
- (id)initWithConfigurationState:(id)configurationState;	// 0x30ad8259
- (BOOL)_canApplyOutputSettings:(id)settings forMediaType:(id)mediaType exceptionReason:(id *)reason;	// 0x30ad876d
- (void)_transitionToClientInitiatedTerminalStatus:(int)clientInitiatedTerminalStatus;	// 0x30ad8d71
- (void)addInput:(id)input;	// 0x30ad8ab1
// declared property getter: - (id)availableMediaTypes;	// 0x30ad83ed
- (BOOL)canAddInput:(id)input;	// 0x30ad8aad
- (BOOL)canApplyOutputSettings:(id)settings forMediaType:(id)mediaType;	// 0x30ad8a89
- (void)cancelWriting;	// 0x30ad8ce1
// declared property getter: - (id)configurationState;	// 0x30ad8fed
- (void)dealloc;	// 0x30ad833d
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x30ad8c55
// declared property getter: - (id)error;	// 0x30ad8459
- (void)finishWriting;	// 0x30ad8ce5
// declared property getter: - (id)inputs;	// 0x30ad8745
// declared property getter: - (id)mediaFileType;	// 0x30ad83c5
// declared property getter: - (id)metadata;	// 0x30ad8691
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x30ad845d
// declared property getter: - (int)movieTimeScale;	// 0x30ad85dd
// declared property getter: - (id)outputURL;	// 0x30ad839d
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x30ad86b9
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x30ad849d
// declared property setter: - (void)setMovieTimeScale:(int)scale;	// 0x30ad8605
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x30ad8551
// declared property setter: - (void)setWeakReferenceToAssetWriter:(id)assetWriter;	// 0x30ad9011
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x30ad8529
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x30ad8bc9
- (void)startWriting;	// 0x30ad8b3d
// declared property getter: - (int)status;	// 0x30ad8425
- (void)transitionToFailedStatusWithError:(id)error;	// 0x30ad8eb5
// declared property getter: - (id)weakReferenceToAssetWriter;	// 0x30ad8ffd
@end
