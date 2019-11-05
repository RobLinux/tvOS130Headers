/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HBUITopShelfParadeBackgroundViewController <NSObject>
@property (assign,nonatomic,__weak) id<HBUITopShelfParadeBackgroundViewControllerDelegate> delegate; 
@property (nonatomic,retain) id<HBUITopShelfParadeItem> paradeItem; 
@property (assign,nonatomic) BOOL isCenterViewController; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,getter=isContentOccluded,nonatomic) BOOL contentOccluded; 
@property (nonatomic,readonly) long long contentState; 
@property (assign,nonatomic) BOOL preventsDisplaySleepDuringPreviewVideoPlayback; 
@optional
-(void)setPreventsDisplaySleepDuringPreviewVideoPlayback:(BOOL)arg1;
-(BOOL)preventsDisplaySleepDuringPreviewVideoPlayback;

@required
-(id<HBUITopShelfParadeBackgroundViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)prepareForReuse;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1;
-(long long)contentState;
-(id<HBUITopShelfParadeItem>)paradeItem;
-(void)setParadeItem:(id)arg1;
-(void)setContentOccluded:(BOOL)arg1;
-(BOOL)isContentOccluded;
-(void)setIsCenterViewController:(BOOL)arg1;
-(BOOL)isCenterViewController;

@end
