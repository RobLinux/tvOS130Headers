/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVFrameSetDelegate;
#import <AVKit/AVKit-Structs.h>
@class AVAsset, NSURL, NSIndexSet, NSMutableIndexSet, NSMutableDictionary, AVAssetImageGenerator, NSMutableArray;

@interface AVFrameSet : NSObject {

	os_unfair_lock_s _unfairLock;
	BOOL _ready;
	BOOL _invalidated;
	BOOL _canAssetImageGeneratorFetchFrames;
	BOOL _haveSeenAssetImageGeneratorTimeout;
	BOOL _memoryConstrained;
	AVAsset* _asset;
	NSURL* _assetURL;
	double _frameInterval;
	/*^block*/id _imageGenerator;
	id<AVFrameSetDelegate> _delegate;
	NSIndexSet* _framesOnScreenNow;
	NSIndexSet* _highPriorityFrames;
	NSMutableIndexSet* _frameSet;
	NSMutableIndexSet* _requestedTimes;
	NSMutableDictionary* _cacheImages;
	AVAssetImageGenerator* _assetImageGenerator;
	NSMutableArray* _completionBlocks;
	double _earliestAllowedFetchTime;
	CGSize _desiredImageSize;
	SCD_Struct_AV1 _assetDuration;

}

@property (nonatomic,retain) NSMutableIndexSet * frameSet;                   //@synthesize frameSet=_frameSet - In the implementation block
@property (readonly) NSMutableIndexSet * requestedTimes;                     //@synthesize requestedTimes=_requestedTimes - In the implementation block
@property (retain) NSMutableDictionary * cacheImages;                        //@synthesize cacheImages=_cacheImages - In the implementation block
@property (retain) AVAssetImageGenerator * assetImageGenerator;              //@synthesize assetImageGenerator=_assetImageGenerator - In the implementation block
@property (assign) BOOL invalidated;                                         //@synthesize invalidated=_invalidated - In the implementation block
@property (assign) BOOL canAssetImageGeneratorFetchFrames;                   //@synthesize canAssetImageGeneratorFetchFrames=_canAssetImageGeneratorFetchFrames - In the implementation block
@property (assign) BOOL haveSeenAssetImageGeneratorTimeout;                  //@synthesize haveSeenAssetImageGeneratorTimeout=_haveSeenAssetImageGeneratorTimeout - In the implementation block
@property (getter=isMemoryConstrained) BOOL memoryConstrained;               //@synthesize memoryConstrained=_memoryConstrained - In the implementation block
@property (retain) NSMutableArray * completionBlocks;                        //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (assign) SCD_Struct_AV1 assetDuration;                             //@synthesize assetDuration=_assetDuration - In the implementation block
@property (assign) double earliestAllowedFetchTime;                          //@synthesize earliestAllowedFetchTime=_earliestAllowedFetchTime - In the implementation block
@property (readonly) AVAsset * asset;                                        //@synthesize asset=_asset - In the implementation block
@property (readonly) NSURL * assetURL;                                       //@synthesize assetURL=_assetURL - In the implementation block
@property (readonly) double frameInterval;                                   //@synthesize frameInterval=_frameInterval - In the implementation block
@property (readonly) id imageGenerator;                                      //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (__weak) id<AVFrameSetDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSIndexSet * framesOnScreenNow;                             //@synthesize framesOnScreenNow=_framesOnScreenNow - In the implementation block
@property (readonly) CGSize desiredImageSize;                                //@synthesize desiredImageSize=_desiredImageSize - In the implementation block
@property (getter=isReady,readonly) BOOL ready;                              //@synthesize ready=_ready - In the implementation block
@property (readonly) BOOL canFetchFrames; 
@property (copy) NSIndexSet * highPriorityFrames;                            //@synthesize highPriorityFrames=_highPriorityFrames - In the implementation block
+(id)imageFetchingQueue;
+(id)keyPathsForValuesAffectingCanFetchFrames;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<AVFrameSetDelegate>)delegate;
-(void)setDelegate:(id<AVFrameSetDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isReady;
-(double)frameInterval;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(AVAsset *)asset;
-(NSURL *)assetURL;
-(NSMutableArray *)completionBlocks;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(CGSize)desiredImageSize;
-(id)initWithAsset:(id)arg1 frameInterval:(double)arg2 maximumImageSize:(CGSize)arg3 ;
-(id)initWithAsset:(id)arg1 videoComposition:(id)arg2 frameInterval:(double)arg3 maximumImageSize:(CGSize)arg4 ;
-(id)initWithImageGenerator:(/*^block*/id)arg1 asset:(id)arg2 frameInterval:(double)arg3 maximumImageSize:(CGSize)arg4 ;
-(id)_assetImageGeneratorForAsset:(id)arg1 videoComposition:(id)arg2 ;
-(id)imageFetchingQueue;
-(void)setReady:(BOOL)arg1 ;
-(long long)numberOfFrames;
-(unsigned long long)flushSomeFrames;
-(void)flushUndisplayedFrames;
-(BOOL)canFetchFrames;
-(unsigned long long)numberOfRequestedFrames;
-(BOOL)addRequestedFrameIndex:(long long)arg1 ;
-(BOOL)addRequestedFrameSet:(id)arg1 ;
-(void)removeRequestedFrameIndex:(long long)arg1 ;
-(void)removeRequestedFrameRange:(NSRange)arg1 ;
-(void)removeAllFrameRequests;
-(BOOL)isRequestedFrameIndex:(long long)arg1 ;
-(id)copyOfRequestedFrames;
-(long long)frameIndexForRequestedTime:(double)arg1 ;
-(double)timeIntervalRequestedForFrameIndex:(long long)arg1 ;
-(void)addRequestedTime:(double)arg1 ;
-(void)removeRequestedTime:(double)arg1 ;
-(BOOL)isRequestedTime:(double)arg1 ;
-(id)framesRequestedAndOnScreenStoppingAfterFirst:(BOOL)arg1 ;
-(void)requestFrame:(long long)arg1 ;
-(void)requestFrameForTime:(double)arg1 ;
-(void)requestFrameRange:(NSRange)arg1 ;
-(void)_cacheImage:(id)arg1 forFrame:(long long)arg2 actualTime:(double)arg3 ;
-(id)_arrayOfTimesForFrames:(id)arg1 ;
-(void)whenDoneCallBlock:(/*^block*/id)arg1 ;
-(void)_callDoneBlocks;
-(void)_flushSomeLowPriorityFramesExcluding:(unsigned long long)arg1 ;
-(void)_fetchNextFrame;
-(NSRange)_rangeFramesAffectedByLoadedFrame:(long long)arg1 ;
-(id)frameForTime:(double)arg1 ;
-(id)frameForIndex:(long long)arg1 ;
-(long long)availableFrameIndexForIndex:(long long)arg1 ;
-(id)imageForFrame:(long long)arg1 ;
-(void)flushAllCachedImages;
-(unsigned long long)_estimatedImageMemoryFootprint;
-(void)_handleMemoryWarning:(id)arg1 ;
-(void)_mediaServicesReset:(id)arg1 ;
-(id)imageGenerator;
-(NSIndexSet *)framesOnScreenNow;
-(void)setFramesOnScreenNow:(NSIndexSet *)arg1 ;
-(NSIndexSet *)highPriorityFrames;
-(void)setHighPriorityFrames:(NSIndexSet *)arg1 ;
-(NSMutableIndexSet *)frameSet;
-(void)setFrameSet:(NSMutableIndexSet *)arg1 ;
-(NSMutableIndexSet *)requestedTimes;
-(NSMutableDictionary *)cacheImages;
-(void)setCacheImages:(NSMutableDictionary *)arg1 ;
-(AVAssetImageGenerator *)assetImageGenerator;
-(void)setAssetImageGenerator:(AVAssetImageGenerator *)arg1 ;
-(BOOL)canAssetImageGeneratorFetchFrames;
-(void)setCanAssetImageGeneratorFetchFrames:(BOOL)arg1 ;
-(BOOL)haveSeenAssetImageGeneratorTimeout;
-(void)setHaveSeenAssetImageGeneratorTimeout:(BOOL)arg1 ;
-(BOOL)isMemoryConstrained;
-(void)setMemoryConstrained:(BOOL)arg1 ;
-(SCD_Struct_AV1)assetDuration;
-(void)setAssetDuration:(SCD_Struct_AV1)arg1 ;
-(double)earliestAllowedFetchTime;
-(void)setEarliestAllowedFetchTime:(double)arg1 ;
@end

