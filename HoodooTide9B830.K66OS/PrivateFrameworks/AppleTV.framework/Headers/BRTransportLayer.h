/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableDictionary, NSArray, BRImage, BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRTransportLayer : BRControl {
@private
	BOOL _zeroDuration;	// 49 = 0x31
	BOOL _drawsBetweenLeftEdgeAndBufferEdge;	// 50 = 0x32
	BOOL _useWideLeftEndCap;	// 51 = 0x33
	BOOL _playerStateHidden;	// 52 = 0x34
	float _percentComplete;	// 56 = 0x38
	NSRange _downloadedRange;	// 60 = 0x3c
	int _currentState;	// 68 = 0x44
	NSMutableDictionary *_cachedImages;	// 72 = 0x48
	CGRect _leftEndCapBounds;	// 76 = 0x4c
	CGRect _rightEndCapBounds;	// 92 = 0x5c
	CGRect _leftEndCapExtensionBounds;	// 108 = 0x6c
	BRImage *_leftEndCap;	// 124 = 0x7c
	BRImage *_leftEndCapPiece;	// 128 = 0x80
	BRImage *_rightEndCap;	// 132 = 0x84
	CGRect _leftProgressEndCapBounds;	// 136 = 0x88
	CGRect _rightProgressEndCapBounds;	// 152 = 0x98
	BRImage *_leftProgressEndCap;	// 168 = 0xa8
	BRImage *_rightProgressEndCap;	// 172 = 0xac
	BRImage *_leftProgressUnbufferedEndCap;	// 176 = 0xb0
	CGRect _leftGrayBarBounds;	// 180 = 0xb4
	CGRect _rightGrayBarBounds;	// 196 = 0xc4
	BRImage *_grayBarPiece;	// 212 = 0xd4
	CGRect _rightGrayEndCapBounds;	// 216 = 0xd8
	BRImage *_rightGrayEndCap;	// 232 = 0xe8
	CGRect _leftWhiteBarBounds;	// 236 = 0xec
	CGRect _rightWhiteBarBounds;	// 252 = 0xfc
	BRImage *_whiteBarPiece;	// 268 = 0x10c
	CGRect _blueAlreadyPlayedBounds;	// 272 = 0x110
	BRImage *_blueAlreadyPlayed;	// 288 = 0x120
	CGRect _chapterMarkerBounds;	// 292 = 0x124
	NSArray *_chapterMarkers;	// 308 = 0x134
	NSArray *_interstitialMarkers;	// 312 = 0x138
	BRImage *_interstitialOnImage;	// 316 = 0x13c
	BRImage *_interstitialOffImage;	// 320 = 0x140
	long _currentInterstitialIndex;	// 324 = 0x144
	float _temporaryMarkerPositionPercentage;	// 328 = 0x148
	BOOL _showChapterMarkers;	// 332 = 0x14c
	CGRect _playheadBounds;	// 336 = 0x150
	BRImage *_playhead;	// 352 = 0x160
	CGSize _dynamicBounds;	// 356 = 0x164
	CGSize _staticBounds;	// 364 = 0x16c
	BRWaitSpinnerControl *_spinner;	// 372 = 0x174
}
@property(assign) BOOL showChapterMarks;	// G=0x32a22d25; S=0x32a22d05; converted property
- (id)initWithSpinner:(BOOL)spinner;	// 0x32a2235d
- (id)_cachedImageForName:(id)name;	// 0x32a231f5
- (void)_drawChapterMarkersInContext:(CGContextRef)context;	// 0x32a23bcd
- (void)_drawInterstitialMarkersInContext:(CGContextRef)context;	// 0x32a23f29
- (id)_loadImageForName:(id)name;	// 0x32a23261
- (void)_updateDynamicFrames;	// 0x32a23671
- (void)_updateLeftEnd;	// 0x32a230b9
- (void)_updateStaticFrames;	// 0x32a232dd
- (void)dealloc;	// 0x32a22615
- (void)drawInContext:(CGContextRef)context;	// 0x32a22d65
- (void)layoutSubcontrols;	// 0x32a22d35
- (CGRect)leftEndCapRenderableArea;	// 0x32a22989
- (float)playheadPosition;	// 0x32a22b59
- (CGRect)rightEndCapFrame;	// 0x32a228e5
- (void)setChapterMarkers:(id)markers withTemporaryMarker:(float)temporaryMarker;	// 0x32a22c01
- (void)setCurrentInterstitialIndex:(long)index;	// 0x32a22ce5
- (void)setDownloadedRange:(NSRange)range;	// 0x32a22895
- (void)setDrawsBetweenLeftEdgeAndBufferEdge:(BOOL)edge;	// 0x32a22771
- (void)setInterstitialMarkers:(id)markers;	// 0x32a22c81
- (void)setPercentComplete:(float)complete;	// 0x32a226f9
- (void)setPlayerStateHidden:(BOOL)hidden;	// 0x32a2280d
// converted property setter: - (void)setShowChapterMarks:(BOOL)marks;	// 0x32a22d05
- (void)setState:(int)state;	// 0x32a2269d
- (void)setUseWideLeftEndCap:(BOOL)cap;	// 0x32a227b5
- (void)setZeroDuration:(BOOL)duration;	// 0x32a22851
// converted property getter: - (BOOL)showChapterMarks;	// 0x32a22d25
@end

