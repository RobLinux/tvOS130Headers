/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class UILabel;

@interface PXLabelAnimationContext : NSObject {

	UILabel* _label;
	CGRect _destinationRect;

}

@property (retain) UILabel * label;                     //@synthesize label=_label - In the implementation block
@property (assign) CGRect destinationRect;              //@synthesize destinationRect=_destinationRect - In the implementation block
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(CGRect)destinationRect;
-(id)initWithLabel:(id)arg1 andDestinationRect:(CGRect)arg2 ;
-(void)setDestinationRect:(CGRect)arg1 ;
@end

