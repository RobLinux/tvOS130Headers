/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPArtworkColorAnalysis.h>

@class UIColor;

@interface MPMutableArtworkColorAnalysis : MPArtworkColorAnalysis

@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,getter=isBackgroundColorLight,nonatomic) BOOL backgroundColorLight; 
@property (nonatomic,retain) UIColor * primaryTextColor; 
@property (assign,getter=isPrimaryTextColorLight,nonatomic) BOOL primaryTextColorLight; 
@property (nonatomic,retain) UIColor * secondaryTextColor; 
@property (assign,getter=isSecondaryTextColorLight,nonatomic) BOOL secondaryTextColorLight; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(void)setBackgroundColorLight:(BOOL)arg1 ;
-(void)setPrimaryTextColorLight:(BOOL)arg1 ;
-(void)setSecondaryTextColorLight:(BOOL)arg1 ;
@end

