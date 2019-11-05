/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIViewBasicTile.h>

@class UIView, PXTitleSubtitleUILabel, NSString, PXTitleSubtitleLabelSpec;

@interface PXTitleSubtitleUILabelTile : NSObject <PXUIViewBasicTile> {

	UIView* _view;
	PXTitleSubtitleUILabel* _label;
	BOOL _rendersTextAsynchronously;
	NSString* _title;
	NSString* _subtitle;
	PXTitleSubtitleLabelSpec* _labelSpec;
	long long __animationCount;

}

@property (assign,setter=_setAnimationCount:,nonatomic) long long _animationCount;              //@synthesize _animationCount=__animationCount - In the implementation block
@property (nonatomic,copy) NSString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) PXTitleSubtitleLabelSpec * labelSpec;                       //@synthesize labelSpec=_labelSpec - In the implementation block
@property (assign,nonatomic) BOOL rendersTextAsynchronously;                                    //@synthesize rendersTextAsynchronously=_rendersTextAsynchronously - In the implementation block
@property (nonatomic,readonly) double lastBaseline; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(UIView *)view;
-(void)willAnimateToGeometry:(PXTileGeometry*)arg1 toUserData:(id)arg2 withOptions:(id)arg3 ;
-(void)didAnimateToGeometry:(PXTileGeometry*)arg1 toUserData:(id)arg2 withOptions:(id)arg3 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)becomeReusable;
-(double)lastBaseline;
-(void)_setAnimationCount:(long long)arg1 ;
-(long long)_animationCount;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)setRendersTextAsynchronously:(BOOL)arg1 ;
-(void)_updateLabelTitleAndSubtitle;
-(PXTitleSubtitleLabelSpec *)labelSpec;
-(BOOL)rendersTextAsynchronously;
@end

