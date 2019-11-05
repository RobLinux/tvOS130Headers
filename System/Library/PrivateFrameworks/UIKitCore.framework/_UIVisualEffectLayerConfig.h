/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor;

@interface _UIVisualEffectLayerConfig : NSObject {

	NSString* _filterType;
	double _opacity;
	UIColor* _fillColor;

}

@property (nonatomic,readonly) double opacity;                     //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,readonly) NSString * filterType;              //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,readonly) UIColor * fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
+(id)layerWithFillColor:(id)arg1 opacity:(double)arg2 filterType:(id)arg3 ;
-(id)description;
-(NSString *)filterType;
-(double)opacity;
-(UIColor *)fillColor;
-(void)configureLayerView:(id)arg1 ;
-(void)deconfigureLayerView:(id)arg1 ;
@end

