/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

typedef struct _NSZone NSZone;

typedef struct AudioStreamBasicDescription {
	double _field1;
	unsigned _field2;
	unsigned _field3;
	unsigned _field4;
	unsigned _field5;
	unsigned _field6;
	unsigned _field7;
	unsigned _field8;
	unsigned _field9;
} AudioStreamBasicDescription;

typedef struct opaqueCMFormatDescription opaqueCMFormatDescription;

typedef struct AudioChannelDescription {
	unsigned _field1;
	unsigned _field2;
	float _field3[3];
} AudioChannelDescription;

typedef struct AudioChannelLayout {
	unsigned _field1;
	unsigned _field2;
	unsigned _field3;
	AudioChannelDescription _field4[1];
} AudioChannelLayout;

typedef struct AudioStreamPacketDescription {
	long long _field1;
	unsigned _field2;
	unsigned _field3;
} AudioStreamPacketDescription;

typedef struct AudioQueueBuffer {
	unsigned _field1;
	void *_field2;
	unsigned _field3;
	void *_field4;
	unsigned _field5;
	AudioStreamPacketDescription *_field6;
	unsigned _field7;
} AudioQueueBuffer;

typedef struct dispatch_queue_s dispatch_queue_s;

typedef struct OpaqueFigSimpleMutex OpaqueFigSimpleMutex;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CATransform3D {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	float _field5;
	float _field6;
	float _field7;
	float _field8;
	float _field9;
	float _field10;
	float _field11;
	float _field12;
	float _field13;
	float _field14;
	float _field15;
	float _field16;
} CATransform3D;

typedef struct AudioFormatListItem AudioFormatListItem;

typedef struct OpaqueAudioFileID OpaqueAudioFileID;

typedef struct OpaqueAudioQueue OpaqueAudioQueue;

typedef struct AudioFilePacketTableInfo {
	long long _field1;
	int _field2;
	int _field3;
} AudioFilePacketTableInfo;

typedef struct AudioQueueLevelMeterState AudioQueueLevelMeterState;

typedef struct _opaque_pthread_mutex_t {
	long _field1;
	BOOL _field2[40];
} opaque_pthread_mutex_t;

typedef struct AudioPlayerImpl {
	id _field1;
	id _field2;
	id _field3;
	id _field4;
	id _field5;
	AudioStreamBasicDescription _field6;
	AudioStreamBasicDescription _field7;
	unsigned _field8;
	char *_field9;
	unsigned _field10;
	AudioFormatListItem *_field11;
	unsigned _field12;
	OpaqueAudioFileID *_field13;
	OpaqueAudioQueue *_field14;
	long long _field15;
	long long _field16;
	long long _field17;
	float _field18;
	float _field19;
	float _field20;
	unsigned _field21;
	double _field22;
	int _field23;
	AudioFilePacketTableInfo _field24;
	int _field25;
	int _field26;
	bool _field27;
	bool _field28;
	bool _field29;
	bool _field30;
	bool _field31;
	bool _field32;
	bool _field33;
	bool _field34;
	double _field35;
	double _field36;
	double _field37;
	double _field38;
	bool _field39;
	AudioQueueLevelMeterState *_field40;
	AudioQueueBuffer *_field41[3];
	AudioQueueBuffer *_field42;
	int _field43;
	bool _field44;
	bool _field45;
	bool _field46;
	bool _field47;
	bool _field48;
	AudioQueueBuffer *_field49;
	bool _field50;
	unsigned _field51;
	bool _field52;
	bool _field53;
	bool _field54;
	bool _field55;
	long long _field56;
	int _field57;
	unsigned _field58;
	unsigned _field59;
	opaque_pthread_mutex_t _field60;
} AudioPlayerImpl;

typedef struct AudioRecorderImpl {
	id _field1;
	id _field2;
	id _field3;
	id _field4;
	unsigned _field5;
	AudioStreamBasicDescription _field6;
	OpaqueAudioFileID *_field7;
	OpaqueAudioQueue *_field8;
	long long _field9;
	long long _field10;
	long long _field11;
	double _field12;
	double _field13;
	double _field14;
	unsigned _field15;
	char *_field16;
	unsigned _field17;
	AudioFormatListItem *_field18;
	bool _field19;
	bool _field20;
	bool _field21;
	bool _field22;
	bool _field23;
	bool _field24;
	bool _field25;
	AudioQueueLevelMeterState *_field26;
	AudioQueueBuffer *_field27[4];
	AudioQueueBuffer *_field28;
	bool _field29;
	unsigned _field30;
	bool _field31;
} AudioRecorderImpl;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} XXStruct_pwHToB;

typedef struct {
	XXStruct_pwHToB start;
	XXStruct_pwHToB duration;
} XXStruct_yD8eWC;

typedef struct {
	XXStruct_yD8eWC source;
	XXStruct_yD8eWC target;
} XXStruct_lthJfB;

typedef struct OpaqueFigMetadataReader OpaqueFigMetadataReader;

typedef struct CGImage *CGImageRef;

typedef struct OpaqueFigAsset OpaqueFigAsset;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct OpaqueFigPlaybackItem OpaqueFigPlaybackItem;

typedef struct OpaqueFigFormatReader OpaqueFigFormatReader;

typedef struct __CFURL *CFURLRef;

typedef struct __CFDictionary *CFDictionaryRef;

typedef struct __CFString *CFStringRef;

typedef struct OpaqueFigAssetImageGenerator OpaqueFigAssetImageGenerator;

typedef struct OpaqueFigPlayer OpaqueFigPlayer;

typedef struct dispatch_source_s dispatch_source_s;

typedef struct OpaqueFigCPEProtector OpaqueFigCPEProtector;

typedef struct __CFNumber *CFNumberRef;

typedef struct OpaqueFigMutableComposition OpaqueFigMutableComposition;

typedef struct OpaqueFigAssetReader OpaqueFigAssetReader;

typedef struct opaqueCMSampleBuffer opaqueCMSampleBuffer;

typedef struct OpaqueFigAssetWriter OpaqueFigAssetWriter;

typedef struct __CVPixelBufferPool *CVPixelBufferPoolRef;

typedef struct __CVBuffer *CVBufferRef;

typedef struct CGColor *CGColorRef;

typedef struct OpaqueFigRemaker OpaqueFigRemaker;

typedef struct OpaqueFigRecorder OpaqueFigRecorder;

typedef struct __IOSurface *IOSurfaceRef;

typedef struct __CFRunLoop *CFRunLoopRef;

typedef struct __CFRunLoopSource *CFRunLoopSourceRef;

typedef struct OpaqueFigSemaphore OpaqueFigSemaphore;

typedef struct OpaqueFigTrackReader OpaqueFigTrackReader;

typedef struct OpaqueFigAssetTrack OpaqueFigAssetTrack;

typedef struct __CFBag *CFBagRef;

typedef struct opaqueCMNotificationCenter opaqueCMNotificationCenter;

typedef struct OpaqueFigSubtitleRenderer OpaqueFigSubtitleRenderer;

typedef struct __CFAttributedString *CFAttributedStringRef;

typedef struct CGContext *CGContextRef;

typedef struct MyAudioQueueBuffer {
	unsigned _field1;
	void *_field2;
	unsigned _field3;
	void *_field4;
	unsigned _field5;
	AudioStreamPacketDescription *_field6;
	unsigned _field7;
} MyAudioQueueBuffer;

typedef struct CAStreamBasicDescription {
	double _field1;
	unsigned _field2;
	unsigned _field3;
	unsigned _field4;
	unsigned _field5;
	unsigned _field6;
	unsigned _field7;
	unsigned _field8;
	unsigned _field9;
} CAStreamBasicDescription;

typedef struct OpaqueAudioComponentInstance OpaqueAudioComponentInstance;

typedef struct OpaqueAudioConverter OpaqueAudioConverter;

typedef struct MemorySyncBool {
	bool _field1;
} MemorySyncBool;

template<>
struct less<AVVoiceAlertType>;

typedef struct _Rb_tree_node_base {
	int _field1;
	struct Rb_tree_node_base *_field2;
	struct Rb_tree_node_base *_field3;
	struct Rb_tree_node_base *_field4;
} Rb_tree_node_base;

template<>
struct _Rb_tree_impl<std::less<AVVoiceAlertType>, false> {
	less<AVVoiceAlertType> _field1;
	Rb_tree_node_base _field2;
	unsigned _field3;
};

template<>
struct _Rb_tree<AVVoiceAlertType, std::pair<const AVVoiceAlertType, NSURL *>, std::_Select1st<std::pair<const AVVoiceAlertType, NSURL *> >, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, NSURL *> > > {
	_Rb_tree_impl<std::less<AVVoiceAlertType>, false> _field1;
};

template<>
struct map<AVVoiceAlertType, NSURL *, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, NSURL *> > > {
	_Rb_tree<AVVoiceAlertType, std::pair<const AVVoiceAlertType, NSURL *>, std::_Select1st<std::pair<const AVVoiceAlertType, NSURL *> >, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, NSURL *> > > _field1;
};

template<>
struct _Rb_tree<AVVoiceAlertType, std::pair<const AVVoiceAlertType, AudioQueueBuffer *>, std::_Select1st<std::pair<const AVVoiceAlertType, AudioQueueBuffer *> >, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, AudioQueueBuffer *> > > {
	_Rb_tree_impl<std::less<AVVoiceAlertType>, false> _field1;
};

template<>
struct map<AVVoiceAlertType, AudioQueueBuffer *, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, AudioQueueBuffer *> > > {
	_Rb_tree<AVVoiceAlertType, std::pair<const AVVoiceAlertType, AudioQueueBuffer *>, std::_Select1st<std::pair<const AVVoiceAlertType, AudioQueueBuffer *> >, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, AudioQueueBuffer *> > > _field1;
};

typedef struct ControllerImpl {
	id _field1;
	id _field2;
	id _field3;
	CAStreamBasicDescription _field4;
	double _field5;
	bool _field6;
	AudioQueueLevelMeterState *_field7;
	OpaqueAudioQueue *_field8;
	int _field9;
	OpaqueAudioComponentInstance *_field10;
	OpaqueAudioConverter *_field11;
	unsigned _field12;
	unsigned _field13;
	unsigned _field14;
	unsigned _field15;
	AudioQueueBuffer **_field16;
	unsigned long long _field17;
	int _field18;
	int _field19;
	bool _field20;
	MemorySyncBool _field21;
	bool _field22;
	float _field23;
	id _field24;
	bool _field25;
	unsigned _field26;
	id _field27;
	CAStreamBasicDescription _field28;
	double _field29;
	OpaqueAudioQueue *_field30;
	int _field31;
	id _field32;
	unsigned _field33;
	AudioQueueBuffer **_field34;
	int _field35;
	bool _field36;
	bool _field37;
	bool _field38;
	bool _field39;
	MemorySyncBool _field40;
	bool _field41;
	float _field42;
	unsigned _field43;
	CAStreamBasicDescription _field44;
	long long _field45;
	OpaqueAudioQueue *_field46;
	map<AVVoiceAlertType, NSURL *, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, NSURL *> > > _field47;
	map<AVVoiceAlertType, AudioQueueBuffer *, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, AudioQueueBuffer *> > > _field48;
	bool _field49;
	int _field50;
	float _field51;
	double _field52;
	unsigned long long _field53;
	float _field54;
	id _field55;
	OpaqueAudioFileID *_field56;
	unsigned _field57;
	AudioFormatListItem *_field58;
	unsigned _field59;
	unsigned _field60;
	char *_field61;
	AudioFilePacketTableInfo _field62;
	long long _field63;
	long long _field64;
	bool _field65;
	int _field66;
	int _field67;
	id _field68;
	bool _field69;
	bool _field70;
	bool _field71;
	bool _field72;
	int _field73;
	double _field74;
	double _field75;
	double _field76;
	bool _field77;
	bool _field78;
	int _field79;
	int _field80;
	bool _field81;
	unsigned _field82;
	bool _field83;
	int _field84;
	bool _field85;
	opaque_pthread_mutex_t _field86[4];
	int _field87;
} ControllerImpl;


