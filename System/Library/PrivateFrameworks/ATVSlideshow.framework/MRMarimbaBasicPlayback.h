/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPDocument, MRRenderer;


@protocol MRMarimbaBasicPlayback
@property (nonatomic,retain) MPDocument * document; 
@property (assign,nonatomic) double time; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (assign,nonatomic) double volume; 
@property (assign,nonatomic) BOOL stopWithVideo; 
@property (assign,nonatomic) BOOL displaysFPS; 
@property (nonatomic,readonly) MRRenderer * renderer; 
@property (assign,nonatomic) BOOL enableSlideDidChangeNotification; 
@required
-(void)pause;
-(double)time;
-(void)setTime:(double)arg1;
-(MRRenderer *)renderer;
-(double)volume;
-(void)setVolume:(double)arg1;
-(BOOL)isPlaying;
-(void)play;
-(MPDocument *)document;
-(void)goBack;
-(void)setDocument:(id)arg1;
-(double)timeRemaining;
-(void)togglePlayback;
-(void)touchesBegan:(id)arg1;
-(void)touchesMoved:(id)arg1;
-(BOOL)touchesEnded:(id)arg1;
-(void)touchesCancelled:(id)arg1;
-(void)goForth;
-(void)requestRendering:(BOOL)arg1;
-(void)lockRendering;
-(void)unlockRendering;
-(void)pauseWhenStill;
-(BOOL)displaysFPS;
-(void)setDisplaysFPS:(BOOL)arg1;
-(void)gotoBeginning;
-(void)gotoEnd;
-(void)nextFrame;
-(void)prevFrame;
-(CGImageRef)snapshotAsCGImageForTime:(double)arg1 withSize:(CGSize)arg2;
-(CGImageRef)snapshotAsCGImage;
-(void)warmupRenderer;
-(BOOL)stopWithVideo;
-(void)setStopWithVideo:(BOOL)arg1;
-(BOOL)enableSlideDidChangeNotification;
-(void)setEnableSlideDidChangeNotification:(BOOL)arg1;

@end

