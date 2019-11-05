/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <UIKitCore/UILabel.h>

@interface TVCKLabel : UILabel {

	long long _previousNumberOfLines;
	CGSize _cachedSizeThatFits;
	CGSize _previousTargetSize;
	CGRect _cachedTextRectForBounds;
	CGRect _previousBounds;

}

@property (assign,nonatomic) CGRect cachedTextRectForBounds;               //@synthesize cachedTextRectForBounds=_cachedTextRectForBounds - In the implementation block
@property (assign,nonatomic) CGRect previousBounds;                        //@synthesize previousBounds=_previousBounds - In the implementation block
@property (assign,nonatomic) long long previousNumberOfLines;              //@synthesize previousNumberOfLines=_previousNumberOfLines - In the implementation block
@property (assign,nonatomic) CGSize cachedSizeThatFits;                    //@synthesize cachedSizeThatFits=_cachedSizeThatFits - In the implementation block
@property (assign,nonatomic) CGSize previousTargetSize;                    //@synthesize previousTargetSize=_previousTargetSize - In the implementation block
-(void)setText:(id)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(void)setBaselineAdjustment:(long long)arg1 ;
-(void)_clearCachedValues;
-(CGSize)cachedSizeThatFits;
-(CGSize)previousTargetSize;
-(void)setCachedSizeThatFits:(CGSize)arg1 ;
-(void)setPreviousTargetSize:(CGSize)arg1 ;
-(CGRect)previousBounds;
-(long long)previousNumberOfLines;
-(CGRect)cachedTextRectForBounds;
-(void)setCachedTextRectForBounds:(CGRect)arg1 ;
-(void)setPreviousBounds:(CGRect)arg1 ;
-(void)setPreviousNumberOfLines:(long long)arg1 ;
@end

