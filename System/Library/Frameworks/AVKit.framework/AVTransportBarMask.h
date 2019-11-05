/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVKit/AVKit-Structs.h>
@class UIImage, NSArray;

@interface AVTransportBarMask : NSObject {

	UIImage* _maskImage;
	double _xNeedlePosition;
	double _savedPosition;
	double _duration;
	double _unavailableFractionLeading;
	double _availableFraction;
	double _unavailableFractionTrailing;
	long long _fillStyle;
	NSArray* _interstitialTimes;
	double _navigationAlpha;
	CGSize _barSize;

}

@property (assign,nonatomic) CGSize barSize;                                  //@synthesize barSize=_barSize - In the implementation block
@property (assign,nonatomic) double xNeedlePosition;                          //@synthesize xNeedlePosition=_xNeedlePosition - In the implementation block
@property (assign,nonatomic) double savedPosition;                            //@synthesize savedPosition=_savedPosition - In the implementation block
@property (assign,nonatomic) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double unavailableFractionLeading;               //@synthesize unavailableFractionLeading=_unavailableFractionLeading - In the implementation block
@property (assign,nonatomic) double availableFraction;                        //@synthesize availableFraction=_availableFraction - In the implementation block
@property (assign,nonatomic) double unavailableFractionTrailing;              //@synthesize unavailableFractionTrailing=_unavailableFractionTrailing - In the implementation block
@property (assign,nonatomic) long long fillStyle;                             //@synthesize fillStyle=_fillStyle - In the implementation block
@property (nonatomic,retain) NSArray * interstitialTimes;                     //@synthesize interstitialTimes=_interstitialTimes - In the implementation block
@property (assign,nonatomic) double navigationAlpha;                          //@synthesize navigationAlpha=_navigationAlpha - In the implementation block
@property (readonly) UIImage * maskImage; 
@property (getter=isDirty,readonly) BOOL dirty; 
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)isDirty;
-(UIImage *)maskImage;
-(void)setUnavailableFractionLeading:(double)arg1 ;
-(void)setAvailableFraction:(double)arg1 ;
-(NSArray *)interstitialTimes;
-(void)setInterstitialTimes:(NSArray *)arg1 ;
-(double)unavailableFractionLeading;
-(double)availableFraction;
-(void)setXNeedlePosition:(double)arg1 ;
-(void)setUnavailableFractionTrailing:(double)arg1 ;
-(void)setBarSize:(CGSize)arg1 ;
-(void)setFillStyle:(long long)arg1 ;
-(id)_newMaskImage;
-(CGSize)barSize;
-(double)xNeedlePosition;
-(double)savedPosition;
-(void)setSavedPosition:(double)arg1 ;
-(double)unavailableFractionTrailing;
-(long long)fillStyle;
-(double)navigationAlpha;
-(void)setNavigationAlpha:(double)arg1 ;
@end

