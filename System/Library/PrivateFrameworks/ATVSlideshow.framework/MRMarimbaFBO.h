/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MRMarimbaPlayback.h>
#import <ATVSlideshow/MRMarimbaHitBlobSupport.h>
#import <ATVSlideshow/EAGLDrawable.h>
#import <ATVSlideshow/MRMarimbaBasicPlayback.h>

@class NSDictionary, NSString, EAGLContext, MRTexture, MPDocument, MRRenderer;

@interface MRMarimbaFBO : NSObject <MRMarimbaPlayback, MRMarimbaHitBlobSupport, EAGLDrawable, MRMarimbaBasicPlayback> {

	BOOL _masterClockIsSet;
	BOOL _bailTimeWatcher;
	BOOL _stopWithVideo;
	BOOL _readOnly;
	BOOL _enableSlideDidChangeNotification;
	NSString* _lastSlideChange;
	EAGLContext* _context;
	MRTexture* _texture;
	MPDocument* _document;
	MRRenderer* _renderer;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                                        //@synthesize size=_size - In the implementation block
@property (copy) NSDictionary * drawableProperties; 
@property (nonatomic,retain) MPDocument * document;                              //@synthesize document=_document - In the implementation block
@property (assign,nonatomic) double time; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (assign,nonatomic) double volume; 
@property (assign,nonatomic) BOOL stopWithVideo; 
@property (assign,nonatomic) BOOL displaysFPS; 
@property (nonatomic,readonly) MRRenderer * renderer;                            //@synthesize renderer=_renderer - In the implementation block
@property (assign,nonatomic) BOOL enableSlideDidChangeNotification;              //@synthesize enableSlideDidChangeNotification=_enableSlideDidChangeNotification - In the implementation block
+(void)releaseResources;
+(id)fboWithDocument:(id)arg1 size:(CGSize)arg2 context:(id)arg3 ;
+(id)fboWithDocument:(id)arg1 size:(CGSize)arg2 ;
-(id)init;
-(void)dealloc;
-(CGSize)size;
-(void)cleanup;
-(void)pause;
-(double)time;
-(void)setSize:(CGSize)arg1 ;
-(id)texture;
-(NSDictionary *)drawableProperties;
-(void)setTime:(double)arg1 ;
-(void)setDrawableProperties:(NSDictionary *)arg1 ;
-(MRRenderer *)renderer;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(BOOL)isPlaying;
-(void)play;
-(MPDocument *)document;
-(void)goBack;
-(void)setDocument:(MPDocument *)arg1 ;
-(double)timeRemaining;
-(void)togglePlayback;
-(void)touchesBegan:(id)arg1 ;
-(void)touchesMoved:(id)arg1 ;
-(BOOL)touchesEnded:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 ;
-(void)beginGesture:(id)arg1 ;
-(unsigned)textureName;
-(double)relativeTime;
-(void)setBailTimeWatcher:(BOOL)arg1 ;
-(void)watcherThread:(id)arg1 ;
-(id)_currentEffectContainer;
-(void)moveToEffectContainer:(id)arg1 withStartOffset:(double)arg2 toStopOffset:(double)arg3 blocking:(BOOL)arg4 ;
-(id)displayedEffectContainers;
-(long long)_mainLayerIndex;
-(id)_firstEffectContainer;
-(id)_effectContainerForTime:(double)arg1 ;
-(BOOL)bailTimeWatcher;
-(id)currentSlides;
-(void)gotoSlide:(id)arg1 ;
-(void)moveToNextEffectContainer;
-(void)moveToPreviousEffectContainer;
-(double)relativeTimeForBackgroundAudio;
-(double)relativeTimeForLayer:(id)arg1 ;
-(void)moveToTitleSlide;
-(void)moveToSubtitleForSlide:(id)arg1 ;
-(id)currentSlide;
-(void)gotoNextSlide;
-(void)gotoPreviousSlide;
-(void)goForth;
-(BOOL)effect:(id)arg1 requestedNumberOfSlides:(unsigned long long)arg2 firstSlideIndexStillNeeded:(unsigned long long)arg3 ;
-(void)requestRendering:(BOOL)arg1 ;
-(BOOL)nearingEndForSerializer:(id)arg1 ;
-(void)callbackThread:(id)arg1 ;
-(id)_currentEffectLayer;
-(void)lockRendering;
-(void)unlockRendering;
-(id)lastSlideChange;
-(void)setLastSlideChange:(id)arg1 ;
-(void)_postNotificationForSlideChange:(id)arg1 ;
-(BOOL)isInTransition;
-(void)whenTransitionIsFinishedSendAction:(SEL)arg1 toTarget:(id)arg2 ;
-(void)removeEffectContainersBeforeTime:(double)arg1 ;
-(void)_slideDidAppear:(id)arg1 ;
-(BOOL)beginLiveUpdateForHitBlob:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toHitBlob:(id)arg2 ;
-(BOOL)endLiveUpdateForHitBlob:(id)arg1 ;
-(void)endGesture:(id)arg1 ;
-(id)blobHitAtPoint:(CGPoint)arg1 fromObjectsForObjectIDs:(id)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getOnScreenVertices:(CGPoint)arg1 forHitBlob:(id)arg2 ;
-(void)doGesture:(id)arg1 ;
-(void)cancelGesture:(id)arg1 ;
-(void)setEAGLContext:(id)arg1 ;
-(void)didLiveChanged:(id)arg1 ;
-(void)didAddEffects:(id)arg1 ;
-(void)pauseWhenStill;
-(BOOL)displaysFPS;
-(void)setDisplaysFPS:(BOOL)arg1 ;
-(BOOL)nearingEndForSerializerAfterDelay:(id)arg1 ;
-(BOOL)effectRequestedSlidesAfterDelay:(id)arg1 ;
-(void)gotoBeginning;
-(void)gotoEnd;
-(void)nextFrame;
-(void)prevFrame;
-(CGImageRef)snapshotAsCGImageForTime:(double)arg1 withSize:(CGSize)arg2 ;
-(CGImageRef)snapshotAsCGImage;
-(void)warmupRenderer;
-(BOOL)stopWithVideo;
-(void)setStopWithVideo:(BOOL)arg1 ;
-(BOOL)enableSlideDidChangeNotification;
-(void)setEnableSlideDidChangeNotification:(BOOL)arg1 ;
-(void)aspectRatioChangedTo:(id)arg1 ;
-(void)setSlaveFrameMode:(BOOL)arg1 ;
-(void)_warmupRendererThreaded:(id)arg1 ;
-(void)switchToDirectInCALayer:(id)arg1 ;
-(void)switchToTexture;
@end

