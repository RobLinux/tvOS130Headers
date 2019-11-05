/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXViewSpec.h>

@class NSDictionary, UIColor, UIFont;

@interface PXLabelSpec : PXViewSpec {

	BOOL _adjustsFontSizeToFitWidth;
	BOOL _allowTruncation;
	UIColor* _textColor;
	UIFont* _font;
	NSDictionary* _textAttributes;
	NSDictionary* _fallbackTextAttributes;
	long long _textAlignment;
	unsigned long long _numberOfLines;
	long long _verticalAlignment;
	long long _capitalization;
	long long _fallbackCapitalization;
	double _minimumScaleFactor;
	double _minimumTruncatedScaleFactor;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,copy) UIColor * textColor;                                //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) UIFont * font;                                      //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes;                      //@synthesize textAttributes=_textAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * fallbackTextAttributes;              //@synthesize fallbackTextAttributes=_fallbackTextAttributes - In the implementation block
@property (assign,nonatomic) long long textAlignment;                          //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLines;                 //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                      //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) long long capitalization;                         //@synthesize capitalization=_capitalization - In the implementation block
@property (assign,nonatomic) long long fallbackCapitalization;                 //@synthesize fallbackCapitalization=_fallbackCapitalization - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth;                   //@synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth - In the implementation block
@property (assign,nonatomic) double minimumScaleFactor;                        //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL allowTruncation;                             //@synthesize allowTruncation=_allowTruncation - In the implementation block
@property (assign,nonatomic) double minimumTruncatedScaleFactor;               //@synthesize minimumTruncatedScaleFactor=_minimumTruncatedScaleFactor - In the implementation block
+(id)px_headerTitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2 ;
+(id)px_headerSubtitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(UIEdgeInsets)contentInsets;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(double)minimumScaleFactor;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(long long)verticalAlignment;
-(long long)capitalization;
-(void)setCapitalization:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(unsigned long long)numberOfLines;
-(long long)textAlignment;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)textAttributes;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(BOOL)allowTruncation;
-(NSDictionary *)fallbackTextAttributes;
-(void)setFallbackTextAttributes:(NSDictionary *)arg1 ;
-(long long)fallbackCapitalization;
-(void)setFallbackCapitalization:(long long)arg1 ;
-(void)setAllowTruncation:(BOOL)arg1 ;
-(double)minimumTruncatedScaleFactor;
-(void)setMinimumTruncatedScaleFactor:(double)arg1 ;
@end

