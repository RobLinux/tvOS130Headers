/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UIView.h>

@class PSCapacityBarData, UIColor;

@interface PSCapacityBarView : UIView {

	PSCapacityBarData* _barData;
	UIColor* _barBackgroundColor;
	UIColor* _barSeparatorColor;
	UIColor* _barOtherDataColor;

}

@property (nonatomic,retain) PSCapacityBarData * barData;               //@synthesize barData=_barData - In the implementation block
@property (nonatomic,retain) UIColor * barBackgroundColor;              //@synthesize barBackgroundColor=_barBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * barSeparatorColor;               //@synthesize barSeparatorColor=_barSeparatorColor - In the implementation block
@property (nonatomic,retain) UIColor * barOtherDataColor;               //@synthesize barOtherDataColor=_barOtherDataColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBarBackgroundColor:(UIColor *)arg1 ;
-(void)setBarOtherDataColor:(UIColor *)arg1 ;
-(void)setBarSeparatorColor:(UIColor *)arg1 ;
-(UIColor *)barOtherDataColor;
-(void)setBarData:(PSCapacityBarData *)arg1 ;
-(PSCapacityBarData *)barData;
-(id)bezierPathWithLineFrom:(CGPoint)arg1 to:(CGPoint)arg2 ;
-(UIColor *)barBackgroundColor;
-(UIColor *)barSeparatorColor;
@end

