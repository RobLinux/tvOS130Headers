/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageDecorator.h>

@class UIColor;

@interface _TVUberBlurImageDecorator : TVImageDecorator {

	UIColor* _gradientColor;
	unsigned long long _blurType;
	unsigned long long _blurStyle;

}

@property (nonatomic,retain) UIColor * gradientColor;                   //@synthesize gradientColor=_gradientColor - In the implementation block
@property (assign,nonatomic) unsigned long long blurType;               //@synthesize blurType=_blurType - In the implementation block
@property (assign,nonatomic) unsigned long long blurStyle;              //@synthesize blurStyle=_blurStyle - In the implementation block
-(UIColor *)gradientColor;
-(void)setBlurStyle:(unsigned long long)arg1 ;
-(unsigned long long)blurStyle;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(id)decoratorIdentifier;
-(void)setGradientColor:(UIColor *)arg1 ;
-(unsigned long long)blurType;
-(void)setBlurType:(unsigned long long)arg1 ;
@end

