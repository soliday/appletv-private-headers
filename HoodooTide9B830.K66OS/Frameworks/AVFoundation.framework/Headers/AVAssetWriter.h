/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAssetWriterInternal, NSError, NSArray, AVAssetWriterHelper, NSString, NSURL;

@interface AVAssetWriter : NSObject {
@private
	AVAssetWriterInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *availableMediaTypes;	// G=0x35e3244d; 
@property(readonly, assign) NSError *error;	// G=0x35e324ed; 
@property(retain, getter=_helper, setter=_setHelper:) AVAssetWriterHelper *helper;	// G=0x35e320d5; S=0x35e322a1; 
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x35e32735; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x35e3288d; S=0x35e328b5; 
@property(assign) XXStruct_pwHToB movieFragmentInterval;	// G=0x35e32515; S=0x35e32555; converted property
@property(assign) int movieTimeScale;	// G=0x35e32689; S=0x35e326b1; converted property
@property(readonly, assign, nonatomic) NSString *outputFileType;	// G=0x35e32415; 
@property(readonly, assign, nonatomic) NSURL *outputURL;	// G=0x35e323ed; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x35e32635; S=0x35e3265d; 
@property(readonly, assign) int status;	// G=0x35e3249d; 
+ (id)assetWriterWithURL:(id)url fileType:(id)type error:(id *)error;	// 0x35e31b71
+ (void)initialize;	// 0x35e31b45
+ (id)keyPathsForValuesAffectingError;	// 0x35e324c5
+ (id)keyPathsForValuesAffectingStatus;	// 0x35e32475
- (id)init;	// 0x35e31bc9
- (id)initWithURL:(id)url fileType:(id)type error:(id *)error;	// 0x35e31bed
// declared property getter: - (id)_helper;	// 0x35e320d5
// declared property setter: - (void)_setHelper:(id)helper;	// 0x35e322a1
- (void)_transitionToFailedStatusWithError:(id)error;	// 0x35e32af1
- (void)addInput:(id)input;	// 0x35e3280d
// declared property getter: - (id)availableMediaTypes;	// 0x35e3244d
- (BOOL)canAddInput:(id)input;	// 0x35e3278d
- (BOOL)canApplyOutputSettings:(id)settings forMediaType:(id)mediaType;	// 0x35e3275d
- (void)cancelWriting;	// 0x35e32a81
- (void)dealloc;	// 0x35e31f49
- (id)description;	// 0x35e32051
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x35e329d5
// declared property getter: - (id)error;	// 0x35e324ed
- (void)finalize;	// 0x35e31ff5
- (BOOL)finishWriting;	// 0x35e32aa9
// declared property getter: - (id)inputs;	// 0x35e32735
// declared property getter: - (id)metadata;	// 0x35e3288d
// converted property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x35e32515
// converted property getter: - (int)movieTimeScale;	// 0x35e32689
// declared property getter: - (id)outputFileType;	// 0x35e32415
// declared property getter: - (id)outputURL;	// 0x35e323ed
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x35e328b5
// converted property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x35e32555
// converted property setter: - (void)setMovieTimeScale:(int)scale;	// 0x35e326b1
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x35e3265d
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x35e32635
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x35e32929
- (BOOL)startWriting;	// 0x35e328e1
// declared property getter: - (int)status;	// 0x35e3249d
@end

