/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSURL, AVAssetWriterHelper, NSError, NSArray, AVAssetWriterInternal, NSString;

@interface AVAssetWriter : NSObject {
@private
	AVAssetWriterInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *availableMediaTypes;	// G=0x346b6539; 
@property(readonly, assign) NSError *error;	// G=0x346b6589; 
@property(retain, getter=_helper, setter=_setHelper:) AVAssetWriterHelper *helper;	// G=0x346b9569; S=0x346b9501; 
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x346b662d; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x346b6685; S=0x346b66ad; 
@property(assign) XXStruct_pwHToB movieFragmentInterval;	// G=0x346b94d1; S=0x346b93f9; converted property
@property(assign) int movieTimeScale;	// G=0x346b6605; S=0x346b88fd; converted property
@property(readonly, copy, nonatomic) NSString *outputFileType;	// G=0x346b6501; 
@property(readonly, copy, nonatomic) NSURL *outputURL;	// G=0x346b64d9; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x346b65b1; S=0x346b65d9; 
@property(readonly, assign) int status;	// G=0x346b6561; 
+ (id)assetWriterWithURL:(id)url fileType:(id)type error:(id *)error;	// 0x346b67b5
+ (void)initialize;	// 0x346b93cd
+ (id)keyPathsForValuesAffectingError;	// 0x346b6835
+ (id)keyPathsForValuesAffectingStatus;	// 0x346b680d
- (id)init;	// 0x346b63d9
- (id)initWithURL:(id)url fileType:(id)type error:(id *)error;	// 0x346b9029
// declared property getter: - (id)_helper;	// 0x346b9569
// declared property setter: - (void)_setHelper:(id)helper;	// 0x346b9501
- (void)_transitionToFailedStatusWithError:(id)error;	// 0x346b6789
- (void)addInput:(id)input;	// 0x346b8a05
// declared property getter: - (id)availableMediaTypes;	// 0x346b6539
- (BOOL)canAddInput:(id)input;	// 0x346b8985
- (BOOL)canApplyOutputSettings:(id)settings forMediaType:(id)mediaType;	// 0x346b6655
- (void)cancelWriting;	// 0x346b671d
- (void)dealloc;	// 0x346b978d
- (id)description;	// 0x346b96ad
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x346b8b1d
// declared property getter: - (id)error;	// 0x346b6589
- (void)finalize;	// 0x346b9731
- (BOOL)finishWriting;	// 0x346b6745
// declared property getter: - (id)inputs;	// 0x346b662d
// declared property getter: - (id)metadata;	// 0x346b6685
// converted property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x346b94d1
// converted property getter: - (int)movieTimeScale;	// 0x346b6605
// declared property getter: - (id)outputFileType;	// 0x346b6501
// declared property getter: - (id)outputURL;	// 0x346b64d9
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x346b66ad
// converted property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x346b93f9
// converted property setter: - (void)setMovieTimeScale:(int)scale;	// 0x346b88fd
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x346b65d9
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x346b65b1
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x346b8a89
- (BOOL)startWriting;	// 0x346b66d9
// declared property getter: - (int)status;	// 0x346b6561
@end
