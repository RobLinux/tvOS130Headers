/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

@interface VUIEditorialCellLayout : TVViewLayout {

	TVImageLayout* _imageLayout;
	VUITextLayout* _secondaryTextLayout;
	VUITextLayout* _titleTextLayout;
	VUITextLayout* _subtitleTextLayout;

}

@property (nonatomic,retain) TVImageLayout * imageLayout;                      //@synthesize imageLayout=_imageLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * secondaryTextLayout;              //@synthesize secondaryTextLayout=_secondaryTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleTextLayout;                  //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * subtitleTextLayout;               //@synthesize subtitleTextLayout=_subtitleTextLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(VUITextLayout *)titleTextLayout;
-(void)setImageLayout:(TVImageLayout *)arg1 ;
-(TVImageLayout *)imageLayout;
-(VUITextLayout *)subtitleTextLayout;
-(void)setTitleTextLayout:(VUITextLayout *)arg1 ;
-(void)setSubtitleTextLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)secondaryTextLayout;
-(void)setSecondaryTextLayout:(VUITextLayout *)arg1 ;
@end

